/*
** EPITECH PROJECT, 2019
** My Hunter
** File description:
** Scene defaults
*/

#include "scenes/scenes.h"

const char *TEXTURE_MAPS_PATH = "./res/duckhunt_bg.png";
const sfTexture *TEXTURE_MAPS = NULL;

const sfIntRect TEXTRECT_MAP1 = {
    .left = 0,
    .top = 0,
    .width = TEXTRECT_SIZE_X_MAPS,
    .height = TEXTRECT_SIZE_Y_MAPS,
};

const animtype_t ANIMTYPES_MAP1[1] = {
    ANIM_TYPE_ONCE
};

const scene_t DEFAULT_MAP1 = {
    .window = NULL,
    .bgmusic = NULL,
    .event = {0},
    .spinfo = {
        .textconst = &TEXTURE_MAPS,
        .share_texture = true,
        .sprite = NULL,
        .position = {.x = 0.f, .y = 0.f},
        .scale = {.x = SCALE_XY_MAPS, .y = SCALE_XY_MAPS},
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
