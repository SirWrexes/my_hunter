/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** set_to_current_scale.c -- No description
*/

#include <SFML/Graphics.h>

#include "datastruct.h"
#include "spritetools.h"

__Anonnull extern inline void set_to_current_scale(spinfo_t s)
{
    sfSprite_setScale(s->sprite, *get_current_scale(s));
}
