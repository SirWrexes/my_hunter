/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** scene_destroy.c -- No description
*/

#include <malloc.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>

#include "entities/entities.h"
#include "scenes/scenes.h"

__Anonnull void scene_destroy(scene_t **scene)
{
    entity_t *ent = (**scene).entities.head;
    entity_t *tmp;

    while (ent != NULL) {
        tmp = ent->next;
        entity_destroy(&(**scene).entities, ent);
        ent = tmp;
    }
    if ((**scene).bgmusic != NULL)
        sfMusic_destroy((**scene).bgmusic);
    if ((**scene).window != NULL)
        sfRenderWindow_destroy((**scene).window);
    free(*scene);
    *scene = NULL;
}

__Anonnull extern inline void scene_destroy_current(void)
{
    scene_destroy((scene_t **) SCENEPTR);
}
