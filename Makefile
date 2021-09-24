##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## M
##

SRC		=	./src/my_hunter.c						\
			./src/description_game/description.c	\
			./src/usefull_fonction/fonction.c		\
			./src/usefull_fonction/malloc.c			\
			./src/window/my_window.c				\
			./src/window/redirection.c				\
			./src/game/roucoul.c					\
			./src/game/pos_roucoul.c				\
			./src/game/background.c					\
			./src/game/menu.c						\
			./src/game/game_over.c					\
			./src/game/heart.c						\
			./src/game/man.c						\
			./src/game/explication.c				\
			./src/create/rect.c						\
			./src/create/sprites.c					\
			./src/create/variable.c					\
			./src/create/music.c					\
			./src/create/clock.c					\

OBJ		=	$(SRC:.c=.o)

NAME	=	my_hunter
 
CFLAGS	=	-W -Wall -Wextra -g

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc $(OBJ) -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:    clean
	rm -f $(NAME)

re:	fclean all