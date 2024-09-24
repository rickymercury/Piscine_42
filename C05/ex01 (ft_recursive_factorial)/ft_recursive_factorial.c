/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 23:25:26 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/23 23:36:41 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else        // if (nb > 1)
		factorial *= nb * ft_recursive_factorial(nb - 1);
	return (factorial);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("factorial is 4: %d\n", ft_recursive_factorial(4));
	printf("factorial is 0: %d\n", ft_recursive_factorial(0));
	printf("factorial is -2: %d\n", ft_recursive_factorial(-2));
	printf("factorial is 1: %d\n", ft_recursive_factorial(1));
	printf("factorial is 12: %d\n", ft_recursive_factorial(12));
	printf("factorial is 13: %d\n", ft_recursive_factorial(13));

    return (0);
}
*/