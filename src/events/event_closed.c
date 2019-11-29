/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** event_closed.c -- No description
*/

#include "scenes/scenes.h"

extern inline void event_closed(void)
{
    scene_destroy_current();
}
