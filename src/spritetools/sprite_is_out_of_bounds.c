/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** sprite_is_out_of_bounds.c -- No description
*/

#include <stdbool.h>
#include <SFML/Graphics.h>

#include "datastruct.h"
#include "scenes/scenes.h"

__Anonnull bool sprite_is_out_of_bounds(spinfo_t s)
{
    sfFloatRect gb = sfSprite_getGlobalBounds(s->sprite);

    return gb.top > (**SCENEPTR).window.mode->height || gb.top < 0.f
        || gb.left > (**SCENEPTR).window.mode->width || gb.left < 0.f;
}
