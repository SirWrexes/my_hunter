/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** spawn_entity.c -- No description
*/

#include <malloc.h>
#include <stdlib.h>
#include <SFML/Graphics.h>

#include "fox_memory.h"

#include "datastruct.h"
#include "spritetools.h"
#include "entities/entities.h"

__Anonnull static void adjust_nextprev_ptrs(entlist_t list, entity_t ent)
{
    if (list->n++ == 0) {
        list->head = ent;
        list->last = ent;
    } else {
        ent->prev = list->last;
        list->last->next = ent;
        list->last = ent;
    }
}

__Anonnull bool entity_create(entlist_t list, unsigned type)
{
    entity_t ent = NULL;

    if (type > DUCK_COUNT)
        return true;
    ent = fox_memcpy(malloc(sizeof(*ent)), &DUCK_DEFAULT, sizeof(*ent));
    if (ent == NULL)
        return true;
    ent->spinfo.entid = type;
    fox_memcpy(&ent->onclick, &DUCK_VTABLES[type], sizeof(entvt_t));
    adjust_nextprev_ptrs(list, ent);
    if (ent->oncreate != NULL)
        ent->oncreate(ent);
    return false;
}
