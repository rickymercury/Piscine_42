# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/03 22:38:38 by rickymercur       #+#    #+#              #
#    Updated: 2024/10/03 23:13:24 by rickymercur      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
SRCS_DIR = ./srcs/
SRCS = $(addprefix $(SRCS_DIR), $(SOURCES))
OBJECTS = $(SRCS:.c=.o)
INCLUDES = ./includes/
NAME = libft.a
COMPRESS = ar rcs
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I $(INCLUDES)
CC = cc

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJECTS)
	     $(COMPRESS) $(NAME) $(OBJECTS)

all : $(NAME)

clean :
	    $(RM) $(OBJECTS)

fclean : clean
	     $(RM) $(NAME)

re : fclean all