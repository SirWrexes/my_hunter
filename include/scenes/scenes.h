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
#include "scenes/scenes_common.h"

__Anonnull
bool scene_create(scene_t **scene, unsigned scenetype);

#endif /* !SCENES_H */
