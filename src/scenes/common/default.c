/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** default.c -- No description
*/

#include <SFML/Graphics.h>

#include "datastruct.h"
#include "scenes/scenes.h"
#include "scenes/scenes_common.h"

const struct game_scene SCENE_DEFAULT = {
    VTABLE_INIT_NULL,
    .window = {
        .title = SCENE_TITLES,
        .mode = SCENE_VIDEO_MODES,
        .style = sfDefaultStyle,
        .ptr = NULL,
    },
    .bgmusic = NULL,
    .event = {0},
    .entities = {.n = 0, .head = NULL, .last = NULL},
    .spinfo = {
        .anims = {
            .total = SCENE_COUNT,
            .types = SCENE_ANIMTYPES,
            .rects = SCENE_ANIMRECTS,
            .scales = SCENE_SCALES,
            .current = 0,
            .frame = 0,
            .pongstep = PP_FORWARD,
        },
        .entid = 0,
        .texture = SCENE_TEXTURES,
        .sprite = NULL,
        .position = {0, 0},
        .origin = {0, 0},
    },
};
