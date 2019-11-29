/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** Main source
*/

#include <stdlib.h>
#include <SFML/Graphics.h>

#include "datastruct.h"
#include "events.h"
#include "scenes/scenes.h"
#include "entities/entities.h"

int main()
{
    scene_t *scene = NULL;

    if (scene_create(&scene, SCENE_SPLASH)) {
        scene_destroy(&scene);
        return EXIT_FAILURE;
    }
    while (*SCENEPTR != NULL) {
        scene_update_current();
        sfRenderWindow_pollEvent((**SCENEPTR).window, &(**SCENEPTR).event);
        if (EVENTHANDLER[(**SCENEPTR).event.type] != NULL)
            EVENTHANDLER[(**SCENEPTR).event.type]();
    }
    return EXIT_SUCCESS;
}
