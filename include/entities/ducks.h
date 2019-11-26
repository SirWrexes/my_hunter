/*
** EPITECH PROJECT, 2019
** <project_name>
** File description:
** ducks.h -- No description
*/

#ifndef DUCKS_H
#define DUCKS_H

#include "datastruct.h"

/*
** Duck types
****************************************/
enum duck_types {
    DUCK_BLUE,
    DUCK_BLACK,
    DUCK_RED,

    DUCK_COUNT
};

/*
** Duck animation types
****************************************/
enum anims_duck {
    ANIM_DUCK_HORIZONTAL,
    ANIM_DUCK_DIAGONAL,
    ANIM_DUCK_VERTICAL,
    ANIM_DUCK_DEATH,
    ANIM_DUCK_COUNT,
};

/*
** Duck defaults
****************************************/
// Texture path
extern const char *TEXTURE_DUCK_PATH;
// Texture pointer
extern const sfTexture *TEXTURE_DUCK;
// Texture rectangle
extern const sfIntRect TEXTRECT_DUCK;
// Animation rectangles
extern const sfIntRect ANIMRECTS_DUCK[][ANIM_DUCK_COUNT];
// Animation types
extern const animtype_t ANIMTYPES_DUCK[ANIM_DUCK_COUNT];
// Default entity info
extern const entity_t ENT_DUCK;

#endif /* !DUCKS_H */
