/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** spawn_entity.c -- No description
*/

#include <malloc.h>
#include <SFML/Graphics.h>

#include "fox_memory.h"

#include "datastruct.h"
#include "spritetools.h"
#include "entities/entities.h"

__Anonnull bool spawn_entity(entlist_t *list, unsigned type)
{
    entity_t *ent = NULL;

    if (type > DUCK_COUNT)
        return true;
    ent = fox_memcpy(malloc(sizeof(*ent)), &ENT_DUCK, sizeof(*ent));
    if (ent == NULL)
        return true;
    ent->spinfo.texture =
        sfTexture_createFromFile(TEXTURE_DUCK_PATH, &TEXTRECT_DUCK[type]);
    if (ent->spinfo.texture == NULL)
        return true;
    if (list->n++ == 0) {
        list->head = ent;
        list->last = ent;
    } else {
        ent->prev = list->last;
        list->last->next = ent;
        list->last = ent;
    }
    return init_sprite(&ent->spinfo);
}
