/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** scene_create_window_from_self.c -- No description
*/

#include <SFML/Graphics.h>

#include "fox_define.h"

#include "datastruct.h"
#include "scenes/scenes.h"

__Anonnull bool scene_create_window_from_self(scene_t s)
{
    s->window.ptr = sfRenderWindow_create(
        s->window.mode[s->spinfo.entid],
        s->window.title[s->spinfo.entid],
        s->window.style,
        NULL
    );
    return SUCCESS_IF_DIFF(s->window.ptr, NULL);
}
