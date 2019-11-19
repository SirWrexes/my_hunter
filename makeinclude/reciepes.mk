##
## EPITECH PROJECT, 2019
## Multipart Makefile
## File description:
## Reciepes
##

ifndef MKRECIEPES
MKRECIEPES :=1

#
# Compile DB (recommended if you use vim with YouCompleteMe)
#########################################################################################
.PHONY: compiledb
compiledb:
	@$(ECHO$(NAME)) $(CBOLD)$(CLIGHTBLUE)"Create"$(CRESET) $(CLIGHTBLUE)"$(COMPILEDB)"$(CRESET)
	@[[ "$(shell which compiledb)" == "" ]] || compiledb -no $(COMPILEDB) make -ki $(COMPILEDBTARGET)
	@$(ECHO$(NAME)) $(CBOLD)$(CLIGHTBLUE)"Done."$(CRESET)
#########################################################################################


#
# Libfox modules
#########################################################################################
.PHONY: libfox
libfox:
	@$(ECHO$(NAME)) $(CORANGE)"Make libfox rule(s)"$(CRESET) $(CBOLD)$(foreach r,$(FOXRULE),"$r")$(CRESET)
	@echo
	@$(MAKE) ./lib/libfox $(FOXRULE)
#########################################################################################


#
# Build
#########################################################################################
.PHONY: build
build: libfox
build: | $(FILES)
	@$(CC) -o $(TARGET) $(CFLAGS) $(FILES) $(LDFLAGS) $(LDLIBS)
	@$(ECHO$(NAME)) $(CBOLD)"Link OK"$(CRESET)
	@$(ECHO$(NAME)) $(CBOLD)$(CLIGHTBLUE)"Done compiling"$(CRESET) $(CLIGHTBLUE)"$(TARGET)"$(CRESET)
#########################################################################################


#
# Main target
#########################################################################################
.PHONY: all
all: $(NAME)
$(NAME): TARGET          := $(BIN)
$(NAME): COMPILEDBTARGET := $(NAME)
$(NAME): FOXRULE         := $(FOXMODULES)
$(NAME): OBJ             += $(MAIN:.c=.o)
$(NAME): FILES           := $(OBJ)
$(NAME): compiledb libfox
$(NAME): $(MAIN:.c=.o) $(OBJ) build
#########################################################################################


#
# Debug target
#########################################################################################
.PHONY: debug
debug: $(DEBUGBIN)
$(DEBUGBIN): TARGET  := $(DEBUGBIN)
$(DEBUGBIN): FOXRULE := $(FOXMODULES)
$(DEBUGBIN): CFLAGS  += -ggdb3 -rdynamic
$(DEBUGBIN): SRC     += $(MAIN)
$(DEBUGBIN): compiledb libfox
	$(CC) -o $(DEBUGBIN) $(CFLAGS) $(SRC) $(LDFLAGS) $(LDLIBS)
#########################################################################################


#
# Test target
#########################################################################################
.PHONY: rm_test_files
rm_test_files:
	@$(foreach tmp, $(TESTTMP), $(RM) $(tmp))
# ------------------------------------------------------------------------------------- #
$(TESTBIN): TARGET          := $(TESTBIN)
$(TESTBIN): COMPILEDBTARGET := $(TESTBIN)
$(TESTBIN): FILES           += $(SRC) $(TEST) $(WRAPSRC)
$(TESTBIN): CFLAGS          += --coverage
$(TESTBIN): CFLAGS          += -Wl$(foreach wrap, $(WRAPPED),,--wrap=$(wrap))
$(TESTBIN): LDFLAGS         += -l criterion
$(TESTBIN): FOXRULE         := $(FOXRULE) tests
$(TESTBIN): rm_test_files compiledb libfox build
# ------------------------------------------------------------------------------------- #
.PHONY: tests test_report
tests: test_report
test_report: $(TESTBIN)
	@$(ECHO$(NAME)) $(CUNDERLN)$(CGREEN)$(REPORTTXT)$(CRESET)
	@./$(TESTBIN) $(UTFLAGS)
	@$(RM) $(notdir $(DEPSRC:.c=.gc*) $(WRAPSRC:.c=.gc*))
	-@$(GCOV) $(COVFLAGS)
#########################################################################################


#
# Cleanup
#########################################################################################
.PHONY: clean
clean:
	@$(ECHO$(NAME)) $(CRED)"Delete"$(CRESET)" objects"
	@$(RM) $(OBJ)
	@$(ECHO$(NAME)) $(CRED)"Delete"$(CRESET)" dependency files"
	@$(RM) $(DEP)
	@$(ECHO$(NAME)) $(CRED)"Delete"$(CRESET)" coverage files"
	@$(RM) $(COV)
	@$(ECHO$(NAME)) $(CRED)"Delete"$(CRESET)" progress bar script ($(PROGSCRIPT))"
	@$(RM) $(PROGSCRIPT)
# ------------------------------------------------------------------------------------- #
.PHONY: fclean
fclean:
	@$(ECHO$(NAME)) $(CRED)"Delete"$(CRESET)" $(COMPILEDB)"
	@$(RM) $(COMPILEDB)
	@$(ECHO$(NAME)) $(CRED)"Delete"$(CRESET)" objects"
	@$(RM) $(OBJ)
	@$(ECHO$(NAME)) $(CRED)"Delete"$(CRESET)" dependency files"
	@$(RM) $(DEP)
	@$(ECHO$(NAME)) $(CRED)"Delete"$(CRESET)" coverage files"
	@$(RM) $(COV)
	@$(ECHO$(NAME)) $(CRED)"Delete"$(CRESET) $(BIN)
	@$(RM) $(BIN)
	@$(ECHO$(NAME)) $(CRED)"Delete"$(CRESET) $(TESTBIN)
	@$(RM) $(TESTBIN)
	@$(ECHO$(NAME)) $(CRED)"Delete"$(CRESET) $(DEBUGBIN)
	@$(RM) $(DEBUGBIN)
	@$(ECHO$(NAME)) $(CRED)"Delete"$(CRESET)" progress bar script ($(PROGSCRIPT))"
	@$(RM) $(PROGSCRIPT)
# ------------------------------------------------------------------------------------- #
.PHONY: re
re:
	@$(MAKE) . fclean
	@$(MAKE) . $(.DEFAULT_GOAL)
#########################################################################################

endif
