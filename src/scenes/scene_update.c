/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** scene_update.c -- No description
*/

#include <SFML/System.h>
#include <SFML/Graphics.h>

#include "datastruct.h"
#include "scenes/scenes.h"
#include "entities/entities.h"

void scene_update(scene_t **s)
{
    sfClock_restart(*CLOCKPTR);
    sfRenderWindow_clear((**s).window, sfBlack);
    sfRenderWindow_drawSprite((**s).window, (**s).spinfo.sprite, NULL);
    for (entity_t *e = (**s).entities.head; e != NULL; e = e->next)
        sfRenderWindow_drawSprite((**s).window, e->spinfo.sprite, NULL);
    sfRenderWindow_display((**s).window);
    update_entities(&(**s).entities);
}

extern inline void scene_update_current(void)
{
    scene_t *s = *SCENEPTR;

    (**SCENEPTR).update(&s);
}
