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
    ANIM_DUCK_HORIZONTAL = 0,
    ANIM_DUCK_DIAGONAL = 1,
    ANIM_DUCK_VERTICAL = 2,
    ANIM_DUCK_DEATH = 3,

    ANIM_DUCK_COUNT
};

/*
** Duck defaults
****************************************/
// Texture path
extern const char *TEXTURE_DUCK_PATH;
// Texture rectangle sizes
#define TEXTRECT_HEIGHT_DUCK (148)
#define TEXTRECT_WIDTH_DUCK (113)
#define TEXTRECT_TOP_DUCK (119)
#define TEXTRECT_DUCK_PALETTESWAP(leftpos)           \
    {                                                \
        .left = (leftpos),                           \
        .top = TEXTRECT_TOP_DUCK,                    \
        .width = TEXTRECT_WIDTH_DUCK,                \
        .height = TEXTRECT_HEIGHT_DUCK               \
    }
// Texture rectangle defaults
extern const sfIntRect TEXTRECT_DUCK[DUCK_COUNT];
// Blue duck animation rectangles
#define MAX_ANIMRECTS_DUCK (4)
extern const sfIntRect ANIMRECTS_DUCK[ANIM_DUCK_COUNT][MAX_ANIMRECTS_DUCK];
// Animation types
extern const animtype_t ANIMTYPES_DUCK[ANIM_DUCK_COUNT];
// Update time
extern const sfTime *TOCK_DUCK;
// Duck default entity info
extern const entity_t ENT_DUCK;

/*
** Duck actions
****************************************/
void duck_idle_in_place(entity_t *duck) __Anonnull;

#endif /* !DUCKS_H */
