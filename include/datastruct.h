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

typedef enum animation_type {
    ANIM_TYPE_PING_PONG, // Rects go back and forth
    ANIM_TYPE_LOOP,      // When last rect is reached, cycle in reverse order
    ANIM_TYPE_ONCE,      // Stay on last frame after a cycle
    ANIM_NONE            // No animation
} animtype_t;

#define MAX_ANIMS (4)
#define MAX_ANIMRECTS (4)
typedef struct sprite_animation {
    const unsigned total; // Total count of animations
    animtype_t *types;    // Animation type for each of them
    unsigned current;     // Current animation
    unsigned frame;       // Current frame
    const sfIntRect (*rects)[MAX_ANIMS][MAX_ANIMRECTS]; // Animation rectangles
    enum {
        PP_FORWARD = 1,
        PP_BACKWARD = -1
    } pongstep; // If animation is a ping pong, this is the step incrementer
} animinfo_t;

typedef struct sprite_info {
    union {                          // Sprite texture
        const sfTexture **textconst; // If it's a shared global
        sfTexture *texture;          // If it's got its own
    };
    bool share_texture;        // True if a shared texture ie used
    sfSprite *sprite;          // Sprite itself
    sfVector2f position;       // Sprite starting position
    sfVector2f scale;          // Sprite origin scale
    sfVector2f origin;         // Sprite center
    animinfo_t anims;          // Animation info
} spinfo_t;

typedef struct game_entity entity_t;
typedef void (*action_t)(entity_t *);
struct game_entity {
    struct game_entity *prev; // Previous entity in the list
    struct game_entity *next; // Next entity in the list
    spinfo_t spinfo;          // Sprite info
    sfVector2f pos;           // Default sprite position
    ssize_t health;           // Entity helth
    action_t idle;            // Action to trigger every tick
    action_t onclick;         // Action to trigger when clicked
    action_t ondeath;         // Action to trigger when health <= 0
    sfTime tick;              // Lenght of a tick
    const sfTime **tock;      // Time before next tick
};

typedef struct game_entity_list {
    size_t n;       // Number of entities in the list
    entity_t *head; // First entity in the list
    entity_t *last; // Last entity in the list
} entlist_t;

typedef struct game_scene {
    sfRenderWindow *window; // Scene window
    sfVideoMode rwmode;     // Window video mode
    unsigned rwstyle;       // Window style
    sfMusic *bgmusic;       // Music for the scene
    sfEvent event;          // Event container
    spinfo_t spinfo;        // Background sprite
    entlist_t entities;     // Scene entities
} scene_t;

#endif /* !DATASTRUCT_H */
