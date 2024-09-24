/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 00:02:59 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/24 21:19:13 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
        return (0);
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("sqrt 144: %d\n", ft_sqrt(144));
	printf("sqrt 0: %d\n", ft_sqrt(0));
	printf("sqrt -1: %d\n", ft_sqrt(-1));
	printf("sqrt 2: %d\n", ft_sqrt(2));
	printf("sqrt 1: %d\n", ft_sqrt(1));
	printf("sqrt 4: %d\n", ft_sqrt(4));
	printf("sqrt 64: %d\n", ft_sqrt(64));
}
*/