/*
** EPITECH PROJECT, 2018
** CSFML Project
** File description:
** Norm friendly redefinitions of CSFML functions
*/

#ifndef SFML_REDEF_H
#define SFML_REDEF_H

#include <SFML/Audio.h>
#include <SFML/Graphics.h>

// Most functions are voids. Though constructors return a pointer
// to the newly created object. So macros containing "CREATE" must
// be used to _assign_ that pointer to the object you want to make.

// RW = Render Window
#define DESKTOPMODE                                                            \
/* → */ sfVideoMode_getDesktopMode()

#define DEFAULTSTYLE                                                           \
/* → */ sfDefaultStyle

#define SFFULLSCREEN                                                           \
/* → */ sfFullscreen

#define RW_create(mode, title, style)                                          \
/* → */ sfRenderWindow_create((mode), (title), (style), NULL)

#define RW_close(window)                                                       \
/* → */ sfRenderWindow_close((window))

#define RW_destroy(window)                                                     \
/* → */ sfRenderWindow_destroy((window))

#define RW_setActive(window, active)                                           \
/* → */ sfRenderWindow_setActive((window), (active))

#define RW_setFps(window, fps_max)                                             \
/* → */ sfRenderWindow_setFramerateLimit((window), (fps_max))

#define RW_grabMouse(window, grabbed)                                          \
/* → */ sfRenderWindow_setMouseCursorGrabbed((window), (grabbed))

#define RW_showCursor(window, show)                                            \
/* → */ sfRenderWindow_setMouseCursorVisible((window), (show))

#define RW_isOpen(window)                                                      \
/* → */ sfRenderWindow_isOpen((window))

#define RW_pollEvent(window, event)                                            \
/* → */ sfRenderWindow_pollEvent((window), (event))

#define RW_clear(window)                                                       \
/* → */ sfRenderWindow_clear((window), sfBlack)

#define RW_drawSprite(window, sprite)                                          \
/* → */ sfRenderWindow_drawSprite((window), (sprite), NULL)

#define RW_update(window)                                                      \
/* → */ sfRenderWindow_display((window))

#define RW_getSize(window)                                                     \
/* → */ sfRenderWindow_getSize((window))

/* ------------------------------------------------------------ */

// C = Clock
#define C_create                                                               \
/* → */ sfClock_create()

#define C_destroy(clock)                                                       \
/* → */ sfClock_destroy((clock))

#define C_restart(clock)                                                       \
/* → */ sfClock_restart((clock))

#define C_elapsed(clock)                                                       \
/* → */ sfClock_getElapsedTime((clock))

/* ------------------------------------------------------------ */

// TI = TIme
#define TI_asSeconds(time)                                                     \
/* → */ sfTime_asSeconds((time))

#define TI_asSiliseconds(time)                                                 \
/* → */ sfTime_asMilliseconds((time))

#define TI_ms(amount)                                                          \
/* → */ sfMilliseconds((amount))

/* ------------------------------------------------------------ */

// TE = Texture
#define TE_create_whole(filepath)                                              \
/* → */ sfTexture_createFromFile((filepath), NULL)

#define TE_create_area(filepath, area)                                         \
/* → */ sfTexture_createFromFile((filepath), (area))

#define TE_setSmooth(texture, active)                                          \
/* → */ sfTexture_setSmooth((texture), (active))

#define TE_setRepreated(texture, active)                                       \
/* → */ sfTexture_setRepeated((texture), (active))

#define TE_getSize(texture)                                                    \
/* → */ sfTexture_getSize((texture)) // sfVector2u

#define TE_destroy(texture)                                                    \
/* → */ sfTexture_destroy((texture))

/* ------------------------------------------------------------ */

// S = Sprite
#define S_create                                                               \
/* → */ sfSprite_create()

#define S_destroy(sprite)                                                      \
/* → */ sfSprite_destroy((sprite))

#define S_setTexture(sprite, texture)                                          \
/* → */ sfSprite_setTexture((sprite), (texture), sfTrue)

#define S_setIntrect(sprite, rectangle)                                        \
/* → */ sfSprite_setTextureRect((sprite), (rectangle))

#define S_setOrigin(sprite, origin)                                            \
/* → */ sfSprite_setOrigin((sprite), (origin))

#define S_move(sprite, offset)                                                 \
/* → */ sfSprite_move((sprite), (offset))

#define S_getPos(sprite)                                                       \
/* → */ sfSprite_getPosition((sprite))

#define S_setPos(sprite, position)                                             \
/* → */ sfSprite_setPosition((sprite), (position))

#define S_getScale(sprite)                                                     \
/* → */ sfSprite_getScale((sprite))

#define S_scale(sprite, vector)                                                \
/* → */ sfSprite_scale((sprite), (vector))

/* ------------------------------------------------------------ */

// MO = MOuse
#define MO_getPosRW(render_window_relative_to)                                 \
/* → */ sfMouse_getPositionRenderWindow((render_window_relative_to))

/* ------------------------------------------------------------ */

// MU = MUsic
#define MU_create(filepath)                                                    \
/* → */ sfMusic_createFromFile((filepath))

#define MU_destroy(music)                                                      \
/* → */ sfMusic_destroy((music))

#define MU_setLoop(music, loop)                                                \
/* → */ sfMusic_setLoop((music), (loop))

#define MU_play(music)                                                         \
/* → */ sfMusic_play((music))

#define MU_stop(music)                                                         \
/* → */ sfMusic_stop((music))

#endif //SFML_REDEF_H
