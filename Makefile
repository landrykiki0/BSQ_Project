##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC	=	bsq.c	\
		main.c	\
		my_compute_power_it.c	\
		my_getnbr.c	\
		my_putstr.c	\
		my_strlen.c	\
		starter.c	\
		error.c	\
		my_str_isnum.c

OBJ	=	$(SRC:.c=.o)

NAME    =       bsq

all:    $(NAME)

$(NAME):        $(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
	rm -rf *~

re: fclean all
