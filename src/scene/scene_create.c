/*
** EPITECH PROJECT, 2019
** My Hunter
** File description:
** Create a new scene with default values
*/

#include <malloc.h>
#include <stdbool.h>
#include <SFML/Graphics.h>

#include "fox_define.h"
#include "fox_memory.h"

#include "datastruct.h"
#include "scenes.h"

bool scene_create(scene_t **scene)
{
    *scene = malloc(sizeof(**scene));
    if (*scene == NULL)
        return true;
    fox_memcpy(*scene, &DEFAULT_SCENE, sizeof(**scene));
    (**scene).window =
        sfRenderWindow_create(VIDEO_MODE, WINDOW_TITLE, sfDefaultStyle, NULL);
    (**scene).clock = sfClock_create();
    sfRenderWindow_setFramerateLimit((**scene).window, 60);
    (**scene).spinfo.sprite = sfSprite_create();
    sfSprite_setTexture((**scene).spinfo.sprite, TEXTURE_SCENE, true);
    sfSprite_setTextureRect((**scene).spinfo.sprite, TEXTRECT_SCENE);
    sfSprite_setScale((**scene).spinfo.sprite, (**scene).spinfo.scale);
    sfSprite_setPosition((**scene).spinfo.sprite, (**scene).spinfo.position);
    return false;
}
