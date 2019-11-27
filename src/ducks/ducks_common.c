/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** ducks_common.c -- No description
*/

#include <SFML/Graphics.h>

#include "datastruct.h"
#include "entities/entities.h"

const char *TEXTURE_DUCK_PATH = "./res/duckhunt_sheet.png";

const sfIntRect TEXTRECT_DUCK[DUCK_COUNT] = {
    [DUCK_BLUE] = TEXTRECT_DUCK_PALETTESWAP(0),
    [DUCK_BLACK] = TEXTRECT_DUCK_PALETTESWAP(130),
    [DUCK_RED] = TEXTRECT_DUCK_PALETTESWAP(260),
};

const animtype_t ANIMTYPES_DUCK[ANIM_DUCK_COUNT] = {
    [ANIM_DUCK_HORIZONTAL] = ANIM_TYPE_PING_PONG,
    [ANIM_DUCK_DIAGONAL] = ANIM_TYPE_PING_PONG,
    [ANIM_DUCK_VERTICAL] = ANIM_TYPE_PING_PONG,
    [ANIM_DUCK_DEATH] = ANIM_TYPE_ONCE,
};

const sfIntRect ANIMRECTS_DUCK[MAX_ANIMS][MAX_ANIMRECTS] = {
    [ANIM_DUCK_HORIZONTAL] = {
        {.left = 0, .top = 0, .width = 37, .height = 26},
        {.left = 40, .top = 0, .width = 34, .height = 24},
        {.left = 81, .top = 0, .width = 32, .height = 28},
        {.left = -1, .top = -1, .width = -1, .height = -1},
    },
    [ANIM_DUCK_DIAGONAL] = {
        {.left = 4, .top = 38, .width = 25, .height = 31},
        {.left = 41, .top = 39, .width = 32, .height = 29},
        {.left = 83, .top = 38, .width = 27, .height = 31},
        {.left = -1, .top = -1, .width = -1, .height = -1},
    },
    [ANIM_DUCK_VERTICAL] = {
        {.left = -1, .top = -1, .width = -1, .height = -1},
    },
    [ANIM_DUCK_DEATH] = {
        {.left = -1, .top = -1, .width = -1, .height = -1},
    }
};

const entity_t ENT_DUCK = {
    .prev = NULL,
    .next = NULL,
    .spinfo = {
        .texture = NULL,
        .share_texture = false,
        .sprite = NULL,
        .position = {.x = 0., .y = 0.},
        .scale = {.x = 2., .y = 2.},
        .origin = {.x = 0., .y = 0.},
        .anims = {
            .total = ANIM_DUCK_COUNT,
            .current = ANIM_DUCK_HORIZONTAL,
            .rects = &ANIMRECTS_DUCK,
            .types = (animtype_t *) ANIMTYPES_DUCK,
            .frame = 0,
            .pongstep = PP_FORWARD
        }
    },
    .health = 1,
    .idle = NULL,
    .onclick = NULL,
    .ondeath = NULL,
    .tick = {0.},
    .tock = &TOCK_DUCK,
};

const sfTime *TOCK_DUCK = NULL;

__Aconstructor static void init_defaults_duck(void)
{
    static sfTime tock = {0};

    tock = sfMicroseconds(50);
    TOCK_DUCK = &tock;
}