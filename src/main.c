/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** Main source
*/

#include <stdlib.h>
#include <SFML/Graphics.h>

#include "fox_string.h"
#include "fox_io.h"

#include "datastruct.h"
#include "events.h"
#include "entities/entities.h"
#include "scenes/scenes.h"

int main(int ac, char **av)
{
    scene_t scene = NULL;

    if (ac > 1 && !fox_strcmp(av[1], "-h")) {
        fox_eputstr("My Hunter is an Epitech project.\n"
            "Click the ducks to shoot them, have fun !\n");
        return EXIT_FAILURE;
    } else if (ac > 1 || scene_create(&scene, SCENE_SPLASH)) {
        scene_destroy(&scene);
        return EXIT_FAILURE;
    }
    while (*SCENEPTR != NULL) {
        scene_update_current();
        sfRenderWindow_pollEvent((**SCENEPTR).window.ptr, &(**SCENEPTR).event);
        if (EVENTHANDLER[(**SCENEPTR).event.type] != NULL)
            EVENTHANDLER[(**SCENEPTR).event.type]();
    }
    return EXIT_SUCCESS;
}
