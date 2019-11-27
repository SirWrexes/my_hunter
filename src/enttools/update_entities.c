/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** update_entities.c -- No description
*/

#include "datastruct.h"

__Anonnull
extern inline void update_entities(entlist_t *entlist)
{
    for (entity_t *ent = entlist->head; ent != NULL; ent = ent->next)
        ent->idle(ent);
}
