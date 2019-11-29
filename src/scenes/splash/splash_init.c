/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** splash_init.c -- No description
*/

#include <SFML/Graphics.h>

#include "fox_define.h"

#include "scenes/scenes.h"

const char *TEXTURE_SPLASH_PATH = "res/duckhunt_splash.jpeg";
const sfTexture *TEXTURE_SPLASH = NULL;

const sfIntRect TEXTRECT_SPLASH = {
    .left = 0,
    .top = 0,
    .width = TEXTRECT_SIZE_X_MAPS,
    .height = TEXTRECT_SIZE_Y_MAPS,
};

const scene_t DEFAULT_SPLASH = {
    .window = NULL,
    .rwmode = {
        .width = TEXTRECT_SIZE_X_SPLASH * SCALE_XY_SPLASH,
        .height = TEXTRECT_SIZE_Y_SPLASH * SCALE_XY_SPLASH,
        .bitsPerPixel = 32u
    },
    .rwstyle = sfDefaultStyle,
    .bgmusic = NULL,
    .event = {0},
    .spinfo = {
        .textconst = &TEXTURE_SPLASH,
        .share_texture = true,
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
    },
    .update = &splash_update
};

__Aconstructor static void init_texture_splash(void)
{
    TEXTURE_SPLASH = sfTexture_createFromFile(TEXTURE_SPLASH_PATH, NULL);
}
