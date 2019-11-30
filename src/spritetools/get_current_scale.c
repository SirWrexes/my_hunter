/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** get_current_scale.c -- No description
*/

#include "fox_define.h"

#include "datastruct.h"

__Anonnull extern inline const sfVector2f *get_current_scale(spinfo_t s)
{
    return &s->anims.scales[s->entid][s->anims.current][s->anims.frame];
}
