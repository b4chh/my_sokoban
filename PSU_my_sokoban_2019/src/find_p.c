/*
** EPITECH PROJECT, 2019
** structure
** File description:
** struct sokoba
*/

#include "../include/struct.h"

int find_P(cood_s *cnd)
{
    int x = 0;
    int y = 0;
    cnd->xP = 0;
    cnd->yP = 0;

    while (cnd->str[cnd->yP][cnd->xP] != 'P') {
        if (cnd->str[cnd->yP][cnd->xP] == '\n') {
            cnd->xP = 0;
            cnd->yP++;
        } else
            cnd->xP++;
    }
    return (cnd);
}