/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:29:01 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/02 22:35:26 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_boolean.h"

void    ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}
t_bool   ft_is_even(int nbr)
{
    return ((EVEN(nbr)) ? TRUE : FALSE);
}
int      main(int argc, char **argv)
{
    (void)argv;
    if (ft_is_even(argc - 1) == TRUE)
        ft_putstr(EVEN_MSG);
    else
        ft_putstr(ODD_MSG);
    return (SUCCESS);
}

/*
sh-5.2$ cc -Wall -Wextra -Werror ft_boolean.h test.c
sh-5.2$ ./a.out 3
I have an odd number of arguments.
sh-5.2$ ./a.out 4
I have an odd number of arguments.
sh-5.2$ ./a.out 3 4
I have an even number of arguments.
*/