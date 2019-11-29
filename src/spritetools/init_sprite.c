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

__Anonnull bool init_sprite(spinfo_t *spinfo)
{
    spinfo->sprite = sfSprite_create();
    if (spinfo->sprite == NULL)
        return true;
    sfSprite_setTexture(spinfo->sprite, spinfo->texture, false);
    sfSprite_setTextureRect(spinfo->sprite, *get_current_rect(&spinfo->anims));
    sfSprite_setScale(spinfo->sprite, spinfo->scale);
    return false;
}
