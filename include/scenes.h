/*
** EPITECH PROJECT, 2019
** My Hunter
** File description:
** Default scene info
*/

#ifndef SCENES_H
#define SCENES_H

#include <stdbool.h>

#include "datastruct.h"

/*
** SCENE DEFAULTS
****************************************/
// Window title
const char *WINDOW_TITLE;
// Video mode
const sfVideoMode VIDEO_MODE;
// Texture path
const char *TEXTURE_SCENE_PATH;
// Texutre pointer
const sfTexture *TEXTURE_SCENE;
// Texture rectangle
const sfIntRect TEXTRECT_SCENE;
// Animation types
const animtype_t ANIMTYPES_SCENE[1];
// Default scene info
const scene_t DEFAULT_SCENE;

bool scene_create(scene_t **scene);

#endif /* !SCENES_H */
