/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** set_to_next_frame.c -- No description
*/

#include <stdbool.h>

#include "animtools.h"
#include "datastruct.h"

__Anonnull extern inline void set_to_next_frame(animinfo_t anim)
{
    bool onlast = is_on_last_frame(anim);

    switch (anim->types[anim->current]) {
        default: return;
        case ANIM_TYPE_LOOP: anim->frame = onlast ? 0 : anim->frame + 1; break;
        case ANIM_TYPE_ONCE:
            if (onlast)
                return;
            anim->frame += 1;
            break;
        case ANIM_TYPE_PING_PONG:
            if (onlast)
                anim->pongstep =
                    (anim->pongstep == PP_FORWARD) ? PP_BACKWARD : PP_FORWARD;
            anim->frame += anim->pongstep;
            break;
    }
}
