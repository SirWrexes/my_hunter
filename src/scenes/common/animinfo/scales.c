/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** scales.c -- No description
*/

#include "scenes/scenes.h"

static const sfVector2f SPLASH_SCALES_ANIM1[] = {
    [0] = {.x = SCALE_X_SPLASH, .y = SCALE_Y_SPLASH}
};


static const sfVector2f MAPS_SCALES_ANIM1[] = {
    [0] = {.x = SCALE_X_MAPS, .y = SCALE_Y_MAPS}
};

static const sfVector2f *SPLASH_SCALES[] = {[0] = SPLASH_SCALES_ANIM1};
static const sfVector2f *MAPS_SCALES[] = {[0] = MAPS_SCALES_ANIM1};

const sfVector2f **SCENE_SCALES[SCENE_COUNT] = {
    [SCENE_SPLASH] = SPLASH_SCALES,
    [SCENE_MAP1] = MAPS_SCALES,
};
