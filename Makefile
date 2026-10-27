# Project Twinblade: matching build of SLUS_007.26 (Brave Fencer Musashi, USA)
# Run from an MSYS2 shell, or:  C:\msys64\usr\bin\make.exe -C <repo>
#
#   make overlays - extract overlay payloads from MAIN.CD into disc/overlays/
#   make split    - regenerate asm/ and the linker scripts (EXE and overlays)
#   make check-abil - rebuild and check the 35 ability packages (check-ovlNN: one of them)
#   make check-stg  - rebuild and check the 139 other stage images (check-sc02_031: one; STG=SC03_005: only those)
#   make          - build the EXE and every overlay, checking each against the original
#   make progress - count game functions decompiled to C in src/

BASENAME := slus_007.26
TARGET   := disc/files/SLUS_007.26
BUILD    := build
ELF      := $(BUILD)/$(BASENAME).elf
EXE      := $(BUILD)/SLUS_007.26
LD_SCRIPT := $(BUILD)/$(BASENAME).ld

CROSS   := tools/toolchain/bin/mipsel-none-elf-
AS      := $(CROSS)as
LD      := $(CROSS)ld
OBJCOPY := $(CROSS)objcopy
PYTHON  := .venv/Scripts/python.exe
SPLAT   := $(PYTHON) -m splat split

AS_FLAGS := -EL -march=r3000 -mtune=r3000 -no-pad-sections -G0 -Iinclude

# Original compiler: GCC 2.7.2 (PsyQ). Most game code is -O2; a few files
# were built unoptimised (-O0, every function keeps a frame pointer).
CC_DIR    := tools/compilers/gcc-2.7.2-psx
CPP       := $(CC_DIR)/cpp.exe
CC1       := $(CC_DIR)/cc1.exe
CPP_FLAGS := -undef -Iinclude -D_LANGUAGE_C -DPSX
CC1_FLAGS = -quiet $(OPT_FLAGS) -G0 -mips1 -mcpu=3000 -fgnu-linker -mgas -msoft-float
OPT_FLAGS := -O2
O0_FILES  := main code_8002C410 stage/engine_8013B568 stage/engine_80144B9C \
             ovl39/ovl39_800D0100 ovl37/ovl37
$(foreach f,$(O0_FILES),$(eval $(BUILD)/src/$(f).o: OPT_FLAGS := -O0))
# r209: a stage's -O0 run is its own file, src/stg/<stage>_o0.c (tools/stage_units.py; the four SC03 stages)
$(BUILD)/src/stg/%_o0.o: OPT_FLAGS := -O0
# tools/maspsx_tw.py (r192): maspsx with the sltu_at rule on (the game's assembler wrote `sltu rd,rs,-N` as
# `li at,-N; sltu rd,rs,at`; asm/ has no negative sltiu), tools/maspsx itself unmodified
MASPSX    := $(PYTHON) tools/maspsx_tw.py --expand-div --aspsx-version=2.79
LD_FLAGS := -nostdlib --no-check-sections -Map $(BUILD)/$(BASENAME).map \
            -T $(LD_SCRIPT) \
            -T $(BUILD)/undefined_syms_auto.txt \
            -T undefined_syms_extra.txt \
            -T $(BUILD)/undefined_funcs_auto.txt

# Overlays: code loaded from MAIN.CD at run time, each with its own splat config
# (<name>.yaml), asm/<name>/, src/<name>/ and link. <name>_TARGET is the
# extracted payload it must match.
# The mode overlays (ovl39 on) are the exact code blocks `make overlays` writes to disc/overlays/code/
# (docs/overlays.md).
OVERLAYS     := ovl38 stage ovl39 ovl36 ovl37 ovl3a ovl3b
ovl38_TARGET := disc/overlays/main_01.bin
stage_TARGET := disc/pac4/SC03_001.bin
ovl39_TARGET := disc/overlays/code/ovl39.bin
ovl36_TARGET := disc/overlays/code/ovl36.bin
ovl37_TARGET := disc/overlays/code/ovl37.bin
ovl3a_TARGET := disc/overlays/code/ovl3a.bin
ovl3b_TARGET := disc/overlays/code/ovl3b.bin

# The ability packages (MAIN.CD entries 13-47, docs/overlays.md): abil/<name>.yaml, written by tools/gen_ability_ovls.py
# (`make split-abil`), asm/abil/<name>/, src/abil/<name>.c, build/abil/<name>/, checked against
# disc/overlays/code/<name>.bin. They share their slot's address; their symbols carry the package ID.
ABIL := $(patsubst abil/%.yaml,%,$(wildcard abil/*.yaml))

# The other stage images (r143, docs/decomp_pilot.md): stg/<name>.yaml, written by tools/gen_stage_cfgs.py (`make
# split-stg`), only the stage's own code split (the engine is a bin piece, matched in src/stage), asm/stg/<name>/,
# src/stg/<name>.c, build/stg/<name>/, checked against disc/pac4/<NAME>.bin. Symbols carry the stage's name.
# r209: a stage with an -O0 run also has src/stg/<name>_o0.c (built -O0) and <name>_post.c (tools/stage_units.py).
# r145: all 139 images are configured. Quick mode: `make check-stg STG=SC03_005` (or several, space-separated) defines
# and checks only those stages.
STG_ALL := $(patsubst stg/%.yaml,%,$(wildcard stg/*.yaml))
override STG := $(if $(STG),$(shell echo $(STG) | tr A-Z a-z),$(STG_ALL))
$(if $(filter-out $(STG_ALL),$(STG)),$(error STG: no stg/<name>.yaml for $(filter-out $(STG_ALL),$(STG))))

# asm/nonmatchings/ is pulled into the C files by INCLUDE_ASM, not assembled alone
NOT_OVL := $(foreach o,$(OVERLAYS),-not -path 'asm/$(o)/*' -not -path 'src/$(o)/*') -not -path 'asm/abil/*' -not -path 'src/abil/*' -not -path 'asm/stg/*' -not -path 'src/stg/*'
S_FILES := $(shell find asm -name '*.s' -not -path 'asm/nonmatchings/*' $(NOT_OVL) 2>/dev/null)
C_FILES := $(shell find src -name '*.c' $(NOT_OVL) 2>/dev/null)
O_FILES := $(patsubst %.s,$(BUILD)/%.o,$(S_FILES)) $(patsubst %.c,$(BUILD)/%.o,$(C_FILES))

.PHONY: all split split-abil split-stg stg-cfgs stage-progress check check-main check-abil check-stg clean progress overlays \
        regress regress-targets coverage

all: check

overlays:
	$(PYTHON) tools/extract_overlays.py disc/files/LIST.CD disc/files/MAIN.CD disc/overlays

split:
	$(SPLAT) $(BASENAME).yaml
	$(foreach o,$(OVERLAYS),$(SPLAT) $(o).yaml &&) true
	$(PYTHON) tools/gen_ability_ovls.py --split
	$(PYTHON) tools/gen_stage_cfgs.py --resplit

split-abil:
	$(PYTHON) tools/gen_ability_ovls.py --split

# split-stg: splat the committed stage configs as they are (a fresh checkout); stg-cfgs: regenerate the configs and
# symbol files of every image (after the engine's names change; needs build/stage/stage.elf)
split-stg:
	$(PYTHON) tools/gen_stage_cfgs.py --resplit $(STG)

stg-cfgs:
	$(PYTHON) tools/gen_stage_cfgs.py --split --all

check: check-main $(addprefix check-,$(OVERLAYS)) check-abil check-stg

# make regress: every check above in one PASS/FAIL table with timings, exit 1 on any failure (tools/regress.py,
# docs/test_infrastructure.md). Quick mode: `make regress R="abil"` or `R="sc03_005 sc02_031"` (areas or image names;
# names given with their area word take only those images).
regress:
	$(PYTHON) tools/regress.py $(R)

# gte-twins (r208): report the include/gte.h macros with no C twin in pc/gte_pc.h (the PC build needs one each)
gte-twins:
	$(PYTHON) tools/gte_twins.py

# one line per checked image, "<area> <name> <built binary> <original>": what tools/regress.py builds and compares
# (a stage's original is disc/pac4/<NAME>.bin in upper case: regress.py makes it so, rather than a sed that not every
# sed on a Windows PATH honours)
regress-targets:
	@echo "main main $(EXE) $(TARGET)"
	@$(foreach o,$(OVERLAYS),echo "ovl $(o) $(BUILD)/$(o)/$(o).bin $($(o)_TARGET)";) true
	@for n in $(ABIL); do echo "abil $$n $(BUILD)/abil/$$n/$$n.bin disc/overlays/code/$$n.bin"; done
	@for n in $(STG); do echo "stg $$n $(BUILD)/stg/$$n/$$n.bin disc/pac4/$$n.bin"; done

check-abil: $(addprefix check-,$(ABIL))

check-stg: $(addprefix check-,$(STG))

check-main: $(EXE)
	@echo "$$(sha1sum < $(TARGET) | cut -d' ' -f1)  $(EXE)" | sha1sum -c -

$(EXE): $(ELF)
	$(OBJCOPY) -O binary $< $@

$(ELF): $(O_FILES) $(LD_SCRIPT)
	$(LD) $(LD_FLAGS) -o $@

$(BUILD)/%.o: %.s
	@mkdir -p $(dir $@)
	$(AS) $(AS_FLAGS) -o $@ $<

# cpp -> cc1 -> maspsx -> jtbl_relabel -> as, keeping the intermediates for inspection. jtbl_relabel points a
# matched function's jump tables at the original ones in the split's data (tools/jtbl_relabel.py says why); it
# reads the tables of the file's own segment: asm/<overlay> for src/<overlay>/, asm for the EXE.
# (r209: src/stg/<stage>_o0.c and _post.c read their stage's asm/stg/<stage>)
JTBL_ASM = $(firstword $(foreach o,$(OVERLAYS),$(if $(filter $(o)/%,$*),asm/$(o))) $(if $(filter abil/% stg/%,$*),asm/$(patsubst %_o0,%,$(patsubst %_post,%,$*))) asm)
$(BUILD)/src/%.o: src/%.c tools/jtbl_relabel.py $(shell find include -type f 2>/dev/null)
	@mkdir -p $(dir $@)
	$(CPP) $(CPP_FLAGS) $< > $(BUILD)/src/$*.i
	$(CC1) $(CC1_FLAGS) $(BUILD)/src/$*.i -o $(BUILD)/src/$*.cc1.s
	$(MASPSX) $(BUILD)/src/$*.cc1.s > $(BUILD)/src/$*.maspsx.s
	$(PYTHON) tools/jtbl_relabel.py $(JTBL_ASM) $(BUILD)/src/$*.maspsx.s $(BUILD)/src/$*.s $(wildcard symbol_addrs*.txt)
	$(AS) $(AS_FLAGS) -o $@ $(BUILD)/src/$*.s

# Raw binary pieces of a split (splat `bin` segments, written to assets/): linked as .data
$(BUILD)/assets/%.o: assets/%.bin
	@mkdir -p $(dir $@)
	$(OBJCOPY) -I binary -O elf32-littlemips $< $@

# Symbols defined by the EXE itself (its own address range only), so overlay
# C code can refer to EXE data and functions by name
EXE_SYMS := $(BUILD)/exe_syms.ld
$(EXE_SYMS): $(ELF)
	$(CROSS)nm --defined-only -g $< | $(PYTHON) tools/exe_syms.py > $@

define OVERLAY_RULES
$(1)_S := $$(shell find asm/$(1) -name '*.s' -not -path 'asm/$(1)/nonmatchings/*' 2>/dev/null)
$(1)_C := $$(shell find src/$(1) -name '*.c' 2>/dev/null)
$(1)_B := $$(shell grep -o '$(BUILD)/assets/[A-Za-z0-9_]*\.o' $(BUILD)/$(1)/$(1).ld 2>/dev/null)
$(1)_O := $$(patsubst %.s,$(BUILD)/%.o,$$($(1)_S)) $$(patsubst %.c,$(BUILD)/%.o,$$($(1)_C)) $$($(1)_B)

$(BUILD)/$(1)/$(1).elf: $$($(1)_O) $(BUILD)/$(1)/$(1).ld $(EXE_SYMS)
	$(LD) -nostdlib --no-check-sections -Map $(BUILD)/$(1)/$(1).map \
	    -T $(BUILD)/$(1)/$(1).ld \
	    -T $(BUILD)/$(1)/undefined_syms_auto.txt \
	    -T $(BUILD)/$(1)/undefined_funcs_auto.txt \
	    -T $(EXE_SYMS) -o $$@

$(BUILD)/$(1)/$(1).bin: $(BUILD)/$(1)/$(1).elf
	$(OBJCOPY) -O binary $$< $$@

check-$(1): $(BUILD)/$(1)/$(1).bin
	@echo "$$$$(sha1sum < $$($(1)_TARGET) | cut -d' ' -f1)  $$<" | sha1sum -c -
endef
$(foreach o,$(OVERLAYS),$(eval $(call OVERLAY_RULES,$(o))))

define ABIL_RULES
$(1)_S := $$(shell find asm/abil/$(1) -name '*.s' -not -path 'asm/abil/$(1)/nonmatchings/*' 2>/dev/null)
$(1)_O := $$(patsubst %.s,$(BUILD)/%.o,$$($(1)_S)) $(BUILD)/src/abil/$(1).o

$(BUILD)/abil/$(1)/$(1).elf: $$($(1)_O) $(BUILD)/abil/$(1)/$(1).ld $(EXE_SYMS)
	$(LD) -nostdlib --no-check-sections -Map $(BUILD)/abil/$(1)/$(1).map 	    -T $(BUILD)/abil/$(1)/$(1).ld 	    -T $(BUILD)/abil/$(1)/undefined_syms_auto.txt 	    -T $(BUILD)/abil/$(1)/undefined_funcs_auto.txt 	    -T $(EXE_SYMS) -o $$@

$(BUILD)/abil/$(1)/$(1).bin: $(BUILD)/abil/$(1)/$(1).elf
	$(OBJCOPY) -O binary $$< $$@

check-$(1): $(BUILD)/abil/$(1)/$(1).bin
	@echo "$$$$(sha1sum < disc/overlays/code/$(1).bin | cut -d' ' -f1)  $$<" | sha1sum -c -
endef
$(foreach o,$(ABIL),$(eval $(call ABIL_RULES,$(o))))

define STG_RULES
$(1)_S := $$(wildcard asm/stg/$(1)/data/*.s)
$(1)_B := $$(patsubst assets/%.bin,$(BUILD)/assets/%.o,$$(wildcard assets/stg/$(1)_*.bin))
$(1)_C := $$(wildcard src/stg/$(1)_o0.c src/stg/$(1)_post.c)
$(1)_O := $$(patsubst %.s,$(BUILD)/%.o,$$($(1)_S)) $(BUILD)/src/stg/$(1).o $$(patsubst %.c,$(BUILD)/%.o,$$($(1)_C)) $$($(1)_B)

$(BUILD)/stg/$(1)/$(1).elf: $$($(1)_O) $(BUILD)/stg/$(1)/$(1).ld $(EXE_SYMS)
	$(LD) -nostdlib --no-check-sections -Map $(BUILD)/stg/$(1)/$(1).map \
	    -T $(BUILD)/stg/$(1)/$(1).ld \
	    -T $(BUILD)/stg/$(1)/undefined_syms_auto.txt \
	    -T $(BUILD)/stg/$(1)/undefined_funcs_auto.txt \
	    -T $(EXE_SYMS) -o $$@

$(BUILD)/stg/$(1)/$(1).bin: $(BUILD)/stg/$(1)/$(1).elf
	$(OBJCOPY) -O binary $$< $$@

check-$(1): $(BUILD)/stg/$(1)/$(1).bin
	@echo "$$$$(sha1sum < disc/pac4/$$(shell echo $(1) | tr a-z A-Z).bin | cut -d' ' -f1)  $$<" | sha1sum -c -
endef
$(foreach o,$(STG),$(eval $(call STG_RULES,$(o))))

# Game functions in src/ that are real C rather than INCLUDE_ASM, per unit, with splat's empty stubs counted apart
# (r142: they used to count as decompiled). Reads the sources only; tools/coverage.py --progress.
progress:
	@$(PYTHON) tools/coverage.py --progress

# what `make regress` covers, in bytes per area: real C, stubs, asm, PsyQ library; and the proof that every stage
# image's engine is the village's (needs a built tree)
coverage:
	@$(PYTHON) tools/coverage.py

# matched / total for every split stage image (tools/stage_progress.py; --md rewrites docs/stage_status.md)
stage-progress:
	$(PYTHON) tools/stage_progress.py

clean:
	rm -rf $(BUILD)/asm $(BUILD)/src $(ELF) $(EXE) $(BUILD)/$(BASENAME).map
	rm -f $(foreach o,$(OVERLAYS),$(BUILD)/$(o)/$(o).elf $(BUILD)/$(o)/$(o).bin $(BUILD)/$(o)/$(o).map)
	rm -f $(foreach o,$(ABIL),$(BUILD)/abil/$(o)/$(o).elf $(BUILD)/abil/$(o)/$(o).bin $(BUILD)/abil/$(o)/$(o).map)
	rm -f $(foreach o,$(STG),$(BUILD)/stg/$(o)/$(o).elf $(BUILD)/stg/$(o)/$(o).bin $(BUILD)/stg/$(o)/$(o).map)
