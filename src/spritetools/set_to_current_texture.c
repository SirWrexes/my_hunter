/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** set_to_current_texture.c -- No description
*/

#include <SFML/Graphics.h>

#include "datastruct.h"

__Anonnull extern inline void set_to_current_texture(spinfo_t spinfo)
{
    sfSprite_setTexture(spinfo->sprite, spinfo->texture[spinfo->entid], false);
}
