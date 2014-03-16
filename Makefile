##
## Makefile for  in /home/bauwen_j/rendu/my_git/rtv1
## 
## Made by bauwen_j
## Login   <bauwen_j@epitech.eu>
## 
## Started on  Mon Mar 10 12:34:36 2014 bauwen_j
## Last update Mon Mar 10 12:34:36 2014 bauwen_j
##

NAME   = rtv1

SRC	= main.c \
	  form.c \
	  calc.c

OBJ     = $(SRC:.c=.o)

CFLAGS  = -W -Wall -Wextra -pedantic

CMP	= -L /usr/lib64 -lmlx_$(HOSTTYPE) -L /usr/lib64/x11 -lXext -lX11 -lm

all: $(NAME)

$(NAME): $(OBJ)
	cc -o $(NAME) $(OBJ) $(CMP)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:     fclean all

.phony: all clean fclean re
