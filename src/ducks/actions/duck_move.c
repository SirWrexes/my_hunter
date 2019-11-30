/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** duck_move.c -- No description
*/

#include "fox_define.h"

#include "entities/entities.h"
#include "spritetools.h"
#include "animtools.h"

__Anonnull void move_right(entity_t e)
{
    update_position_info(&e->spinfo);
    e->spinfo.position.x += 15;
    set_to_current_position(&e->spinfo);
}

__Anonnull void move_left(entity_t e)
{
    update_position_info(&e->spinfo);
    e->spinfo.position.x -= 15;
    set_to_current_position(&e->spinfo);
}

__Anonnull void move_up(entity_t e)
{
    update_position_info(&e->spinfo);
    e->spinfo.position.y += 15;
    set_to_current_position(&e->spinfo);
}

__Anonnull void move_down(entity_t e)
{
    update_position_info(&e->spinfo);
    e->spinfo.position.y -= 15;
    set_to_current_position(&e->spinfo);
}

__Anonnull void move_upright(entity_t e)
{
    update_position_info(&e->spinfo);
    e->spinfo.position.x += 15;
    e->spinfo.position.y += 15;
    set_to_current_position(&e->spinfo);
}

__Anonnull void move_upleft(entity_t e)
{
    update_position_info(&e->spinfo);
    e->spinfo.position.x -= 15;
    e->spinfo.position.y -= 15;
    set_to_current_position(&e->spinfo);
}

static const entfunc_t MOVE_DUCK[ANIM_DUCK_COUNT] = {
    [ANIM_DUCK_HORIZONTAL_LEFT] = &move_left,
    [ANIM_DUCK_HORIZONTAL_RIGHT] = &move_right,
    [ANIM_DUCK_VERTICAL_UP] = &move_up,
    [ANIM_DUCK_VERTICAL_DOWN] = &move_down,
    [ANIM_DUCK_DIAGONAL_LEFT] = &move_upleft,
    [ANIM_DUCK_DIAGONAL_RIGHT] = &move_upright,
};

__Anonnull void duck_move(entity_t e)
{
    MOVE_DUCK[get_current_type(&e->spinfo.anims)](e);
}
