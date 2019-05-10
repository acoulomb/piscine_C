# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gribeill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/24 14:53:32 by gribeill          #+#    #+#              #
#    Updated: 2018/02/25 20:58:49 by gribeill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

SRC = main.c colle2.c dyn_tab.c ./rush0/rush0.c ./rush0/rush00/rush00.c \
	  ./rush0/rush01/rush01.c ./rush0/rush02/rush02.c ./rush0/rush03/rush03.c \
	  ./rush0/rush04/rush04.c 

OBJS = main.o colle2.o dyn_tab.o rush0.o rush00.o rush01.o rush02.o \
	   rush03.o rush04.o

LIB = libft.a

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@gcc $(FLAGS) -o $(NAME) $(OBJS) $(LIB)

$(OBJS): $(SRC)
	@gcc $(FLAGS) -c $(SRC)

clean:
	@/bin/rm -f $(OBJS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
