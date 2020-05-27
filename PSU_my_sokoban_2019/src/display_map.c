/*
** EPITECH PROJECT, 2019
** sokoban
** File description:
** test
*/

#include "../include/struct.h"

int display_map(cood_s *cnd, char **av, int ac)
{
    initscr();
    noecho();
    keypad(stdscr, TRUE);
    curs_set(0);
    cnd->gamerun = 1;

    loop_map(cnd, av, ac);
    if (cnd->win == cnd->nbr_o)
        return 0;
    else
        endwin();
}

void loop_map(cood_s *cnd, char **av, int ac)
{
    while (cnd->gamerun) {
        clear();
        for (int i = 0; i < cnd->height; i++)
            mvprintw(i, 0, cnd->str[i]);
        refresh();
        get_move(cnd, av, ac);
        replace_o(cnd);
        if (cnd->win == cnd->nbr_o)
            break;
        if (cnd->gamerun == 0)
            break;
    }
}
