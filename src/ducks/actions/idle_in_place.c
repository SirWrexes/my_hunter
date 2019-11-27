/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** idle_in_place.c -- No description
*/

#include <SFML/System.h>

#include "scenes/scenes_common.h"
#include "entities/ducks.h"
#include "animtools.h"

__Anonnull
extern inline void duck_idle_in_place(entity_t *duck)
{
    spinfo_t *spinfo = &duck->spinfo;

    duck->tick.microseconds += sfClock_getElapsedTime(CLOCK()).microseconds;
    if (duck->tick.microseconds < (**duck->tock).microseconds)
        return;
    set_to_next_frame(&spinfo->anims);
    update_rect_from_frame(&duck->spinfo);
    duck->tick = sfMicroseconds(0);
}
