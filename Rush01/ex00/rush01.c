/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 23:08:34 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/28 22:36:58 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	*ft_define_next_position(int *pos, int *next_pos, int n)
{	
	if (pos[1] == n - 1)
	{
		next_pos[0] = pos[0] + 1;
		next_pos[1] = 0;
	}
	else
	{
		next_pos[0] = pos[0];
		next_pos[1] = pos[1] + 1;
	}
	return (next_pos);
}

int	ft_find_solution(int **grid, int pos[2], int n, int *clue)
{
	int	i;
	int	next_pos[2];

	i = 0;
	if (pos[0] == n)
		return (1);
	while (++i <= n)
	{
		grid[pos[0]][pos[1]] = i;
		if (ft_is_valid(grid, pos, n, clue))
		{
			ft_define_next_position(pos, next_pos, n);
			if (ft_find_solution(grid, next_pos, n, clue))
				return (1);
		}
		grid[pos[0]][pos[1]] = 0;
	}
	return (0);
}

void	ft_free(int **grid, int *clue, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
	free(clue);
}

int	ft_start(int **grid, int n, int *clue)
{
	int	init_pos[2];

	init_pos[0] = 0;
	init_pos[1] = 0;
	if (ft_find_solution(grid, init_pos, n, clue))
		ft_print_solution(grid, n);
	else
	{
		ft_error();
		return (1);
	}
	ft_free(grid, clue, n);
	return (0);
}

int	rush01(int n, int *clue)
{
	int	**grid;
	int	y;
	int	x;

	grid = malloc(sizeof(long *) * n);
	if (!grid)
		return (0);
	y = 0;
	x = 0;
	while (y < n)
	{
		grid[y] = malloc(sizeof(long) * n);
		if (!grid[y])
			return (0);
		while (x < n)
		{
			grid[y][x] = 0;
			x++;
		}
		x = -1;
		y++;
	}
	if (ft_start(grid, n, clue))
		return (1);
	return (0);
}