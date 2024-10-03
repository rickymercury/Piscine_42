/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 10:55:50 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/21 10:57:42 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int main(void)
{
    ft_putchar('a');
    return (0);
}
/*
int main(void)
{
    ft_putchar('H');
    ft_putchar('e');
    ft_putchar('l');
    ft_putchar('l');
    ft_putchar('o');
    ft_putchar(' ');
    ft_putchar('W');
    ft_putchar('o');
    ft_putchar('r');
    ft_putchar('l');
    ft_putchar('d');
    ft_putchar('!');

    return (0);
}
*/