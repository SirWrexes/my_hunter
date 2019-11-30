/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** scenes_common.c -- No description
*/

#include <time.h>
#include <stdlib.h>
#include <SFML/System.h>

#include "fox_define.h"

#include "scenes/scenes.h"

sfClock *const *CLOCKPTR = NULL;
struct game_scene *const *SCENEPTR = NULL;

__Aconstructor static void init_clock(void)
{
    static sfClock *clock = NULL;

    clock = sfClock_create();
    CLOCKPTR = &clock;
    srand(time(NULL));
}
