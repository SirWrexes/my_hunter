##
## EPITECH PROJECT, 2019
## Libfox
## File description:
## Wrapper sources
##

ifndef MKWRAPPERS
MKWRAPPERS := 1

# Malloc
######################################################################
WRAPSRC := ./lib/libfox/extra/tests/wrappers/wrap_malloc.c
WRAPPED := malloc
# ------------------------------------------------------------------ #
WRAPSRC += ./lib/libfox/extra/tests/wrappers/wrap_open.c
WRAPPED += open
######################################################################

# Wrap flags added to CFLAGS for compilation
######################################################################
WRAPFLAGS := $(foreach wrap, $(WRAPPED),-Wl,--wrap=$(strip $(wrap)))
######################################################################

endif
