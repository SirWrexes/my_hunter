/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** scenes_common.c -- No description
*/

#include <time.h>
#include <stdlib.h>
#include <SFML/System.h>
#include <SFML/Graphics.h>

#include "fox_define.h"

#include "datastruct.h"
#include "scenes/scenes.h"

const char *WINDOW_TITLE = "Duck Hunt";

sfClock * const *  CLOCKPTR = NULL;
scene_t * const * SCENEPTR = NULL;

const scene_t *SCENE_ARRAY[SCENE_COUNT] = {
    [SCENE_MAP1] = &DEFAULT_MAP1,
    [SCENE_SPLASH] = &DEFAULT_SPLASH,
};

__Aconstructor static void init_clock(void)
{
    static sfClock *clock = NULL;

    clock = sfClock_create();
    CLOCKPTR = &clock;
    srand(time(NULL));
}
