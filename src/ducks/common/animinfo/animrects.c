/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** animrects.c -- No description
*/

#include "entities/entities.h"

static const sfIntRect DUCK_ANIMRECT_HORIZONTAL[] = {
    {.left = 0, .top = 0, .width = 37, .height = 26},
    {.left = 40, .top = 0, .width = 34, .height = 24},
    {.left = 81, .top = 0, .width = 32, .height = 28},
    {.left = -1, .top = -1, .width = -1, .height = -1},
};

static const sfIntRect DUCK_ANIMRECT_DIAGONAL[] = {
    {.left = 4, .top = 38, .width = 25, .height = 31},
    {.left = 41, .top = 39, .width = 32, .height = 29},
    {.left = 83, .top = 38, .width = 27, .height = 31},
    {.left = -1, .top = -1, .width = -1, .height = -1},
};

static const sfIntRect DUCK_ANIMRECT_VERTICAL[] = {
    {.left = 5, .top = 78, .width = 24, .height = 31},
    {.left = 41, .top = 78, .width = 32, .height = 31},
    {.left = 82, .top = 79, .width = 30, .height = 30},
    {.left = -1, .top = -1, .width = -1, .height = -1},
};

static const sfIntRect DUCK_ANIMRECT_DEATH[] = {
    {.left = 0, .top = 119, .width = 32, .height = 29},
    {.left = 0, .top = 119, .width = 32, .height = 29},
    {.left = 0, .top = 119, .width = 32, .height = 29},
    {.left = 48, .top = 118, .width = 18, .height = 30},
    {.left = -1, .top = -1, .width = -1, .height = -1},
};

const sfIntRect *DUCK_ANIMRECTS[ANIM_DUCK_COUNT] = {
    [ANIM_DUCK_HORIZONTAL_RIGHT] = DUCK_ANIMRECT_HORIZONTAL,
    [ANIM_DUCK_HORIZONTAL_LEFT] = DUCK_ANIMRECT_HORIZONTAL,
    [ANIM_DUCK_DIAGONAL_RIGHT] = DUCK_ANIMRECT_DIAGONAL,
    [ANIM_DUCK_DIAGONAL_LEFT] = DUCK_ANIMRECT_DIAGONAL,
    [ANIM_DUCK_VERTICAL_UP] = DUCK_ANIMRECT_VERTICAL,
    [ANIM_DUCK_VERTICAL_DOWN] = DUCK_ANIMRECT_VERTICAL,
    [ANIM_DUCK_DEATH] = DUCK_ANIMRECT_DEATH
};
