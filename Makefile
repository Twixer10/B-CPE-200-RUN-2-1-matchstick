##
## EPITECH PROJECT, 2020
## makefile exe
## File description:
## fct
##

SRC	=		src/main.c	\
			src/game/game_manager.c	\
			src/game/display.c	\
			src/game/inputs_manager.c	\
			src/utils.c	\
			src/game/ia_manager.c

CFLAGS	=	-W -Wextra -Wall -Werror -g3

LFLAGS	=	-L lib/ -lmy

IFLAGS	=	-I include/

NAME	=	matchstick

all:
	make -C lib/my all
	gcc -o $(NAME) $(SRC) $(IFLAGS) $(LFLAGS) $(CFLAGS)

clean:
	make -C lib/my clean
	rm -f *~
	rm -f *.o

fclean:
	make -C lib/my fclean
	rm -f $(NAME)

re:	fclean all
	make -C lib/my re
