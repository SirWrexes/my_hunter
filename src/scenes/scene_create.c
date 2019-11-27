/*
** EPITECH PROJECT, 2019
** My Hunter
** File description:
** Scene creation
*/

#include <stdbool.h>
#include <malloc.h>
#include <SFML/Graphics.h>

#include "fox_define.h"
#include "fox_memory.h"

#include "animtools.h"
#include "entities/entities.h"
#include "scenes/scenes.h"

static const sfVector2f DUCKPOS1 = {.x = 791.f, .y = 95.f};
static const sfVector2f DUCKPOS2 = {.x = 42.f, .y = 296.f};
static const sfVector2f DUCKSCALE1 = {.x = -4.f, .y = 4.f};
static const sfVector2f DUCKSCALE2 = {.x = 4.f, .y = 4.f};

__Anonnull static bool set_splash(entlist_t *el)
{
    if (spawn_entity(el, DUCK_BLUE) || spawn_entity(el, DUCK_RED))
        return true;
    el->head->idle = &duck_idle_in_place;
    el->last->idle = &duck_idle_in_place;
    el->head->spinfo.anims.current = ANIM_DUCK_DIAGONAL;
    el->last->spinfo.anims.current = ANIM_DUCK_HORIZONTAL;
    sfSprite_setScale(el->head->spinfo.sprite, DUCKSCALE1);
    sfSprite_setScale(el->last->spinfo.sprite, DUCKSCALE2);
    sfSprite_setPosition(el->head->spinfo.sprite, DUCKPOS1);
    sfSprite_setPosition(el->last->spinfo.sprite, DUCKPOS2);
    return false;
}

__Anonnull static bool set_commons(scene_t *s, unsigned t)
{
    sfTexture *texture;
    spinfo_t *spinfo = &s->spinfo;

    s->window = sfRenderWindow_create(s->rwmode, WINDOW_TITLE, s->rwstyle, NULL);
    sfRenderWindow_setFramerateLimit(s->window, 60);
    spinfo->sprite = sfSprite_create();
    if (s->window == NULL || spinfo->sprite == NULL)
        return true;
    texture = spinfo->share_texture
        ? (sfTexture *) *spinfo->textconst
        : spinfo->texture;
    sfSprite_setTexture(spinfo->sprite, texture, true);
    sfSprite_setScale(spinfo->sprite, spinfo->scale);
    if (t == SCENE_SPLASH)
        return set_splash(&s->entities);
    sfSprite_setTextureRect(spinfo->sprite, *get_current_rect(&spinfo->anims));
    return false;
}

__Anonnull bool scene_create(scene_t **scene, unsigned scenetype)
{
    if (scenetype > SCENE_COUNT)
        return true;
    *scene = fox_memcpy(
        malloc(sizeof(**scene)), SCENE_ARRAY[scenetype], sizeof(**scene));
    if (*scene == NULL)
        return true;
    return set_commons(*scene, scenetype);
}
