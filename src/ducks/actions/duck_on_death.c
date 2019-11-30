/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** duck_on_death.c -- No description
*/

#include <SFML/System/Time.h>

#include "entities/entities.h"

__Anonnull extern inline void duck_on_death(entity_t e)
{
    e->update = &duck_update_dead;
    e->spinfo.anims.frame = 0;
    e->spinfo.anims.current = ANIM_DUCK_DEATH;
    e->alive = false;
}
