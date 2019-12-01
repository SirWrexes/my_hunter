/*
** EPITECH PROJECT, 2019
** <project_name>
** File description:
** soundtools.h -- No description
*/

#ifndef SOUNDTOOLS_H
#define SOUNDTOOLS_H

#include "datastruct.h"

// Sound list pointer
extern const sfx_t *SOUNDLISTPTR;

// Play a sound
// Returns the unique id of the sound
unsigned sfx_play(unsigned type);

// Stop the first found playing sound of given type
void sfx_stop_type(unsigned type);

#endif /* !SOUNDTOOLS_H */
