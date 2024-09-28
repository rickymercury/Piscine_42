/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_solution.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 23:05:25 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/28 22:30:19 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_print_solution(int **grid, int n)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < n)
	{
		while (x < n)
		{
			ft_putchar(grid[y][x] + '0');
			if (x < n - 1)
				ft_putchar(' ');
			x++;
		}
		x = 0;
		ft_putchar('\n');
		y++;
	}
}