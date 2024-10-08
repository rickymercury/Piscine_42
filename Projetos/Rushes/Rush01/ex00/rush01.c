/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 23:08:34 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/02 15:46:35 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int ft_start(int **grid, int n, int *clue) 
{
    int init_row = 0;
    int init_col = 0;

    if (ft_find_solution(grid, init_row, init_col, n, clue))
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

	grid = malloc(sizeof(int *) * n);
	if (!grid)
		return (0);
	y = 0;
	while (y < n)
	{
		grid[y] = malloc(sizeof(int) * n);
		if (!grid[y])
        {
            while (y > 0)
            {
                y--;
                free(grid[y]);
            }
            free(grid);
			return (0);
        }
        x = 0;
		while (x < n)
		{
			grid[y][x] = 0;
			x++;
		}
		y++;
	}
	if (ft_start(grid, n, clue))
		return (1);
	return (0);
}