##
## EPITECH PROJECT, 2019
## mf
## File description:
## mf
##

SRC 	=	src/my_sokoban.c	\
		src/my_putstr.c	\
		src/my_putchar.c	\
		src/nb_length.c	\
		src/size_height.c	\
		src/description_game.c	\
		src/getmove.c	\
		src/find_p.c	\
		src/display_map.c	\
		src/all.c	\
		src/malloc_str.c	\

OBJ 	= 	$(SRC:.c=.o)

NAME	=	my_sokoban

LDFLAGS =	-lncurses -g3

all: 	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(SRC) $(LDFLAGS)

clean:
	rm -f src/*~
	rm -f vg*
	rm -f src/*.o

fclean: clean
##	rm -f $(NAME)
	rm -f libmy.a

re:	fclean all

test :
	gcc -o unit_tests $(SRC) tests/tests.c --coverage -lcriterion
	./unit_tests
	gcovr --exclude tests/test.c
	gcovr --exclude tests/test.c --branches
	rm -f *no
	rm -f *na
