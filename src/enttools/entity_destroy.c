/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** entity_despawn.c -- No description
*/

#include <malloc.h>
#include <SFML/Graphics.h>

#include "datastruct.h"

__Anonnull void entity_destroy(entlist_t el, entity_t ent)
{
    if (ent->prev != NULL)
        ent->prev->next = ent->next;
    if (ent->next != NULL)
        ent->next->prev = ent->prev;
    if (el->head == ent)
        el->head = ent->next;
    if (el->last == ent)
        el->last = ent->prev;
    el->n -= 1;
    sfSprite_destroy(ent->spinfo.sprite);
    free(ent);
}
