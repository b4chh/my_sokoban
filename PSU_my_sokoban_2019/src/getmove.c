/*
** EPITECH PROJECT, 2019
** structure
** File description:
** struct sokoba
*/

#include "../include/struct.h"

int get_move(cood_s *cnd, char **av, int ac)
{
    cnd->input = getch();
    switch (cnd->input)
    {
    case (KEY_UP):
        detect_border_up(cnd);
        break;
    case (KEY_DOWN):
        detect_border_down(cnd);
        break;
    case (KEY_LEFT):
        detect_border_left(cnd);
        break;
    case (KEY_RIGHT):
        detect_border_right(cnd);
        break;
    case (' '):
        all(cnd, ac, av);
        break;
    }
    return (cnd->input);
}

void detect_border_up(cood_s *cnd)
{
    find_P(cnd);

    if (cnd->str[cnd->yP - 1][cnd->xP] != '#'
        && cnd->str[cnd->yP - 1][cnd->xP] != 'X') {
        cnd->str[cnd->yP][cnd->xP] = ' ';
        cnd->str[cnd->yP - 1][cnd->xP] = 'P';
    } else if (cnd->str[cnd->yP - 1][cnd->xP] == 'X'
        && cnd->str[cnd->yP - 2][cnd->xP] != '#'
        && cnd->str[cnd->yP - 2][cnd->xP] != 'X') {
        cnd->str[cnd->yP][cnd->xP] = ' ';
        cnd->str[cnd->yP - 1][cnd->xP] = 'P';
        cnd->str[cnd->yP - 2][cnd->xP] = 'X';
    }
}

void detect_border_down(cood_s *cnd)
{
    find_P(cnd);
    if (cnd->str[cnd->yP + 1][cnd->xP] != '#'
        && cnd->str[cnd->yP + 1][cnd->xP] != 'X') {
        cnd->str[cnd->yP][cnd->xP] = ' ';
        cnd->str[cnd->yP + 1][cnd->xP] = 'P';
    } else if (cnd->str[cnd->yP + 1][cnd->xP] == 'X'
        && cnd->str[cnd->yP + 2][cnd->xP] != '#'
        && cnd->str[cnd->yP + 2][cnd->xP] != 'X') {
        cnd->str[cnd->yP][cnd->xP] = ' ';
        cnd->str[cnd->yP + 1][cnd->xP] = 'P';
        cnd->str[cnd->yP + 2][cnd->xP] = 'X';
    }
}

void detect_border_left(cood_s *cnd)
{
    find_P(cnd);
    if (cnd->str[cnd->yP][cnd->xP - 1] != '#'
        && cnd->str[cnd->yP][cnd->xP - 1] != 'X') {
        cnd->str[cnd->yP][cnd->xP] = ' ';
        cnd->str[cnd->yP][cnd->xP - 1] = 'P';
    } else if (cnd->str[cnd->yP][cnd->xP  - 1] == 'X'
        && cnd->str[cnd->yP][cnd->xP - 2] != '#'
        && cnd->str[cnd->yP][cnd->xP - 2] != 'X') {
        cnd->str[cnd->yP][cnd->xP] = ' ';
        cnd->str[cnd->yP][cnd->xP - 1] = 'P';
        cnd->str[cnd->yP][cnd->xP - 2] = 'X';
    }
}

void detect_border_right(cood_s *cnd)
{
    find_P(cnd);
    if (cnd->str[cnd->yP][cnd->xP + 1] != '#'
        && cnd->str[cnd->yP][cnd->xP + 1] != 'X') {
        cnd->str[cnd->yP][cnd->xP] = ' ';
        cnd->str[cnd->yP][cnd->xP + 1] = 'P';
    } else if (cnd->str[cnd->yP][cnd->xP + 1] == 'X'
        && cnd->str[cnd->yP][cnd->xP + 2] != '#'
        && cnd->str[cnd->yP][cnd->xP + 2] != 'X') {
        cnd->str[cnd->yP][cnd->xP] = ' ';
        cnd->str[cnd->yP][cnd->xP + 1] = 'P';
        cnd->str[cnd->yP][cnd->xP + 2] = 'X';
    }
}
