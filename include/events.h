/*
** EPITECH PROJECT, 2019
** <project_name>
** File description:
** events.h -- No description
*/

#ifndef EVENTS_H
#define EVENTS_H

#include <stddef.h>
#include <SFML/Window/Event.h>

extern void (* const EVENTHANDLER[sfEvtCount])(void);

void event_closed(void);
void event_mouse_button(void);

#endif /* !EVENTS_H */
