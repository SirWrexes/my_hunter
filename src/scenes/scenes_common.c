/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** scenes_common.c -- No description
*/

#include <SFML/System.h>
#include <SFML/Graphics.h>

#include "fox_define.h"

#include "datastruct.h"
#include "scenes/scenes.h"

const char *WINDOW_TITLE = "Duck Hunt";

// sfClock * const *CLOCK = NULL;

const scene_t *SCENE_ARRAY[SCENE_COUNT] = {
    [SCENE_MAP1] = &DEFAULT_MAP1,
    [SCENE_SPLASH] = &DEFAULT_SPLASH,
};

__Aconstructor static sfClock *init_clock(void)
{
    sfClock *clock = sfClock_create();

    return clock;
}

extern inline sfClock *CLOCK(void)
{
    return init_clock();
}
