/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** update_entities.c -- No description
*/

#include "datastruct.h"

__Anonnull extern inline void update_entities(entlist_t *entlist)
{
    entity_t *ent = entlist->head;
    entity_t *tmp;

    while (ent != NULL) {
        tmp = ent->next;
        if (ent->alive && ent->health == 0)
            ent->ondeath(ent);
        ent->idle(ent);
        ent = tmp;
    }
}
