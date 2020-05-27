/*
** EPITECH PROJECT, 2019
** structure
** File description:
** struct sokoba
*/

#ifndef BACHH_STRUCT_H
#define BACHH_STRUCT_H

#include <unistd.h>
#include <ncurses.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct cood_t
{
    int input;
    int xP;
    int yP;
    int xX;
    int yX;
    int xO;
    int yO;
    int height;
    int length;
    char **str;
    char *buffer;
    int gamerun;
    char **copy;
    int nbr_o;
    int win;

}cood_s;

void loop_map(cood_s *cnd, char **av, int ac);
void malloc_str(cood_s *cnd);
void replace_o(cood_s *cnd);
void all(cood_s *cnd, int ac, char **av);
int display_map(cood_s *cnd, char **av, int ac);
void my_str(cood_s *cnd);
int read_buffer(char const *filepath, cood_s *cnd);
int display_map(cood_s *cnd, char **av, int ac);
int find_P(cood_s *cnd);
void detect_x_left(cood_s *cnd);
void detect_x_up(cood_s *cnd);
void detect_x_right(cood_s *cnd);
void detect_x_down(cood_s *cnd);
int get_move(cood_s *cnd, char **av, int ac);
void my_putchar(char c);
int my_putstr(char const *str);
void length(cood_s *cnd);
void height(cood_s *cnd);
void help(void);
void detect_border_up(cood_s *cnd);
void detect_border_down(cood_s *cnd);
void detect_border_left(cood_s *cnd);
void detect_border_right(cood_s *cnd);
#endif
