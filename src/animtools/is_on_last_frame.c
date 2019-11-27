/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** is_on_last_frame.c -- No description
*/

#include <stdbool.h>

#include "datastruct.h"
#include "animtools.h"

__Anonnull
extern inline bool is_on_last_frame(animinfo_t *a)
{
    switch (a->types[a->current]) {
        case ANIM_TYPE_LOOP:
        case ANIM_TYPE_ONCE:
            return ((*a->rects)[a->current][a->frame + 1].top == -1);
        case ANIM_TYPE_PING_PONG:
            return (a->pongstep == PP_BACKWARD && a->frame == 0)
                || (a->pongstep == PP_FORWARD
                    && (*a->rects)[a->current][a->frame + 1].top == -1);
        default: return true;
    }
}
