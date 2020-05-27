/*
** EPITECH PROJECT, 2019
** sokoban
** File description:
** test
*/

#include "../include/struct.h"

void all(cood_s *cnd, int ac, char **av)
{
    length(cnd);
    height(cnd);
    my_str(cnd);
    display_map(cnd, av, ac);
}
