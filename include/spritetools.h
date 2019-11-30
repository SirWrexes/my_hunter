/*
** EPITECH PROJECT, 2019
** <project_name>
** File description:
** spritetools.h -- No description
*/

#ifndef SPRITETOOLS_H
#define SPRITETOOLS_H

#include <stdbool.h>

#include "datastruct.h"

// Create and initialize a sprite
bool init_sprite(spinfo_t spinfo) __Anonnull;

// Update .position value in spinfo_t s
void update_position_info(spinfo_t s) __Anonnull;

// Get the sprite's scale
const sfVector2f *get_current_scale(spinfo_t s) __Anonnull;

// Set a sprite to its propre texture according to its entid
void set_to_current_texture(spinfo_t spinfo) __Anonnull;

// Set the texture rectangle to the current animation's frame's rect
void set_to_current_rect(spinfo_t s) __Anonnull;

// Set a sprite to its proper scale according to its animinfo
void set_to_current_scale(spinfo_t spinfo) __Anonnull;

// Set a sprite to its current position
void set_to_current_position(spinfo_t spinfo) __Anonnull;

// Update the animation rect from current frame
void update_rect_from_frame(spinfo_t s) __Anonnull;

// Returns true if sprite is outside of current window
bool sprite_is_out_of_bounds(spinfo_t s) __Anonnull;

#endif /* !SPRITETOOLS_H */
