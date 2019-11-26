/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** scenes_common.c -- No description
*/

#include <SFML/Graphics.h>

#include "fox_define.h"

#include "datastruct.h"
#include "scenes/scenes.h"

const char *WINDOW_TITLE = "Duck Hunt";

const scene_t *SCENE_ARRAY[SCENE_COUNT] = {
    [SCENE_MAP1] = &DEFAULT_MAP1,
    [SCENE_SPLASH] = &DEFAULT_SPLASH,
};

