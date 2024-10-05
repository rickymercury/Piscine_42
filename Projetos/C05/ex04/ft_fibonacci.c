/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 23:52:02 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/24 21:18:02 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index)
{	
	int result;
	
	result = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	result += (ft_fibonacci(index - 2));
	result += (ft_fibonacci(index - 1));
	return (result);   // return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

/*
#include <stdio.h>

int	main(void)
{
	printf("fibonacci 5: %d\n", ft_fibonacci(5));
	printf("fibonacci 6: %d\n", ft_fibonacci(6));
	printf("fibonacci 7: %d\n", ft_fibonacci(7));
	printf("fibonacci 8: %d\n", ft_fibonacci(8));
	printf("fibonacci 9: %d\n", ft_fibonacci(9));
	printf("fibonacci 10: %d\n", ft_fibonacci(10));
	printf("fibonacci -5: %d\n", ft_fibonacci(-5));

    return (0);
}
*/