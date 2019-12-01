/*
** EPITECH PROJECT, 2019
** <project_name>
** File description:
** scenes_common.h -- No description
*/

#ifndef SCENES_COMMON_H
#define SCENES_COMMON_H

#include "datastruct.h"

// Game clock poiter
extern sfClock *const *CLOCKPTR;
// Current scene pointer
extern struct game_scene *const *SCENEPTR;
// Default scene data
extern const struct game_scene SCENE_DEFAULT;
// Sounds effects
extern const struct sound_effect SFX_DEFAULTS[];
// Sound effect types
typedef enum {
    SFX_SHOOT,
    SFX_DUCK_KWAK,
    SFX_DUCK_FLAP,
    SFX_DUCK_FALL,
    SFX_DUCK_DESTROY,

    SFX_COUNT
} sfxtype_t;

// Mcro foor defining default values for each sound type.
#define ADD_SFX_DEFAULT(sfxtype, sfxpath, loopbool) \
    [(sfxtype)] = {                                 \
        .type = (sfxtype),                          \
        .loop = (loopbool),                         \
        .path = (sfxpath),                          \
        .buff = &SOUNDBUFFERS[(sfxtype)],           \
        .sound = NULL,                              \
        .id = 0,                                    \
    }

/*
** Scene type and default values array
****************************************/
// All possible types of scene
typedef enum {
    SCENE_SPLASH,
    SCENE_MAP1,

    SCENE_COUNT
} scenetype_t;
// Scene titles
extern const char *SCENE_TITLES[];
// Video mode for each scene's respective window
extern const sfVideoMode SCENE_VIDEO_MODES[];
// Scene textures
extern const sfTexture *SCENE_TEXTURES[];
// Scene texture areas
extern const sfIntRect SCENE_TEXTURE_AREAS[];
// Scene animation rectangles
extern const sfIntRect *SCENE_ANIMRECTS[];
// Scene animation types
extern const animtype_t SCENE_ANIMTYPES[];
// Scene animation scales
extern const sfVector2f **SCENE_SCALES[];
// Scene virtual tables
extern const scnvt_t SCENE_VTABLES[];

#endif /* !SCENES_COMMON_H */
