/*
** EPITECH PROJECT, 2019
** sokoban
** File description:
** test
*/

#include "../include/struct.h"

void height(cood_s *cnd)
{
    cnd->height = 0;

    for (int i = 0; cnd->buffer[i] != '\0'; i++) {
        if (cnd->buffer[i] == '\n')
            cnd->height = cnd->height + 1;
    }
}
