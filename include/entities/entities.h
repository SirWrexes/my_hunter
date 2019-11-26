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

__Anonnull
bool spawn_entity(entlist_t *entlist, unsigned enttype);

#endif /* !ENTITIES_H */
