#!/bin/bash
# Build the PSX-patched old GCC compilers natively on Windows under MSYS2.
# Adapted from decompals/old-gcc's macOS scripts (tools/old-gcc/*-macos.sh):
# MSYS2 is LP64 like macOS, so the same xm-darwin.h host header is reused.
#
# Run from an MSYS2 shell:  tools/build_old_gcc.sh 2.7.2   (or 2.8.1)
# Output: tools/compilers/gcc-<version>-psx/{cpp,cc1,gcc}.exe
set -e

VERSION="$1"
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
PATCHES="$ROOT/tools/old-gcc/patches"
TESTS="$ROOT/tools/old-gcc/tests"
OUTDIR="$ROOT/tools/compilers/gcc-$VERSION-psx"
WORKDIR="$(mktemp -d)"
trap 'rm -rf "$WORKDIR"' EXIT

export PATH="/usr/bin:$PATH"
unset CC CXX

case "$VERSION" in
    2.7.2) URL=https://ftp.gnu.org/old-gnu/gcc/gcc-2.7.2.tar.gz ;;
    2.8.1) URL=https://ftp.gnu.org/gnu/gcc/gcc-2.8.1.tar.gz ;;
    *) echo "unsupported version: $VERSION"; exit 1 ;;
esac

cd "$WORKDIR"
wget -q -O - "$URL" | tar xz
cd "gcc-$VERSION"

grep -rl 'include <varargs\.h>' *.c | xargs chmod u+w
sed -i 's/include <varargs\.h>/include <stdarg\.h>/g' *.c

if [ "$VERSION" = 2.7.2 ]; then
    patch -u -p1 obstack.h          -i "$PATCHES/obstack-2.7.2.h.patch"
    patch -u -p1 configure          -i "$PATCHES/configure.patch"
    patch -u -p1 config/mips/mips.h -i "$PATCHES/mipsel-2.7.patch"
    patch -su -p1                   <  "$PATCHES/psx-2.5.7.patch"
else
    patch -u -p1 obstack.h          -i "$PATCHES/obstack-2.8.1.h.patch"
    patch -u -p1 config/mips/mips.h -i "$PATCHES/mips.patch"
    patch -su -p1                   <  "$PATCHES/psx.patch"
fi

# Modern config.guess/config.sub (same pinned commits as upstream) so the
# x86_64-pc-msys host is recognised, plus psx* in the OS list.
chmod +w config.guess config.sub
wget -q -O config.guess "https://raw.githubusercontent.com/gcc-mirror/gcc/74af13c174714dd3b9f1ded4b39955f003c16361/config.guess"
wget -q -O config.sub   "https://raw.githubusercontent.com/gcc-mirror/gcc/6fad101f3063d722e3348d07dc93cf737f8709e4/config.sub"
chmod +x config.guess config.sub
sed -i 's/| hiux\* | abug | nacl\*/| psx* \\\n\t     | hiux* | abug | nacl*/' config.sub

# Teach configure about the MSYS2 host, using the LP64 darwin host header.
cp "$PATCHES/xm-darwin.h" config/xm-msys.h
# MSYS2 has no <stab.h>; use GCC's bundled gstab.h instead
sed -i 's/#define POSIX/#define POSIX\n#define NO_STAB_H/' config/xm-msys.h
chmod +w configure
awk '/^\t\*\)$/ { buf=$0; next }
     buf != "" { if (!done && /echo.*Configuration.*not supported/) {
       print "\t*-pc-msys*)"; print "\t\txm_file=xm-msys.h"
       print "\t\tfixincludes=Makefile.in"; print "\t\t;;"; done=1 }
       print buf; buf="" } { print }' configure > configure.tmp
mv configure.tmp configure
chmod +x configure

HOST=x86_64-pc-msys
CFLAGS="-std=gnu89 -w -Wno-int-conversion -Wno-implicit-function-declaration -Wno-return-mismatch -Wno-incompatible-pointer-types"
export CFLAGS
./configure \
    --target=mips-sony-psx \
    --host="$HOST" \
    --build="$HOST" \
    --prefix=/opt/cross \
    --with-endian-little \
    --with-gnu-as \
    --disable-gprof \
    --disable-gdb \
    --disable-werror

touch insn-config.h

make --jobs "$(nproc)" cpp cc1 xgcc CFLAGS="$CFLAGS"

# Same sanity tests as upstream
./cc1 -quiet -O2 "$TESTS/little_endian.c" -o little_endian.s
grep -E 'lbu\s\$2,0\(\$4\)' little_endian.s
./cc1 -quiet -O2 "$TESTS/section_attribute.c" -o /dev/null
./cc1 -quiet -O2 "$TESTS/host_wide_int.c" -o host_wide_int.s
grep -E '# 0x80000000$' host_wide_int.s

mkdir -p "$OUTDIR"
cp cpp.exe cc1.exe "$OUTDIR/"
cp xgcc.exe "$OUTDIR/gcc.exe"
# MSYS binaries need the MSYS runtime next to them to run outside MSYS2
cp /usr/bin/msys-2.0.dll "$OUTDIR/"
echo "Done: $OUTDIR"
