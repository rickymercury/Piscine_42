#!/bin/bash

# cc -Wall -Wextra -Werror -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
find . -name "*.c" -type f -exec cc -Wall -Wextra -Werror -c {} \;

# ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o 
ar rc libft.a *.o  

# rm -f *.o
find . -name "*.o" -type f -delete

#Remove libft.a existente
#rm libft.a




# Primeiro temos de tornar o script executável
# sh-5.2$ chmod +x libft_creator.sh 
# sh-5.2$ ./libft_creator.sh