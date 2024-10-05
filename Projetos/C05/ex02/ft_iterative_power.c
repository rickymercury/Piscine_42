/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 23:38:11 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/23 23:42:26 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (nb == 1 || power < 1 || power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("0 ^ 0: %d\n", ft_iterative_power(0, 0));
	printf("0 ^ 2: %d\n", ft_iterative_power(0, 2));
	printf("0 ^ -2: %d\n", ft_iterative_power(0, -2));
	printf("3 ^ -2: %d\n", ft_iterative_power(3, -2));	
	printf("3 ^ 0: %d\n", ft_iterative_power(3, 0));
	printf("3 ^ 2: %d\n", ft_iterative_power(3, 2));
	printf("-3 ^ -2: %d\n", ft_iterative_power(-3, -2));
	printf("-3 ^ 2: %d\n", ft_iterative_power(-3, 2));
	printf("-3 ^ 3: %d\n", ft_iterative_power(-3, 3));
	printf("-3 ^ 1: %d\n", ft_iterative_power(-3, 0));
	printf("max ^ 1: %d\n", ft_iterative_power(2147483647, 1));
	printf("min ^ 1: %d\n", ft_iterative_power(-2147483648, 1));
	printf("3 ^ 10: %d\n", ft_iterative_power(3, 10));
}
*/