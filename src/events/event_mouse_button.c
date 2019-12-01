/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** event_mouse_button.c -- No description
*/

#include <stdio.h>
#include <stdbool.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>

#include "datastruct.h"
#include "scenes/scenes.h"
#include "entities/entities.h"
#include "animtools.h"
#include "sfxtools.h"

void event_mouse_button(void)
{
    static sfTime tick = {0};
    sfFloatRect spos;
    sfVector2i mpos = sfMouse_getPositionRenderWindow((**SCENEPTR).window.ptr);

    tick.microseconds += sfClock_getElapsedTime(*CLOCKPTR).microseconds;
    if (tick.microseconds < sfSeconds(0.1).microseconds)
        return;
    sfx_play(SFX_SHOOT);
    for (entity_t e = (**SCENEPTR).entities.head; e != NULL; e = e->next) {
        spos = sfSprite_getGlobalBounds(e->spinfo.sprite);
        if (!sfFloatRect_contains(&spos, mpos.x, mpos.y))
            continue;
        if (e->onclick != NULL)
            e->onclick(e);
    }
    tick.microseconds = 0;
}
