/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 21:48:34 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/02 08:12:58 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_char_to_int(char c)
{
	int	i;

	i = c - 48;
	return (i);
}

int	ft_count_valid_digits(char *str)
{
	int	num_digits;
	int	i;

	i = 0;
	num_digits = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			num_digits++;
		i++;
	}
	if (num_digits % 4 != 0)
		return (0);
	return (num_digits);
}

void ft_define_next_position(int row, int col, int *next_row, int *next_col, int n) 
{
    if (col == n - 1) 
    {
        *next_row = row + 1;
        *next_col = 0;
    } 
    else 
    {
        *next_row = row;
        *next_col = col + 1;
    }
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