/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** textures.c -- No description
*/

#include <SFML/Graphics.h>

#include "entities/entities.h"

static const char *DUCK_TEXTURE_PATHS[DUCK_COUNT] = {
    [0 ... DUCK_COUNT - 1] = "res/img/duckhunt_sheet.png",
};

const sfIntRect DUCK_TEXTURE_AREAS[DUCK_COUNT] = {
    [DUCK_BLUE] = TEXTRECT_DUCK_PALETTESWAP(0),
    [DUCK_BLACK] = TEXTRECT_DUCK_PALETTESWAP(130),
    [DUCK_RED] = TEXTRECT_DUCK_PALETTESWAP(260),
};

const sfTexture *DUCK_TEXTURES[DUCK_COUNT] = {
    [0 ... DUCK_COUNT - 1] = NULL,
};

__Aconstructor static void init_textures(void)
{
    for (ducktype_t i = 0; i < DUCK_COUNT; i += 1)
        DUCK_TEXTURES[i] = sfTexture_createFromFile(
            DUCK_TEXTURE_PATHS[i], &DUCK_TEXTURE_AREAS[i]);
}
