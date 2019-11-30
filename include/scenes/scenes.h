/*
** EPITECH PROJECT, 2019
** My Hunter
** File description:
** Default scene info
*/

#ifndef SCENES_H
#define SCENES_H

#include <stdbool.h>

#include "fox_define.h"

#include "datastruct.h"
#include "scenes/maps.h"
#include "scenes/splash.h"
#include "scenes_common.h"

// Create a new scene
// Returns true in case of error
bool scene_create(scene_t *scene, unsigned scenetype) __Anonnull;

// Create a scene's window from its own data
// Returns true in case of error
bool scene_create_window_from_self(scene_t s) __Anonnull;

// Create a scene's sprite from its own data
// Returns true in case of error
bool scene_create_sprite_from_self(scene_t scene) __Anonnull;

// Update a scene
void scene_update(scene_t *s) __Anonnull;
void scene_update_current(void);

// Destroy a scene and everything it contains
void scene_destroy(scene_t *scene) __Anonnull;
void scene_destroy_current(void);

#endif /* !SCENES_H */
