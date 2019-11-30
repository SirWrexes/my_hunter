/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** set_to_current_position.c -- No description
*/

#include <SFML/Graphics.h>

#include "datastruct.h"

__Anonnull void set_to_current_position(spinfo_t s)
{
    sfSprite_setPosition(s->sprite, s->position);
}
