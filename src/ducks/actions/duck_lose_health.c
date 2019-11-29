/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** loose_health.c -- No description
*/

#include "entities/entities.h"

__Anonnull extern inline void duck_lose_health(entity_t *e, unsigned hp)
{
    e->health -= hp * (e->health > 0);
    e->health *= (e->health > 0);
}
