/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** init_srpite.c -- No description
*/

#include <stdbool.h>
#include <SFML/Graphics.h>

#include "spritetools.h"
#include "animtools.h"
#include "datastruct.h"

__Anonnull bool init_sprite(spinfo_t spinfo)
{
    spinfo->sprite = sfSprite_create();
    if (spinfo->sprite == NULL)
        return true;
    set_to_current_texture(spinfo);
    set_to_current_rect(spinfo);
    set_to_current_position(spinfo);
    set_to_current_scale(spinfo);
    return false;
}
