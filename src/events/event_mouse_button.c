/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** event_mouse_button.c -- No description
*/

#include <stdio.h>
#include <stdbool.h>
#include <SFML/Graphics.h>

#include "datastruct.h"
#include "scenes/scenes.h"
#include "entities/entities.h"
#include "animtools.h"

void event_mouse_button(void)
{
    sfFloatRect spos;
    sfVector2i mpos = sfMouse_getPositionRenderWindow((**SCENEPTR).window);

    for (entity_t *e = (**SCENEPTR).entities.head; e != NULL; e = e->next) {
        spos = sfSprite_getGlobalBounds(e->spinfo.sprite);
        if (!sfFloatRect_contains(&spos, mpos.x, mpos.y))
            continue;
        e->onclick(e);
    }
}
