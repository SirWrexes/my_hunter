/*
** EPITECH PROJECT, 2019
** <project name>
** File description:
** events_common.c -- No description
*/

#include "events.h"

void (*const EVENTHANDLER[sfEvtCount])(void) = {
    &event_closed,       // sfEvtClosed,
    NULL,                // sfEvtResized,
    NULL,                // sfEvtLostFocus,
    NULL,                // sfEvtGainedFocus,
    NULL,                // sfEvtTextEntered,
    NULL,                // sfEvtKeyPressed,
    NULL,                // sfEvtKeyReleased,
    NULL,                // sfEvtMouseWheelMoved,
    NULL,                // sfEvtMouseWheelScrolled,
    &event_mouse_button, // sfEvtMouseButtonPressed,
    NULL,                // sfEvtMouseButtonReleased,
    NULL,                // sfEvtMouseMoved,
    NULL,                // sfEvtMouseEntered,
    NULL,                // sfEvtMouseLeft,
    NULL,                // sfEvtJoystickButtonPressed,
    NULL,                // sfEvtJoystickButtonReleased,
    NULL,                // sfEvtJoystickMoved,
    NULL,                // sfEvtJoystickConnected,
    NULL,                // sfEvtJoystickDisconnected,
    NULL,                // sfEvtTouchBegan,
    NULL,                // sfEvtTouchMoved,
    NULL,                // sfEvtTouchEnded,
    NULL,                // sfEvtSensorChanged,
};
