/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** update_position_info.c -- No description
*/

#include <SFML/Graphics.h>

#include "datastruct.h"

__Anonnull void update_position_info(spinfo_t s)
{
    s->position = sfSprite_getPosition(s->sprite);
}
