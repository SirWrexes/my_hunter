/*
** EPITECH PROJECT, 2019
** <project_name>
** File description:
** animtools.h -- No description
*/

#ifndef ANIMTOOLS_H
#define ANIMTOOLS_H

#include <stdbool.h>

#include "fox_define.h"

#include "datastruct.h"

// Returns true if an animation is on its last frame
bool is_on_last_frame(animinfo_t a) __Anonnull;

// Set anim->frame to the next step depending on animation type
void set_to_next_frame(animinfo_t a) __Anonnull;

// Get the animation's current rectangle
const sfIntRect *get_current_rect(animinfo_t a) __Anonnull;

#endif /* !ANIMTOOLS_H */
