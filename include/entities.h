/*
** EPITECH PROJECT, 2019
** My Hunter
** File description:
** Entity data
*/

#ifndef ENTITIES_H
#define ENTITIES_H

#include "datastruct.h"

enum anims_duck {
    ANIM_DUCK_HORIZONTAL,
    ANIM_DUCK_DIAGONAL,
    ANIM_DUCK_VERTICAL,
    ANIM_DUCK_DEATH,
    ANIM_DUCK_COUNT,
};

/*
** DUCK DEFAULTS
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

#endif /* !ENTITIES_H */
