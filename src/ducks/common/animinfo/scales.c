/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** scales.c -- No description
*/

#include "entities/entities.h"

static const sfVector2f DUCK_SCALE_NORMAL[] = {
    [0 ... 4] = __SCALE_DUCK_NORMAL
};
static const sfVector2f DUCK_SCALE_INVERTX[] = {
    [0 ... 4] = __SCALE_DUCK_INVERTX
};
static const sfVector2f DUCK_SCALE_INVERTY[] = {
    [0 ... 4] = __SCALE_DUCK_INVERTY
};

static const sfVector2f *DUCK_SCALES_ANIMS[ANIM_DUCK_COUNT] = {
    [ANIM_DUCK_HORIZONTAL_RIGHT] = DUCK_SCALE_NORMAL,
    [ANIM_DUCK_HORIZONTAL_LEFT] = DUCK_SCALE_INVERTX,
    [ANIM_DUCK_DIAGONAL_RIGHT] = DUCK_SCALE_NORMAL,
    [ANIM_DUCK_DIAGONAL_LEFT] = DUCK_SCALE_INVERTX,
    [ANIM_DUCK_VERTICAL_DOWN] = DUCK_SCALE_INVERTY,
    [ANIM_DUCK_VERTICAL_UP] = DUCK_SCALE_NORMAL,
};

const sfVector2f **DUCK_SCALES[ANIM_DUCK_COUNT] = {
    [0 ... DUCK_COUNT - 1] = DUCK_SCALES_ANIMS
};
