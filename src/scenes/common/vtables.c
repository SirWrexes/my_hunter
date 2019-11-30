/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** vtables.c -- No description
*/

#include "scenes/scenes.h"

const scnvt_t SCENE_VTABLES[SCENE_COUNT] = {
    [SCENE_SPLASH] = {
        .onclick = NULL,
        .oncreate = &splash_oncreate,
        .ondeath = NULL,
        .ondestroy = NULL,
        .update = &splash_update,
    },
    [SCENE_MAP1 ... SCENE_COUNT - 1] = {
        .onclick = NULL,
        .oncreate = NULL,
        .ondeath = NULL,
        .ondestroy = NULL,
        .update = &map_update,
    },
};
