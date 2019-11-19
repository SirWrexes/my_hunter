##
## EPITECH PROJECT, 2019
## Multipart Makefile
## File description:
## Master Makefile
##

#
# Do NOT change the order of those
# It will likely break the makefile
##########################################
# ↓ Project/binary name and sources
include ./makeinclude/project.mk

# ↓ Makefile configuration
include ./makeinclude/makeconf.mk

# ↓ Colors and text formatting
include ./makeinclude/format.mk

# ↓ Progressbar script
include ./makeinclude/progscript.mk

# ↓ Unit test libc wrappers
include ./makeinclude/wrappers.mk

# ↓ Various build configuration
include ./makeinclude/builconf.mk

# ↓ Rules (for %.a and %.o)
include ./makeinclude/rules.mk

# ↓ Reciepes for making targets
include ./makeinclude/reciepes.mk
##########################################
