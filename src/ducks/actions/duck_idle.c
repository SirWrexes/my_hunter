/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** duck_idle.c -- No description
*/

#include <SFML/System.h>
#include <SFML/Graphics.h>

#include "scenes/scenes.h"
#include "entities/entities.h"
#include "animtools.h"

__Anonnull extern inline void duck_idle_in_place(entity_t *duck)
{
    if (!entity_update_tick(duck))
        return;
    set_to_next_frame(&duck->spinfo.anims);
    update_rect_from_frame(&duck->spinfo);
    duck->tick = sfTime_Zero;
}

__Anonnull extern inline void duck_idle_death(entity_t *e)
{
    sfFloatRect srect;
    sfVector2f spos;

    if (!entity_update_tick(e))
        return;
    srect = sfSprite_getGlobalBounds(e->spinfo.sprite);
    spos = sfSprite_getPosition(e->spinfo.sprite);
    if (srect.top > (**SCENEPTR).rwmode.height)
        entity_destroy(&(**SCENEPTR).entities, e);
    else {
        set_to_next_frame(&e->spinfo.anims);
        update_rect_from_frame(&e->spinfo);
        spos.y += 75;
        sfSprite_setPosition(e->spinfo.sprite, spos);
        e->tick = sfTime_Zero;
    }
}
