/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** vtables.c -- No description
*/

#include "datastruct.h"
#include "entities/ducks.h"

const entvt_t DUCK_VTABLES[DUCK_COUNT] = {
    [0 ... DUCK_COUNT - 1] = {
        .onclick = &duck_on_click,
        .oncreate = &duck_oncreate,
        .ondeath = &duck_on_death,
        .ondestroy = &duck_ondestroy,
        .update = &duck_update,
    }
};
