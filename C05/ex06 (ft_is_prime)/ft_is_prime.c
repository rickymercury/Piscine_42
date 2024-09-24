/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:47:19 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/24 21:21:40 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	divisor;

	divisor = 2;
	if (nb < 2)
	    return (0);
	while (divisor <= nb / divisor)
	{
		if (nb % divisor == 0)
		    return (0);
		divisor++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("2 prime? %d\n", ft_is_prime(2));
	printf("3 prime? %d\n", ft_is_prime(3));
	printf("4 prime? %d\n", ft_is_prime(4));
	printf("17 prime? %d\n", ft_is_prime(17));
	printf("51 prime? %d\n", ft_is_prime(51));
	printf("59 prime? %d\n", ft_is_prime(59));
	printf("2147483647 prime? %d\n", ft_is_prime(2147483647));
}
*/