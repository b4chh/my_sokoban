/*
** EPITECH PROJECT, 2019
** malloc str
** File description:
** fix norm
*/

#include "../include/struct.h"

void malloc_str(cood_s *cnd)
{
    cnd->str = malloc(sizeof(char *) * cnd->height + 2);
    for (int i = 0; i < cnd->height; i++) {
        cnd->str[i] = malloc(sizeof(char) * cnd->length + 1);
    }
}
