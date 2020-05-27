/*
** EPITECH PROJECT, 2019
** description
** File description:
** the game
*/

#include "../include/struct.h"

void length(cood_s *cnd)
{
    cnd->length = 0;

    for (int i = 0; cnd->buffer[i] != '\n'; i++) {
        cnd->length++;
    }
}
