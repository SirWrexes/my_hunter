/*
** EPITECH PROJECT, 2019
** My Hunter
** File description:
** Default scene info
*/

#ifndef MAPS_H
#define MAPS_H

#include <stdbool.h>

#include "datastruct.h"

/*
** Map common defaults
****************************************/
// Texture path
extern const char *TEXTURE_MAPS_PATH;
// Texture pointer
extern const sfTexture *TEXTURE_MAPS;
// Texture rectangle sizes
#define TEXTRECT_SIZE_X_MAPS (256)
#define TEXTRECT_SIZE_Y_MAPS (240)
// Texture scale
#define SCALE_XY_MAPS (4.f)

/*
** MAP1 DEFAULTS
****************************************/
// Texutre pointer
extern const sfTexture *TEXTURE_MAP1;
// Texture rectangle
extern const sfIntRect TEXTRECT_MAP1;
// Animation types
extern const animtype_t ANIMTYPES_MAP1[1];
// Default scene info
extern const scene_t DEFAULT_MAP1;

#endif /* !MAPS_H */
