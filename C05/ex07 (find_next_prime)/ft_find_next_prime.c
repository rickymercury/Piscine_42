/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:07:02 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/24 16:20:12 by rickymercur      ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
    if (nb <= 1)
        return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("next prime 9: %d\n", ft_find_next_prime(9));
	printf("next prime 17: %d\n", ft_find_next_prime(17));
	printf("next prime 18: %d\n", ft_find_next_prime(18));
	printf("next prime -52: %d\n", ft_find_next_prime(-5));
}
*/