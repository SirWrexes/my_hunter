/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** window.c -- No description
*/

#include "datastruct.h"
#include "scenes/scenes.h"

const char *SCENE_TITLES[] = {[0 ... SCENE_COUNT - 1] = "Duck Hunt"};

const sfVideoMode SCENE_VIDEO_MODES[SCENE_COUNT] = {
    [SCENE_SPLASH] = {
        .width = TEXTURE_WIDTH_SPLASH,
        .height = TEXTURE_HEIGHT_SPLASH,
        .bitsPerPixel = 32u
    },
    [SCENE_MAP1 ... SCENE_COUNT - 1] = {
        .width = TEXTURE_WIDTH_MAPS * SCALE_X_MAPS,
        .height =TEXTURE_HEIGHT_MAPS * SCALE_Y_MAPS,
        .bitsPerPixel = 32u
    }
};
