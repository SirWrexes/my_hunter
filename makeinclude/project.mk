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
# -- Animation tools
SRC := ./src/animtools/is_on_last_frame.c
SRC += ./src/animtools/set_to_next_frame.c
SRC += ./src/animtools/get_current_rect.c
SRC += ./src/animtools/update_rect_from_frame.c
# -- Entity tools
SRC += ./src/enttools/spawn_entity.c
SRC += ./src/enttools/update_entities.c
# -- Sprite tools
SRC += ./src/spritetools/init_sprite.c
# -- DUCKS
SRC += ./src/ducks/ducks_common.c
SRC += ./src/ducks/actions/idle_in_place.c
# -- SCENES
SRC += ./src/scenes/maps/map_init.c
SRC += ./src/scenes/splash/splash_init.c
SRC += ./src/scenes/scene_create.c
SRC += ./src/scenes/scenes_common.c
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
