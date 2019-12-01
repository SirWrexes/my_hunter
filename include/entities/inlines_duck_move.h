/*
** EPITECH PROJECT, 2019
** <project_name>
** File description:
** inlines_duck_move.h -- No description
*/

#ifndef INLINES_DUCK_MOVE_H
#define INLINES_DUCK_MOVE_H

#include "fox_define.h"

#include "datastruct.h"
#include "spritetools.h"

__Anonnull static inline void __move_right(entity_t e)
{
    update_position_info(&e->spinfo);
    e->spinfo.position.x += 15;
    set_to_current_position(&e->spinfo);
}

__Anonnull static inline void __move_left(entity_t e)
{
    update_position_info(&e->spinfo);
    e->spinfo.position.x -= 15;
    set_to_current_position(&e->spinfo);
}

__Anonnull static inline void __move_up(entity_t e)
{
    update_position_info(&e->spinfo);
    e->spinfo.position.y += 15;
    set_to_current_position(&e->spinfo);
}

__Anonnull static inline void __move_down(entity_t e)
{
    update_position_info(&e->spinfo);
    e->spinfo.position.y -= 15;
    set_to_current_position(&e->spinfo);
}

__Anonnull static inline void __move_upright(entity_t e)
{
    update_position_info(&e->spinfo);
    e->spinfo.position.x += 15;
    e->spinfo.position.y += 15;
    set_to_current_position(&e->spinfo);
}

__Anonnull static inline void __move_upleft(entity_t e)
{
    update_position_info(&e->spinfo);
    e->spinfo.position.x -= 15;
    e->spinfo.position.y -= 15;
    set_to_current_position(&e->spinfo);
}

#endif /* !INLINES_DUCK_MOVE_H */
