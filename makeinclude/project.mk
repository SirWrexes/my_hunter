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
SRC += ./src/animtools/get_current_type.c
SRC += ./src/animtools/is_on_last_frame.c
SRC += ./src/animtools/set_to_next_frame.c
# -- Ducks
SRC += ./src/ducks/actions/duck_lose_health.c
SRC += ./src/ducks/actions/duck_move.c
SRC += ./src/ducks/actions/duck_on_click.c
SRC += ./src/ducks/actions/duck_on_death.c
SRC += ./src/ducks/actions/duck_update.c
SRC += ./src/ducks/common/animinfo/animrects.c
SRC += ./src/ducks/common/animinfo/animtypes.c
SRC += ./src/ducks/common/animinfo/scales.c
SRC += ./src/ducks/common/animinfo/textures.c
SRC += ./src/ducks/common/default.c
SRC += ./src/ducks/common/vtables.c
# -- Entity tools
SRC += ./src/enttools/entity_create.c
SRC += ./src/enttools/entity_destroy.c
SRC += ./src/enttools/entity_update_tick.c
SRC += ./src/enttools/update_entities.c
# -- Events
SRC += ./src/events/event_closed.c
SRC += ./src/events/event_mouse_button.c
SRC += ./src/events/events_common.c
# -- Scenes
SRC += ./src/scenes/common/animinfo/animrects.c
SRC += ./src/scenes/common/animinfo/animtypes.c
SRC += ./src/scenes/common/animinfo/scales.c
SRC += ./src/scenes/common/animinfo/textures.c
SRC += ./src/scenes/common/default.c
SRC += ./src/scenes/common/global_data.c
SRC += ./src/scenes/common/vtables.c
SRC += ./src/scenes/common/window.c
SRC += ./src/scenes/maps/map_update.c
SRC += ./src/scenes/splash/splash_update.c
SRC += ./src/scenes/splash/splash_oncreate.c
SRC += ./src/scenes/scene_create.c
SRC += ./src/scenes/scene_destroy.c
SRC += ./src/scenes/scene_update.c
SRC += ./src/scenes/scene_create_window_from_self.c
# -- Sprite tools
SRC += ./src/spritetools/get_current_scale.c
SRC += ./src/spritetools/init_sprite.c
SRC += ./src/spritetools/set_to_current_position.c
SRC += ./src/spritetools/set_to_current_rect.c
SRC += ./src/spritetools/set_to_current_scale.c
SRC += ./src/spritetools/set_to_current_texture.c
SRC += ./src/spritetools/sprite_is_out_of_bounds.c
SRC += ./src/spritetools/update_rect_from_frame.c
SRC += ./src/spritetools/update_position_info.c
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
