/*
** EPITECH PROJECT, 2019
** My Hunter
** File description:
** Data structure for storing game data and objects
*/

#ifndef DATASTRUCT_H
#define DATASTRUCT_H

#include <stdbool.h>
#include <SFML/Audio/Types.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/Graphics/Types.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <SFML/System/Vector2.h>
#include <SFML/Window/Event.h>
#include <SFML/Window/Types.h>
#include <SFML/Window/VideoMode.h>
#include <sys/types.h>

#include "fox_define.h"

/*
** Type definitions
****************************************/
// Game structures
typedef enum animation_type animtype_t;
typedef struct sprite_animation *animinfo_t;
typedef struct sprite_info *spinfo_t;
typedef struct game_entity *entity_t;
typedef struct game_entity_list *entlist_t;
typedef struct game_scene *scene_t;


/*
** Virtual table
*****************************************
** FuncName: When it is executed
** --------- -------------------
** OnClick: When clicking on the object's sprite
** OnCreate: When object is created
** OnDeath: If object is an entity, when HP reaches 0
**          Else, when the player's HP reaches 0 (not yet implemented)
** OnDestroy: When the object is destroyed (happens AFTER destruction !)
** Update: Every game loop cycle
*/
// Entity VT function
typedef void (*entfunc_t)(entity_t);
// Scene VT function
typedef void (*scnfunc_t)(scene_t *);
// Virtual table methods
#define __VTABLE(type)          \
    struct {                    \
        type##func_t onclick;   \
        type##func_t oncreate;  \
        type##func_t ondeath;   \
        type##func_t ondestroy; \
        type##func_t update;    \
    }
#define VTABLE_INIT_NULL        \
        .onclick = NULL,        \
        .oncreate = NULL,       \
        .ondeath = NULL,        \
        .ondestroy = NULL,      \
        .update = NULL

// Entity virtual table
typedef __VTABLE(ent) entvt_t;
// Scene virtual table
typedef __VTABLE(scn) scnvt_t;


/*
** Animation data
****************************************/
// Animation types
enum animation_type {
    ANIM_TYPE_PING_PONG, // Rects go back and forth
    ANIM_TYPE_LOOP,      // When last rect is reached, cycle in reverse order
    ANIM_TYPE_ONCE,      // Stay on last frame after a cycle
    ANIM_NONE            // No animation
};

// Animation info object
struct sprite_animation {
    const unsigned total;       // Total count of animations
    const animtype_t *types;    // Animation type for each of them
    const sfIntRect **rects;    // Animation rectangles
    const sfVector2f ***scales; // Scales for each anim of each possible ent

    unsigned current; // Current animation
    unsigned frame;   // Current frame

    enum {
        PP_FORWARD = 1,
        PP_BACKWARD = -1
    } pongstep; // If animation is a ping pong, this is the step incrementer
};

/*
** Sprite data
****************************************/
struct sprite_info {
    unsigned entid;            // Type of the entity the sprite is attached to
    const sfTexture **texture; // Textures
    sfSprite *sprite;          // Sprite itself
    sfVector2f position;       // Sprite starting position
    sfVector2f origin;         // Sprite center

    struct sprite_animation anims; // Animation info
};



/*
** Entity data
****************************************/
// Game entity object
struct game_entity {
    struct game_entity *prev; // Previous entity in the list
    struct game_entity *next; // Next entity in the list

    struct sprite_info spinfo; // Sprite info

    bool alive;     // Entity's state
    ssize_t health; // Entity helth

    sfTime tick;         // Update time limit
    const sfTime **tock; // Time since last tick

    __VTABLE(ent);
};

/*
** Scene data
****************************************/
// Entity list
struct game_entity_list {
    size_t n;      // Number of entities in the list
    entity_t head; // First entity in the list
    entity_t last; // Last entity in the list
};


// Scene object
struct game_scene {
    struct { // Window data
        const char **title;      // Window titles
        const sfVideoMode *mode; // Window video modes
        unsigned style;          // Window style
        sfRenderWindow *ptr;     // Scene window
    } window;

    struct sprite_info spinfo;        // Background sprite
    sfMusic *bgmusic;                 // Music for the scene
    sfEvent event;                    // Event container
    struct game_entity_list entities; // Scene entities

    __VTABLE(scn);
};

#undef __VTABLE
#endif /* !DATASTRUCT_H */
