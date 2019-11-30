/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** duck_on_click.c -- No description
*/

#include "entities/entities.h"

__Anonnull extern inline void duck_on_click(entity_t e)
{
    duck_lose_health(e, 1);
}
