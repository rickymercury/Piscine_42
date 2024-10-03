/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2_array.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:39:20 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/21 13:44:23 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	nbrs [6];
	int		left_n;
	int		right_n;

	left_n = 0;
	while (left_n <= 98)
	{
		right_n = left_n + 1;
		while (right_n <= 99)
		{
			nbrs[0] = '0' + left_n / 10;
			nbrs[1] = '0' + left_n % 10;
			nbrs[2] = ' ';
			nbrs[3] = '0' + right_n / 10;
			nbrs[4] = '0' + right_n % 10;
			write (1, nbrs, 5);
			if (left_n != 98 || right_n != 99)
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