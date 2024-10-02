/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_solution.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:00:19 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/02 14:03:43 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int ft_find_solution(int **grid, int row, int col, int n, int *clue) 
{
    int i;
    int next_row;
    int next_col;

    if (row == n)
        return (1);
    
    i = 1;
    while (i <= n) 
    {
        grid[row][col] = i;

        if (ft_is_valid(grid, row, col, n, clue)) 
        {
            ft_define_next_position(row, col, &next_row, &next_col, n);
            if (ft_find_solution(grid, next_row, next_col, n, clue))
                return (1);
        }
        
        grid[row][col] = 0;
        i++;
    }
    return (0);
}