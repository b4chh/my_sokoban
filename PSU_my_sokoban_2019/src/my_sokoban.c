/*
** EPITECH PROJECT, 2019
** sokoban
** File description:
** test
*/

#include "../include/struct.h"

void my_str(cood_s *cnd)
{
    int x = 0;
    int y = 0;
    cnd->nbr_o = 0;

    malloc_str(cnd);
    for (int i = 0; cnd->buffer[i] != '\0'; i++) {
        if (cnd->buffer[i] == 'O')
            cnd->nbr_o++;
        if (cnd->buffer[i] == '\n') {
            cnd->str[y][x] = '\n';
            cnd->str[y][x + 1] = '\0';
            y++;
            x = 0;
        }
        else {
            cnd->str[y][x++] = cnd->buffer[i];
        }
    }
    cnd->str[y + 1] = NULL;
}

void replace_o(cood_s *cnd)
{
    int x = 0;
    int y = 0;
    cnd->win = 0;

    for (; cnd->str[y] != NULL ;) {
        for (; cnd->str[y][x] != '\0';) {
            if (cnd->copy[y][x] == 'O' && cnd->str[y][x] == ' ')
                cnd->str[y][x] = 'O';
            if (cnd->copy[y][x] == 'O' && cnd->str[y][x] == 'X')
                cnd->win++;
            x++;
        }
        x = 0;
        y++;
    }
}

void my_copy(cood_s *cnd)
{
    int x = 0;
    int y = 0;

    cnd->copy = malloc(sizeof(char *) * cnd->height + 2);
    for (int y = 0; y != cnd->height; y++) {
        cnd->copy[y] = malloc(sizeof(char) * cnd->length + 1);
    }
    for (; cnd->str[y] != NULL;) {
        for (; cnd->str[y][x] != '\0';) {
            cnd->copy[y][x] = cnd->str[y][x];
            x++;
        }
        x = 0;
        y++;
    }
}

int read_buffer(char const *filepath, cood_s *cnd)
{
    struct stat stats;
    stat(filepath, &stats);
    int i = stats.st_size;
    int fd = open(filepath, O_RDONLY);
    cnd->buffer = malloc(sizeof(char) * (i + 1));
    int sread = read(fd, cnd->buffer, i);

    if (fd == -1 || sread == 0 || sread == -1)
        exit (84);
    for (int i = 0; cnd->buffer[i] != '\0'; i++) {
        if (cnd->buffer[i] != '#' && cnd->buffer[i] != 'O'
            && cnd->buffer[i] != ' ' && cnd->buffer[i] != 'X'
            && cnd->buffer[i] != 'P' && cnd->buffer[i] != '\n')
            exit (84);
    }
    close(fd);
    return (0);
}

int main(int ac , char **av)
{
    cood_s cnd;

    if (ac == 2 && av[1][0] == '-' &&
        av[1][1] == 'h' &&
        av[1][2] == '\0') {
        help();
    } else if (ac == 2) {
        read_buffer(av[1], &cnd);
        length(&cnd);
        height(&cnd);
        my_str(&cnd);
        my_copy(&cnd);
        if (display_map(&cnd, av, ac) == 0) {
            clear();
            refresh();
            endwin();
            return (0);
        }
    } else
        return (84);
    return (0);
}
