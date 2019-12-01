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

static const uchar_t CHANCE_BASE = 30;
static const uchar_t CHANCE_STEP = 5;

__Anonnull void map_update(scene_t *map)
{
    static bool resetcd = false;
    static sfTime cooldown;
    uchar_t chance = CHANCE_BASE;

    if (resetcd) {
        cooldown = sfSeconds(1.f);
        resetcd = false;
    }
    cooldown.microseconds -= sfClock_getElapsedTime(*CLOCKPTR).microseconds;
    if (cooldown.microseconds <= 0) {
        if (((unsigned) rand()) % 100 + 1 <= chance) {
            entity_create(&(**map).entities, ((unsigned) rand()) % DUCK_COUNT);
            chance = CHANCE_BASE;
        } else
            chance += CHANCE_STEP;
        resetcd = true;
    }
    scene_update(map);
}
