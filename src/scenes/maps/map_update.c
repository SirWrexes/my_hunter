/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** map_update.c -- No description
*/

#include <stdlib.h>
#include <SFML/System.h>

#include "fox_define.h"

#include "scenes/scenes.h"
#include "entities/entities.h"

__Anonnull void map_update(scene_t **map)
{
    static bool resetcd = false;
    static sfTime cooldown;
    uchar_t chance = 20;

    if (resetcd) {
        cooldown = sfSeconds(1.f);
        resetcd = false;
    }
    cooldown.microseconds -= sfClock_getElapsedTime(*CLOCKPTR).microseconds;
    if (cooldown.microseconds <= 0) {
        if (((unsigned) rand()) % 100 + 1 <= chance)
            spawn_entity(&(**map).entities, ((unsigned) rand()) % DUCK_COUNT);
        resetcd = true;
    }
    scene_update(map);
}
