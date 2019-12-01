/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** duck_oncreate.c -- No description
*/

#include <stdlib.h>
#include <SFML/Graphics.h>

#include "datastruct.h"
#include "sfxtools.h"
#include "spritetools.h"
#include "scenes/scenes.h"
#include "entities/entities.h"

__Anonnull void duck_oncreate(entity_t e)
{
    sfVector2u winsize = sfRenderWindow_getSize((**SCENEPTR).window.ptr);

    if ((**SCENEPTR).spinfo.entid != SCENE_SPLASH)
        sfx_play(SFX_DUCK_KWAK);
    e->spinfo.anims.current = rand() % ANIM_DUCK_COUNT;
    e->spinfo.position.x = rand() % (winsize.x - 100) + 100;
    e->spinfo.position.y = rand() % (winsize.y - 100) + 100;
    init_sprite(&e->spinfo);
}
