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
ifneq "$(shell which compiledb)" ""
compiledb:
	@$(ECHO$(BIN)) $(CBOLD)$(CLIGHTBLUE)"Create"$(CRESET) $(CLIGHTBLUE)"$(COMPILEDB)"$(CRESET)
	@[[ "$(shell which compiledb)" == "" ]] || compiledb -no $(COMPILEDB) make -ki $(COMPILEDBTARGET)
	@$(ECHO$(BIN)) $(CBOLD)$(CLIGHTBLUE)"Done."$(CRESET)
else
compiledb:
	@$(ECHO$(BIN)) $(CRED)"compiledb "$(CBOLD)" is not installed"$(CRESET)$(CRED)", cannot create $(COMPILEDB)"
endif
#########################################################################################


#
# Libfox modules
#########################################################################################
ifndef NOLIBFOX
.PHONY: libfox
libfox:
	@$(ECHO$(BIN)) $(CORANGE)"Make libfox rule(s)"$(CRESET) $(CBOLD)$(foreach r,$(FOXRULE),"$r")$(CRESET)
	@echo
	@$(MAKE) ./lib/libfox $(FOXRULE)
else
.PHONY: libfox
libfox:
	@$(ECHO$(BIN)) $(CRED)$(CBOLD)"Skip libfox reciepe"$(CRESET)
endif
#########################################################################################


#
# Build
#########################################################################################
.PHONY: build
build: libfox
build: | $(FILES)
	@$(RM) $(COV)
	@$(CC) -o $(TARGET) $(CFLAGS) $(FILES) $(LDFLAGS) $(LDLIBS)	$(CMDOPTS)
	@$(ECHO$(BIN)) $(CBOLD)"Link OK"$(CRESET)
	@$(ECHO$(BIN)) $(CBOLD)$(CLIGHTBLUE)"Done compiling"$(CRESET) $(CLIGHTBLUE)"$(TARGET)"$(CRESET)
#########################################################################################


#
# Main target
#########################################################################################
.PHONY: all run
all: $(NAME)
$(NAME): TARGET          := $(BIN)
$(NAME): COMPILEDBTARGET := $(NAME)
$(NAME): FOXRULE         := $(FOXMODULES)
$(NAME): OBJ             += $(MAIN:.c=.o)
$(NAME): FILES           := $(OBJ)
$(NAME): compiledb libfox
$(NAME): $(MAIN:.c=.o) $(OBJ) build
# ------------------------------------------------------------------------------------- #
run: all
	./$(BIN)
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
	$(CC) -o $(DEBUGBIN) $(CFLAGS) $(SRC) $(LDFLAGS) $(LDLIBS) $(CMDOPTS)
#########################################################################################


#
# Test target
#########################################################################################
.PHONY: rm_test_files
rm_test_files:
	@$(ECHO$(BIN)) $(CRED)"Delete"$(CRESET)" test temp files"
	@$(foreach tmp, $(TESTTMP), $(RM) $(tmp))
# ------------------------------------------------------------------------------------- #
$(TESTBIN): TARGET          := $(TESTBIN)
$(TESTBIN): COMPILEDBTARGET := $(TESTBIN)
$(TESTBIN): FILES           += $(SRC) $(TST) $(WRAPSRC)
$(TESTBIN): CFLAGS          += --coverage
$(TESTBIN): CFLAGS          += $(WRAPFLAGS)
$(TESTBIN): LDFLAGS         += -l criterion
$(TESTBIN): FOXRULE         := $(FOXRULE) tests
$(TESTBIN): rm_test_files compiledb libfox build
# ------------------------------------------------------------------------------------- #
.PHONY: tests test_report
tests: test_report
test_report: $(TESTBIN)
	@$(ECHO$(BIN)) $(CUNDERLN)$(CGREEN)$(REPORTTXT)$(CRESET)
	@./$(TESTBIN) $(UTFLAGS)
	@$(RM) $(notdir $(DEPSRC:.c=.gc*) $(WRAPSRC:.c=.gc*))
	-@$(GCOV) $(COVFLAGS)
#########################################################################################


#
# Cleanup
#########################################################################################
.PHONY: clean
clean: FOXRULE := clean
clean: OBJ     += $(MAIN:.c=.o)
clean: libfox rm_test_files
	@$(ECHO$(BIN)) $(CRED)"Delete"$(CRESET)" objects"
	@$(RM) $(OBJ)
	@$(ECHO$(BIN)) $(CRED)"Delete"$(CRESET)" dependency files"
	@$(RM) $(DEP)
	@$(ECHO$(BIN)) $(CRED)"Delete"$(CRESET)" coverage files"
	@$(RM) $(COV)
	@$(ECHO$(BIN)) $(CRED)"Delete"$(CRESET)" progress bar script ($(PROGSCRIPT))"
	@$(RM) $(PROGSCRIPT)
# ------------------------------------------------------------------------------------- #
.PHONY: fclean
fclean: FOXRULE := fclean
fclean: OBJ     += $(MAIN:.c=.o)
fclean: libfox rm_test_files
	@$(ECHO$(BIN)) $(CRED)"Delete"$(CRESET)" $(COMPILEDB)"
	@$(RM) $(COMPILEDB)
	@$(ECHO$(BIN)) $(CRED)"Delete"$(CRESET)" objects"
	@$(RM) $(OBJ)
	@$(ECHO$(BIN)) $(CRED)"Delete"$(CRESET)" dependency files"
	@$(RM) $(DEP)
	@$(ECHO$(BIN)) $(CRED)"Delete"$(CRESET)" coverage files"
	@$(RM) $(COV)
	@$(ECHO$(BIN)) $(CRED)"Delete"$(CRESET) $(BIN)
	@$(RM) $(BIN)
	@$(ECHO$(BIN)) $(CRED)"Delete"$(CRESET) $(TESTBIN)
	@$(RM) $(TESTBIN)
	@$(ECHO$(BIN)) $(CRED)"Delete"$(CRESET) $(DEBUGBIN)
	@$(RM) $(DEBUGBIN)
	@$(ECHO$(BIN)) $(CRED)"Delete"$(CRESET)" progress bar script ($(PROGSCRIPT))"
	@$(RM) $(PROGSCRIPT)
# ------------------------------------------------------------------------------------- #
.PHONY: re
re:
	@$(MAKE) . fclean
	@$(MAKE) . $(.DEFAULT_GOAL)
#########################################################################################

endif
