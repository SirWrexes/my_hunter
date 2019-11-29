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
################################################

#
# Sources
################################################
MAIN := ./src/main.c
# -------------------------------------------- #
# -- Animation tools
SRC := ./src/animtools/get_current_rect.c
SRC += ./src/animtools/set_to_next_frame.c
SRC += ./src/animtools/update_rect_from_frame.c
# -- Ducks
SRC += ./src/ducks/actions/duck_idle.c
SRC += ./src/ducks/actions/duck_lose_health.c
SRC += ./src/ducks/actions/duck_on_click.c
SRC += ./src/ducks/actions/duck_on_death.c
SRC += ./src/ducks/ducks_common.c
# -- Entity tools
SRC += ./src/enttools/entity_destroy.c
SRC += ./src/enttools/entity_update_tick.c
SRC += ./src/enttools/spawn_entity.c
SRC += ./src/enttools/update_entities.c
# -- Events
SRC += ./src/events/event_closed.c
SRC += ./src/events/event_mouse_button.c
SRC += ./src/events/events_common.c
# -- Scenes
SRC += ./src/scenes/maps/map_init.c
SRC += ./src/scenes/maps/map_update.c
SRC += ./src/scenes/splash/splash_init.c
SRC += ./src/scenes/splash/splash_update.c
SRC += ./src/scenes/scene_create.c
SRC += ./src/scenes/scene_destroy.c
SRC += ./src/scenes/scene_update.c
SRC += ./src/scenes/scenes_common.c
# -- Sprite tools
SRC += ./src/spritetools/init_sprite.c
SRC += ./src/animtools/is_on_last_frame.c
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
LIBS += csfml-audio
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
