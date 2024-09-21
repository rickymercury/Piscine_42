/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:27:47 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/21 13:39:41 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	left_n;
	int	right_n;

	left_n = 0;
	while (left_n <= 98)
	{
		right_n = left_n + 1;
		while (right_n <= 99)
		{
			ft_putchar (left_n / 10 + '0');
			ft_putchar (left_n % 10 + '0');
			ft_putchar (' ');
			ft_putchar (right_n / 10 + '0');
			ft_putchar (right_n % 10 + '0');
			if (left_n!= 98 || right_n != 99)
                write (1, ", ", 2);
			right_n++;
		}
		left_n++;
	}
}

/*
#include<stdio.h>

int main(void)
{
    ft_print_comb2();
    return (0);
}
*/