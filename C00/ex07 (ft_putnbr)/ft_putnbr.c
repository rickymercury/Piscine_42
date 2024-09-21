/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:44:04 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/21 19:17:48 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) 
{
    write(1, &c, 1);
}

void ft_putnbr(int nb) 
{
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
		 ft_putchar('-');
        return;
    }
    if (nb < 0)
	{
        ft_putchar('-');
        nb = -nb;
    }
	if (nb >= 10) 
	{
        ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
    }
    else
	    ft_putchar(nb % 10 + '0');
} 

/*
#include<stdio.h>

int main(void)
{  
    int numero = 42;

    ft_putnbr(numero);
    printf("\n");

    return 0;
}
*/