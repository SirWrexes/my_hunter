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
#include "spritetools.h"
#include "animtools.h"
#include "sfxtools.h"

__Anonnull extern inline void duck_update(entity_t duck)
{
    if (!entity_update_tick(duck))
        return;
    if (sprite_is_out_of_bounds(&duck->spinfo)) {
        duck->ondestroy = NULL;
        entity_destroy(&(**SCENEPTR).entities, duck);
    }
    set_to_next_frame(&duck->spinfo.anims);
    update_rect_from_frame(&duck->spinfo);
    duck_move(duck);
    sfx_play(SFX_DUCK_FLAP);
    duck->tick = sfTime_Zero;
}

__Anonnull extern inline void duck_update_in_place(entity_t duck)
{
    if (!entity_update_tick(duck))
        return;
    set_to_next_frame(&duck->spinfo.anims);
    update_rect_from_frame(&duck->spinfo);
    duck->tick = sfTime_Zero;
}

__Anonnull extern inline void duck_update_dead(entity_t e)
{
    if (!entity_update_tick(e))
        return;
    e->spinfo.position = sfSprite_getPosition(e->spinfo.sprite);
    if (sprite_is_out_of_bounds(&e->spinfo))
        entity_destroy(&(**SCENEPTR).entities, e);
    else {
        set_to_next_frame(&e->spinfo.anims);
        update_rect_from_frame(&e->spinfo);
        e->spinfo.position.y += 25;
        set_to_current_position(&e->spinfo);
        e->tick = sfTime_Zero;
    }
}
