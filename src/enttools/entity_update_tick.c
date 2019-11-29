/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** entity_update_tick.c -- No description
*/

#include <stdbool.h>
#include <SFML/System.h>

#include "datastruct.h"
#include "scenes/scenes.h"

__Anonnull extern inline bool entity_update_tick(entity_t *e)
{
    e->tick.microseconds += sfClock_getElapsedTime(*CLOCKPTR).microseconds;
    return e->tick.microseconds >= (**e->tock).microseconds;
}
