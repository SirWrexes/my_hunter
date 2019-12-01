/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** duck_move.c -- No description
*/

#include "fox_define.h"

#include "animtools.h"
#include "spritetools.h"
#include "entities/entities.h"

#include "entities/inlines_duck_move.h"

static const entfunc_t MOVE_DUCK[ANIM_DUCK_COUNT] = {
    [ANIM_DUCK_HORIZONTAL_LEFT] = &__move_left,
    [ANIM_DUCK_HORIZONTAL_RIGHT] = &__move_right,
    [ANIM_DUCK_VERTICAL_UP] = &__move_up,
    [ANIM_DUCK_VERTICAL_DOWN] = &__move_down,
    [ANIM_DUCK_DIAGONAL_LEFT] = &__move_upleft,
    [ANIM_DUCK_DIAGONAL_RIGHT] = &__move_upright,
};

__Anonnull void duck_move(entity_t e)
{
    MOVE_DUCK[e->spinfo.anims.current](e);
}
