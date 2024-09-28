/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 23:07:10 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/28 22:29:13 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	check_columns_view_top(int **grid, int pos[2], int n, int *clue)
{
	int	i;
	int	count_view;
	int	highest_value;

	i = 0;
	while (i < pos[0])
    {
		if (grid[i][pos[1]] == grid[pos[0]][pos[1]])
			return (0);
        i++;
    }
	i = 0;
	highest_value = 0;
	count_view = 0;
	while (i <= pos[0])
	{
		if (grid[i][pos[1]] > highest_value)
		{
			highest_value = grid[i][pos[1]];
			count_view++;
		}
        i++;
	}
	if ((pos[0] == n - 1 && clue[pos[1]] == count_view)
		|| (pos[0] != n - 1 && clue[pos[1]] >= count_view))
		return (1);
	return (0);
}

int	check_columns_view_down(int **grid, int pos[2], int n, int *clue)
{
	int	i;
	int	count_view;
	int	highest_value;

	if (pos[0] != n - 1)
		return (1);
	i = pos[0];
	highest_value = 0;
	count_view = 0;
	while (i >= 0)
	{
		if (grid[i][pos[1]] > highest_value)
		{
			highest_value = grid[i][pos[1]];
			count_view++;
		}
        i--;
	}
	if (clue[pos[1] + n] == count_view)
		return (1);
	return (0);
}

int	check_rows_left_to_right(int **grid, int pos[2], int n, int *clue)
{
	int	i;
	int	count_view;
	int	highest_value;

	i = 0;
	while (i < pos[1])
    {
		if (grid[pos[0]][i] == grid[pos[0]][pos[1]])
			return (0);
        i++;
    }
	i = 0;
	highest_value = 0;
	count_view = 0;
	while (i <= pos[1])
	{
		if (grid[pos[0]][i] > highest_value)
		{
			highest_value = grid[pos[0]][i];
			count_view++;
		}
        i++;
	}
	if ((pos[1] == n - 1 && clue[pos[0] + (n * 2)] == count_view)
		|| (pos[1] != n - 1 && clue[pos[0] + (n * 2)] >= count_view))
		return (1);
	return (0);
}

int	check_rows_right_to_left(int **grid, int pos[2], int n, int *clue)
{
	int	i;
	int	count_view;
	int	highest_value;

	if (pos[1] != n - 1)
		return (1);
	i = n - 1;
	highest_value = -1;
	count_view = 0;
	while (i >= 0)
	{
		if (grid[pos[0]][i] > highest_value)
		{
			highest_value = grid[pos[0]][i];
			count_view++;
		}
        i--;
	}
	if (clue[pos[0] + (n * 3)] == count_view)
		return (1);
	return (0);
}

int	ft_is_valid(int **grid, int pos[2], int n, int *clue)
{
	if (!check_columns_view_top(grid, pos, n, clue)
		|| !check_columns_view_down(grid, pos, n, clue)
		|| !check_rows_left_to_right(grid, pos, n, clue)
		|| !check_rows_right_to_left(grid, pos, n, clue)
	)
		return (0);
	return (1);
}