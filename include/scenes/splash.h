/*
** EPITECH PROJECT, 2019
** <project_name>
** File description:
** splash.h -- No description
*/

#ifndef SPLASH_H
#define SPLASH_H

#include "scenes/scenes.h"

/*
** Splash screen
****************************************/
// Texture path
extern const char *TEXTURE_SPLASH_PATH;
// Texture pointer
extern const sfTexture *TEXTURE_SPLASH;
// Texture rectangle sizes
#define TEXTRECT_SIZE_X_SPLASH (858)
#define TEXTRECT_SIZE_Y_SPLASH (482)
// Texture scale
#define SCALE_XY_SPLASH (1.f)
// Animation types
extern const animtype_t ANIMTYPES_SPLASH[1];
// Default scene info
extern const scene_t DEFAULT_SPLASH;

#endif /* !SPLASH_H */
