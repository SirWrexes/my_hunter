/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** splash_init.c -- No description
*/

#include <SFML/Graphics.h>

#include "fox_define.h"

#include "scenes/scenes.h"

const sfIntRect TEXTRECT_SPLASH = {
    .left = 0,
    .top = 0,
    .width = TEXTRECT_SIZE_X_MAPS,
    .height = TEXTRECT_SIZE_Y_MAPS,
};

const animtype_t ANIMTYPES_SPLASH[1] = {
    ANIM_TYPE_ONCE
};

const scene_t DEFAULT_SPLASH = {
    .window = NULL,
    .rwmode = {
        .width = TEXTRECT_SIZE_X_SPLASH * SCALE_XY_SPLASH,
        .height = TEXTRECT_SIZE_Y_SPLASH * SCALE_XY_SPLASH,
        .bitsPerPixel = 32u
    },
    .rwstyle = sfDefaultStyle,
    .clock = NULL,
    .bgmusic = NULL,
    .event = {0},
    .spinfo = {
        .texture = &TEXTURE_SPLASH,
        .sprite = NULL,
        .position = {.x = 0.f, .y = 0.f},
        .scale = {.x = SCALE_XY_SPLASH, .y = SCALE_XY_SPLASH},
        .origin = {.x = 0.f, .y = 0.f},
        .anims = {
            .total = 0,
            .types = NULL,
            .rects = NULL,
            .current = 0,
            .frame = 0,
            .pongstep = 1
        },
    },
    .entities = {
        .n = 0,
        .head = NULL,
        .last = NULL,
    }
};

__Aconstructor static void init_texture_splash(void)
{
    TEXTURE_SPLASH = sfTexture_createFromFile(TEXTURE_SPLASH_PATH, NULL);
}
