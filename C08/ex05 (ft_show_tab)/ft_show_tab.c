/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:45:15 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/03 00:04:58 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void ft_putstr(char *str)
{
    int i;

    i = 0;
	while (str[i] != '\0')
    {
		write(1, &str[i], 1);
        i++;
    }
}

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

void ft_show_tab(struct s_stock_str *par)
{
    int i = 0;

    while (par[i].str != NULL)
    {
        ft_putstr(par[i].str);
        write(1, "\n", 1);
        ft_putnbr(par[i].size);
        write(1, "\n", 1);
        ft_putstr(par[i].copy);
        write(1, "\n", 1);
        i++;
    }
}

