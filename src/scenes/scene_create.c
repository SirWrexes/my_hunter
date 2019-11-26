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

#include "entities/entities.h"
#include "scenes/scenes.h"

__Anonnull static bool set_splash(entlist_t *el)
{
    if (spawn_entity(el, DUCK_BLUE) || spawn_entity(el, DUCK_RED))
        return true;
    el->head->idle = &idle_on_place;
    el->last->idle = &idle_on_place;
}

__Anonnull static bool set_commons(scene_t *s, unsigned t)
{
    s->window = sfRenderWindow_create(s->rwmode, WINDOW_TITLE, s->rwstyle, NULL);
    s->clock = sfClock_create();
    s->spinfo.sprite = sfSprite_create();
    if (s->window == NULL || s->clock == NULL || s->spinfo.sprite == NULL)
        return true;
    sfSprite_setTexture(s->spinfo.sprite, *s->spinfo.texture, true);
    sfSprite_setTextureRect(s->spinfo.sprite, *spinfo_getrect(&s->spinfo));
    sfSprite_setScale(s->spinfo.sprite, s->spinfo.scale);
    if (t == SCENE_SPLASH)
        return set_splash(&s->entities);
    return false;
}

__Anonnull bool scene_create(scene_t **scene, unsigned scenetype)
{
    if (scenetype > SCENE_COUNT)
        return true;
    *scene = malloc(sizeof(**scene));
    if (*scene == NULL)
        return true;
    fox_memcpy(*scene, SCENE_ARRAY[scenetype], sizeof(**scene));
    return set_commons(*scene, scenetype);
}
