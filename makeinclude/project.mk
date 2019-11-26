##
## EPITECH PROJECT, 2019
## Multipart Makefile
## File description:
## Project/binary name and sources
##

#
# Project and binary name
################################################
NAME := My Hunter
BIN  := my_hunter
#     It's IMPORTANT that the binary name
# /!\ contains no whitespace !
#     Otherwise it'l break the Progress% script.
################################################

#
# Sources
################################################
MAIN := ./src/main.c
# -------------------------------------------- #
SRC := ./src/duck/duck_init.c
SRC += ./src/scene/scene_init.c
SRC += ./src/scene/scene_create.c
################################################

#
# Test sources
################################################
TST :=
TST +=
################################################


#
# Files created by unit tests functions
################################################
TESTTMP :=
TESTTMP +=
################################################

#
# Libs to include
################################################
LIBS := csfml-graphics
LIBS += csfml-system
LIBS += csfml-window
################################################

#
# Comment or uncomment the lines corresponding
# to the libfox modules you use in the project.
################################################
# FOXMODULES += datastruct
# FOXMODULES += io
# FOXMODULES += math
FOXMODULES += memory
# FOXMODULES += std
# FOXMODULES += string
################################################
