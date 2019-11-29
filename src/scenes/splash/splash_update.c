/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** splash_update.c -- No description
*/

#include "scenes/scenes.h"

__Anonnull void splash_update(scene_t **splash)
{
    scene_update(splash);
    if ((**splash).entities.n == 0) {
        scene_destroy(splash);
        if (scene_create((scene_t **) SCENEPTR, SCENE_MAP1))
            scene_destroy((scene_t **) SCENEPTR);
    }
}
