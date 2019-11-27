/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** update_rect_from_frame.c -- No description
*/

#include <SFML/Graphics.h>

#include "datastruct.h"
#include "animtools.h"

__Anonnull
extern inline void update_rect_from_frame(spinfo_t *s)
{
    sfSprite_setTextureRect(s->sprite, *get_current_rect(&s->anims));
}
