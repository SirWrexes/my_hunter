/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** sfx_play.c -- No description
*/

#include <malloc.h>
#include <SFML/Audio.h>

#include "fox_memory.h"

#include "datastruct.h"
#include "sfxtools.h"
#include "scenes/scenes.h"

unsigned sfx_play(unsigned type)
{
    unsigned uid = 0;
    sfx_t *lip = (sfx_t *) SOUNDLISTPTR;

    while (*lip != NULL) {
        if ((**lip).type == type && sfSound_getStatus((**lip).sound) != sfPlaying) {
            sfSound_play((**lip).sound);
            return uid;
        }
        uid += 1;
        lip = &(**lip).next;
    }
    *lip = malloc(sizeof(**lip));
    fox_memcpy(*lip, &SFX_DEFAULTS[type], sizeof(**lip));
    (**lip).sound = sfSound_create();
    sfSound_setBuffer((**lip).sound, *(**lip).buff);
    sfSound_play((**lip).sound);
    return uid;
}

