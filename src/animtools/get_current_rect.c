/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** spinfo_getrect.c -- No description
*/

#include "fox_define.h"

#include "datastruct.h"

__Anonnull
extern inline const sfIntRect *get_current_rect(animinfo_t *a)
{
    return &(*a->rects)[a->current][a->frame];
}
