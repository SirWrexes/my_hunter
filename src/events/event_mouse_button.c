/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** event_mouse_button.c -- No description
*/

#include <stdio.h>
#include <stdbool.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>

#include "datastruct.h"
#include "scenes/scenes.h"
#include "entities/entities.h"
#include "animtools.h"

static const char *SHOOT_SOUND = "res/sound/shoot.ogg";
static sfSoundBuffer * const *CLICKBUFF = NULL;
static sfSound * const *CLICKSOUND = NULL;

void event_mouse_button(void)
{
    static sfTime tick = {0};
    sfFloatRect spos;
    sfVector2i mpos = sfMouse_getPositionRenderWindow((**SCENEPTR).window.ptr);

    tick.microseconds += sfClock_getElapsedTime(*CLOCKPTR).microseconds;
    if (tick.microseconds < sfSeconds(0.1).microseconds)
        return;
    sfSound_play(*CLICKSOUND);
    for (entity_t e = (**SCENEPTR).entities.head; e != NULL; e = e->next) {
        spos = sfSprite_getGlobalBounds(e->spinfo.sprite);
        if (!sfFloatRect_contains(&spos, mpos.x, mpos.y))
            continue;
        if (e->onclick != NULL)
            e->onclick(e);
    }
    tick.microseconds = 0;
}

__Aconstructor static void init_click_sound(void)
{
    static sfSoundBuffer *sbuff = NULL;
    static sfSound *sound = NULL;

    sbuff = sfSoundBuffer_createFromFile(SHOOT_SOUND);
    sound = sfSound_create();
    sfSound_setBuffer(sound, sbuff);
    CLICKBUFF = &sbuff;
    CLICKSOUND = &sound;
}
