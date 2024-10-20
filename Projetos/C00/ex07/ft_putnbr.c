/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:44:04 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/16 11:11:59 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb) 
{
    char    c;

    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }
    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    if (nb >= 10) 
        ft_putnbr(nb / 10);
    c = (nb % 10) + '0';
    write(1, &c, 1);
} 

/*
#include<stdio.h>

int main(void)
{  
    ft_putnbr(42);
    write(1, "\n", 1);
    ft_putnbr(-42);
    write(1, "\n", 1);
    ft_putnbr(-2147483648);
    write(1, "\n", 1);
    ft_putnbr(2147483647);
    return 0;
}
*/

/*
ARGC ARGV OPTION:

int main(int argc, char **argv)
{
    if (argc == 2) 
    {
        int numero = atoi(argv[1]);
        ft_putnbr(numero);
        write(1, "\n", 1);
    }
    return 0;
}
*/


/*
OUTPUT:

sh-5.2$ cc -Wall -Wextra -Werror ft_putnbr.c -o ft_putnbr          
sh-5.2$ ./ft_putnbr 
42
-42
-2147483648
2147483647
*/