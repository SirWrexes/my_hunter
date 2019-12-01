/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** sfx.c -- No description
*/

#include <SFML/Audio.h>

#include "scenes/scenes.h"

const sfx_t *SOUNDLISTPTR = NULL;

static const sfSoundBuffer *SOUNDBUFFERS[SFX_COUNT] = {
    [0 ... SFX_COUNT - 1] = NULL
};

const struct sound_effect SFX_DEFAULTS[SFX_COUNT] = {
    ADD_SFX_DEFAULT(SFX_SHOOT, "./res/sound/shoot.ogg", false),
    ADD_SFX_DEFAULT(SFX_DUCK_FLAP, "./res/sound/duckflap.ogg", false),
    ADD_SFX_DEFAULT(SFX_DUCK_KWAK, "./res/sound/duckkwak.ogg", false),
    ADD_SFX_DEFAULT(SFX_DUCK_FALL, "./res/sound/duckfall.ogg", false),
    ADD_SFX_DEFAULT(SFX_DUCK_DESTROY, "./res/sound/duckdestroy.ogg", false),
};

__Aconstructor static void init_sound(void)
{
    static sfx_t li = NULL;

    SOUNDLISTPTR = &li;
    for (sfxtype_t i = 0; i < SFX_COUNT; i += 1)
        SOUNDBUFFERS[i] = sfSoundBuffer_createFromFile(SFX_DEFAULTS[i].path);
}
