/*
** EPITECH PROJECT, 2019
** <project_name>
** File description:
** scenes_common.h -- No description
*/

#ifndef SCENES_COMMON_H
#define SCENES_COMMON_H

#include "datastruct.h"
#include "scenes/scenes.h"

// Game window title
extern const char *WINDOW_TITLE;
// Game clock poiter
extern sfClock * const * CLOCKPTR;
// Current scene pointer
extern scene_t * const * SCENEPTR;

/*
** Scene type and default values array
****************************************/
typedef enum {
    SCENE_SPLASH,
    SCENE_MAP1,

    SCENE_COUNT
} scenetype_t;
// Array containing pointer to default values for every scene
extern const scene_t *SCENE_ARRAY[SCENE_COUNT];

#endif /* !SCENES_COMMON_H */
