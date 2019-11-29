/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** duck_on_death.c -- No description
*/

#include <SFML/System/Time.h>

#include "entities/entities.h"

__Anonnull extern inline void duck_on_death(entity_t *e)
{
    static sfTime tock_death;
    static const sfTime *tockptr = &tock_death;

    tock_death = sfSeconds(0.5f);
    e->tock = &tockptr;
    e->idle = &duck_idle_death;
    e->spinfo.anims.frame = 0;
    e->spinfo.anims.current = ANIM_DUCK_DEATH;
    e->alive = false;
}
