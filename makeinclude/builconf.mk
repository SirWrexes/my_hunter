##
## EPITECH PROJECT, 2019
## Multipart Makefile
## File description:
## Build and test config
##

ifndef MKBUILDCONF
MKBUILDCONF := 1

#
# Build settings
############################################################################################
INCDIRS := ./include
INCDIRS += ./lib/libfox/extra/include
CFLAGS  := -std=gnu99
CFLAGS  += -Wall -Wextra
CFLAGS  += -Werror
CFLAGS  += -fno-builtin
CFLAGS  += $(foreach dir, $(INCDIRS), -iquote $(dir))
LDFLAGS += $(foreach mod, $(FOXMODULES), -L./lib/libfox/$(strip $(mod)))
LDLIBS  += $(foreach mod, $(FOXMODULES), -lfox_$(strip $(mod)))
# ---------------------------------------------------------------------------------------- #
COV     := $(notdir $(OBJ:.o=.gc*)) $(notdir $(TST:.c=.gc*)) $(notdir $(WRAPSRC:.c=.gc*))
OBJ     := $(SRC:.c=.o) $(DEPSRC:.c=.o)
DEP     := $(OBJ:.o=.d) $(DEPSRC:.c=.d)
-include $(DEP)
.PRECIOUS := $(DEP)
############################################################################################


#
# Test config
############################################################################################
UTFLAGS   := --always-succeed --timeout 5
COVFLAGS  := -s --exclude-unreachable-branches
COVFLAGS  += $(foreach s, $(DEPSRC), -e $(notdir $(s)))
COVFLAGS  += --exclude='.*test_.*'
COVFLAGS  += --exclude='.*wrap_.*'
REPORTTXT := "TEST REPORT"
# ---------------------------------------------------------------------------------------- #
# Run `make tests SHOW_BRANCHES=1` to get branch coverage report
# 1 could actually be any value, all we need is for the variable to exist.
ifdef SHOW_BRANCHES
    COVFLAGS += -b
    REPORTTXT += "(branches)"
endif
############################################################################################

#
# If no libfox module is used, get the coverage at least.
############################################################################################
ifdef FOXMODULES
    FOXRULE = $(FOXMODULES)
else
    FOXRULE = tests
endif
############################################################################################

endif
