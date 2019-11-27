/*
** EPITECH PROJECT, 2019
** My Hunter
** File description:
** Entity data
*/

#ifndef ENTITIES_H
#define ENTITIES_H

#include <stdbool.h>

#include "fox_define.h"

#include "datastruct.h"
#include "entities/ducks.h"

// Add an enitity of type enttype to the list
// Returns true in case of error
bool spawn_entity(entlist_t *entlist, unsigned enttype) __Anonnull;

// Go through an entlist and update each one
void update_entities(entlist_t *entlist) __Anonnull;

#endif /* !ENTITIES_H */
