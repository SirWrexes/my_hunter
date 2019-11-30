/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** get_current_type.c -- No description
*/

#include "fox_define.h"

#include "datastruct.h"

__Anonnull unsigned get_current_type(animinfo_t a)
{
    return a->types[a->current];
}
