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

#include "scenes/scenes.h"
#include "spritetools.h"

__Anonnull bool scene_create(scene_t *s, unsigned type)
{
    if (type > SCENE_COUNT)
        return true;
    *s = fox_memcpy(malloc(sizeof(**s)), &SCENE_DEFAULT, sizeof(**s));
    if (*s == NULL)
        return true;
    SCENEPTR = s;
    (**s).spinfo.entid = type;
    if (scene_create_window_from_self(*s) || init_sprite(&(**s).spinfo))
        return true;
    fox_memcpy(&(**s).onclick, &SCENE_VTABLES[type], sizeof(scnvt_t));
    if ((**s).oncreate != NULL)
        (**s).oncreate(s);
    return false;
}
