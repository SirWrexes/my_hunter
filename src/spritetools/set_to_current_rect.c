/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** set_to_current_rect.c -- No description
*/

#include <SFML/Graphics.h>

#include "fox_define.h"

#include "datastruct.h"
#include "animtools.h"

__Anonnull extern inline void set_to_current_rect(spinfo_t s)
{
    sfSprite_setTextureRect(s->sprite, *get_current_rect(&s->anims));
}
