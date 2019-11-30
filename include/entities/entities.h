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
bool entity_create(entlist_t entlist, unsigned enttype) __Anonnull;

// Destroy an entity and remove it from the list
void entity_destroy(entlist_t el, entity_t e) __Anonnull;

// Go through an entlist and update each one
void update_entities(entlist_t entlist) __Anonnull;

// Update the elapsed time since last check
// Returns true if update time has been reached
bool entity_update_tick(entity_t e) __Anonnull;

#endif /* !ENTITIES_H */
