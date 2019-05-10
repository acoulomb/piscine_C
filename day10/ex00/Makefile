#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/27 16:49:30 by acoulomb          #+#    #+#              #
#    Updated: 2018/02/28 17:11:19 by acoulomb         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

INCLUDES = ./includes/

OBJS = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $^ && ranlib $(NAME)

%.o : ./srcs/%.c
	gcc $(FLAGS) -c $^ -I $(INCLUDES)

clean:
	@/bin/rm -f $(OBJS)

fclean: clean
	@/bin/rm -f $(NAME)