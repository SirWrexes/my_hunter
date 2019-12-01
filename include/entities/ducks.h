/*
** EPITECH PROJECT, 2019
** <project_name>
** File description:
** ducks.h -- No description
*/

#ifndef DUCKS_H
#define DUCKS_H

#include "datastruct.h"
#include "scenes/maps.h"

/*
** Duck types
****************************************/
typedef enum {
    DUCK_BLUE,
    DUCK_BLACK,
    DUCK_RED,

    DUCK_COUNT
} ducktype_t;



/*
** Duck animation types
****************************************/
enum anims_duck {
    ANIM_DUCK_HORIZONTAL_RIGHT,
    ANIM_DUCK_HORIZONTAL_LEFT,
    ANIM_DUCK_DIAGONAL_RIGHT,
    ANIM_DUCK_DIAGONAL_LEFT,
    ANIM_DUCK_VERTICAL_UP,
    ANIM_DUCK_VERTICAL_DOWN,
    ANIM_DUCK_DEATH,

    ANIM_DUCK_COUNT
};



/*
** Duck defaults
****************************************/
// Default values
extern const struct game_entity DUCK_DEFAULT;
// Animation rectangles
extern const sfIntRect *DUCK_ANIMRECTS[];
// Animation types
extern const animtype_t DUCK_ANIMTYPES[];
// Animation scales
extern const sfVector2f **DUCK_SCALES[];
// Texutres
extern const sfTexture *DUCK_TEXTURES[];
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
#define __SCALE_DUCK_NORMAL                  \
    {                                        \
        .x = SCALE_X_MAPS, .y = SCALE_Y_MAPS \
    }
#define __SCALE_DUCK_INVERTX                    \
    {                                           \
        .x = -(SCALE_X_MAPS), .y = SCALE_Y_MAPS \
    }
#define __SCALE_DUCK_INVERTY                    \
    {                                           \
        .x = SCALE_X_MAPS, .y = -(SCALE_Y_MAPS) \
    }
// Virtual tables
extern const entvt_t DUCK_VTABLES[];


/*
** Duck actions
****************************************/
// Action when the duck is spawned
void duck_oncreate(entity_t duck) __Anonnull;
// Default action every frame
void duck_update(entity_t duck) __Anonnull;
void duck_update_dead(entity_t duck) __Anonnull;
void duck_update_in_place(entity_t duck) __Anonnull;
// Move the duck depeding on its current animation
void duck_move(entity_t duck) __Anonnull;
// Actions modifying the entity's stats
void duck_lose_health(entity_t duck, unsigned hp) __Anonnull;
// Actions triggered by events
void duck_on_click(entity_t duck) __Anonnull;
void duck_on_death(entity_t duck) __Anonnull;
// Action after a duck is destroyed
void duck_ondestroy(entity_t __Aunused e);

#endif /* !DUCKS_H */
