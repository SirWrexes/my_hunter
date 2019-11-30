/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** default.c -- No description
*/

#include "entities/entities.h"

static const sfTime *DUCK_TOCK = NULL;

const struct game_entity DUCK_DEFAULT = {
    VTABLE_INIT_NULL,
    .prev = NULL,
    .next = NULL,
    .alive = true,
    .health = 1,
    .tick = {0.f},
    .tock = &DUCK_TOCK,
    .spinfo = {
        .texture = DUCK_TEXTURES,
        .sprite = NULL,
        .position = {0, 0},
        .origin = {0, 0},
        .anims = {
            .total = ANIM_DUCK_COUNT,
            .types = DUCK_ANIMTYPES,
            .rects = DUCK_ANIMRECTS,
            .scales = DUCK_SCALES,
            .current = ANIM_DUCK_HORIZONTAL_RIGHT,
            .frame = 0,
            .pongstep = PP_FORWARD,
        },
    },
};

__Aconstructor static void init_defaults_duck(void)
{
    static sfTime tock = {0};

    tock = sfMilliseconds(100);
    DUCK_TOCK = &tock;
}
