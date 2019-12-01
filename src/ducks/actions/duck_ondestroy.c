/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** duck_ondestroy.c -- No description
*/

#include "datastruct.h"
#include "sfxtools.h"
#include "scenes/scenes.h"

extern inline void duck_ondestroy(entity_t __Aunused e)
{
    sfx_stop_type(SFX_DUCK_FALL);
    sfx_play(SFX_DUCK_DESTROY);
}
