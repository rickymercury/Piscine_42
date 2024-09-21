/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn_recursive.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:07:14 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/21 19:13:42 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_recursive(int last_digit, int n, int length, char *array)
{
	int	i;

	if (n == length)
	{
		write(1, array, length);
		if (array[0] < '0' + (10 - length))
		{
			write(1, ", ", 2);
		}
		return;
	}
	i = last_digit + 1;
	while (i <= 9)
	{
		array[n] = '0' + i;
		ft_recursive(i, n + 1, length, array);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int		i;
	char	array[10];

	if (n <= 0 || n >= 10)
	{
		return;
	}
	i = 0;
	while (i <= 10 - n)
	{
		array[0] = '0' + i;
		ft_recursive(i, 1, n, array);
		i++;
	}
	write(1, "\n", 1);
}

/*
int	main(void)
{
	ft_print_combn(3);
	return (0);
}
*/