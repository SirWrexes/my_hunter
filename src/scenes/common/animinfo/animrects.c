/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** animrects.c -- No description
*/

#include "scenes/scenes.h"

static const sfIntRect ANIMRECTS_MAPS[] = {
    [0] = {
        .left = 0,
        .top = 0,
        .width =  TEXTURE_WIDTH_MAPS,
        .height = TEXTURE_HEIGHT_MAPS,
    }
};

static const sfIntRect ANIMRECTS_SPLASH[] = {
    [0] = {
        .left = 0,
        .top = 0,
        .width = TEXTURE_WIDTH_SPLASH,
        .height = TEXTURE_HEIGHT_SPLASH,
    }
};

const sfIntRect *SCENE_ANIMRECTS[SCENE_COUNT] = {
    [SCENE_SPLASH] = ANIMRECTS_SPLASH,
    [SCENE_MAP1 ... SCENE_COUNT - 1] = ANIMRECTS_MAPS,
};
