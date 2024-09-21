/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:16:16 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/21 13:23:18 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = '0';
	while (first <= '7')
	{
		second = first + 1;
		while (second <= '8')
		{
			third = second + 1;
			while (third <= '9')
			{
				write (1, &first, 1);
				write (1, &second, 1);
				write (1, &third, 1);
				if (first != '7' || second != '8' || third != '9')
					write (1, ", ", 2);
				third++;
			}
			second++;
		}
		first++;
	}
}

/*
#include <stdio.h>

int main(void)
{
	ft_print_comb();
	return (0);
}
*/