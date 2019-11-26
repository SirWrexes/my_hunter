/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** spinfo_getrect.c -- No description
*/

#include "datastruct.h"

extern inline sfIntRect *spinfo_getrect(spinfo_t *spinfo)
{
    return &spinfo->anims.rects[spinfo->anims.current][spinfo->anims.frame];
}
