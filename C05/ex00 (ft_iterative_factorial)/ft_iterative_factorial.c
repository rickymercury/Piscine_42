/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 23:14:22 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/24 21:15:02 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{	
	int factorial;
	
	factorial = 1;
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	while (nb > 0)
	{
		factorial = factorial * nb;  // factorial *= nb;
        nb--;
	}
	return (factorial);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("factorial is 4: %d\n", ft_iterative_factorial(4));
	printf("factorial is 0: %d\n", ft_iterative_factorial(0));
	printf("factorial is -2: %d\n", ft_iterative_factorial(-2));
	printf("factorial is 1: %d\n", ft_iterative_factorial(1));
	printf("factorial is 12: %d\n", ft_iterative_factorial(12));
	printf("factorial is 13: %d\n", ft_iterative_factorial(13));
}
*/