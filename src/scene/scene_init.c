/*
** EPITECH PROJECT, 2019
** My Hunter
** File description:
** Scene defaults
*/

#include <SFML/Graphics.h>

#include "datastruct.h"
#include "entities.h"

const char *WINDOW_TITLE = "Duck Hunt";

const char *TEXTURE_SCENE_PATH = "./res/duckhunt_bg.png";

const sfTexture *TEXTURE_SCENE = NULL;

const int TEXTRECT_SIZE_X = 256;
const int TEXTRECT_SIZE_Y = 240;
const sfIntRect TEXTRECT_SCENE = {
    .left = 0,
    .top = 0,
    .width = TEXTRECT_SIZE_X,
    .height = TEXTRECT_SIZE_Y,
};

const animtype_t ANIMTYPES_SCENE[1] = {
    ANIM_TYPE_ONCE
};

const float SCENE_SCALE_X = 4.f;
const float SCENE_SCALE_Y = 4.f;
const scene_t DEFAULT_SCENE = {
    .window = NULL,
    .clock = NULL,
    .bgmusic = NULL,
    .event = {0},
    .spinfo = {
        .texture = &TEXTURE_SCENE,
        .sprite = NULL,
        .position = {.x = 0.f, .y = 0.f},
        .scale = {.x = SCENE_SCALE_X, .y = SCENE_SCALE_Y},
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

const sfVideoMode VIDEO_MODE = {
    .width = TEXTRECT_SIZE_X * SCENE_SCALE_X,
    .height = TEXTRECT_SIZE_Y * SCENE_SCALE_Y,
    .bitsPerPixel = 32u
};

__attribute__((constructor))
void init_defaults_scene(void)
{
    TEXTURE_SCENE =
        sfTexture_createFromFile(TEXTURE_SCENE_PATH, &TEXTRECT_SCENE);
}
