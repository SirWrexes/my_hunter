/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** duck_on_death.c -- No description
*/

#include <SFML/System/Time.h>

#include "sfxtools.h"
#include "scenes/scenes.h"
#include "entities/entities.h"

__Anonnull extern inline void duck_on_death(entity_t e)
{
    sfx_play(SFX_DUCK_FALL);
    e->update = &duck_update_dead;
    e->spinfo.anims.frame = 0;
    e->spinfo.anims.current = ANIM_DUCK_DEATH;
    e->alive = false;
}
