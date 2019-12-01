/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** sfx_stop.c -- No description
*/

#include <SFML/Audio.h>

#include "datastruct.h"
#include "sfxtools.h"

void sfx_stop_type(unsigned type)
{
    for (sfx_t li = *SOUNDLISTPTR; li != NULL; li = li->next) {
        if (li->type != type || sfSound_getStatus(li->sound) != sfPlaying)
            continue;
        sfSound_stop(li->sound);
    }
}
