/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** splash_oncreate.c -- No description
*/

#include <SFML/Graphics.h>

#include "fox_define.h"

#include "datastruct.h"
#include "spritetools.h"
#include "entities/entities.h"
#include "scenes/scenes.h"

static const sfVector2f SPLASH_DUCK_POS1 = {.x = 791.f, .y = 95.f};
static const sfVector2f SPLASH_DUCK_POS2 = {.x = 42.f, .y = 296.f};

__Anonnull void splash_oncreate(scene_t *splash)
{
    entlist_t el = &(**splash).entities;

    if (entity_create(el, DUCK_BLUE) || entity_create(el, DUCK_RED))
        return;
    el->head->update = &duck_update_in_place;
    el->last->update = &duck_update_in_place;
    el->head->spinfo.anims.current = ANIM_DUCK_DIAGONAL_LEFT;
    el->last->spinfo.anims.current = ANIM_DUCK_HORIZONTAL_RIGHT;
    el->head->spinfo.position = SPLASH_DUCK_POS1;
    el->last->spinfo.position = SPLASH_DUCK_POS2;
    set_to_current_scale(&el->head->spinfo);
    set_to_current_scale(&el->last->spinfo);
    set_to_current_position(&el->head->spinfo);
    set_to_current_position(&el->last->spinfo);
}
