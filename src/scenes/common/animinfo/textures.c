/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** textures.c -- No description
*/

#include <SFML/Graphics.h>

#include "scenes/scenes.h"

static const char *SCENE_TEXTURE_PATHS[] = {
    [SCENE_SPLASH] = "res/img/duckhunt_splash.jpeg",
    [SCENE_MAP1 ... SCENE_COUNT - 1] = "res/img/duckhunt_bg.png",
};

const sfTexture *SCENE_TEXTURES[SCENE_COUNT] = {
    [0 ... SCENE_COUNT - 1] = NULL
};

const sfIntRect SCENE_TEXTURE_AREAS[] = {
    [SCENE_SPLASH] = {
        .left = 0,
        .top = 0,
        .width = TEXTURE_WIDTH_SPLASH,
        .height = TEXTURE_HEIGHT_SPLASH,
    },
    [SCENE_MAP1 ... SCENE_COUNT - 1] = {
        .left = 0,
        .top = 0,
        .width = TEXTURE_WIDTH_MAPS,
        .height = TEXTURE_HEIGHT_MAPS,
    }
};

__Aconstructor static void init_textures(void)
{
    for (scenetype_t i = 0; i < SCENE_COUNT; i += 1)
        SCENE_TEXTURES[i] = sfTexture_createFromFile(
            SCENE_TEXTURE_PATHS[i], &SCENE_TEXTURE_AREAS[i]);
}
