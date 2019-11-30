/*
** EPITECH PROJECT, 2019
** <project_name>
** File description:
** splash.h -- No description
*/

#ifndef SPLASH_H
#define SPLASH_H

#include "datastruct.h"

#define TEXTURE_WIDTH_SPLASH  (858)
#define TEXTURE_HEIGHT_SPLASH (482)
#define SCALE_X_SPLASH        (1.f)
#define SCALE_Y_SPLASH        (1.f)

/*
** Splash functions
****************************************/
void splash_oncreate(scene_t *splash) __Anonnull;
void splash_update(scene_t *splash) __Anonnull;

#endif /* !SPLASH_H */
