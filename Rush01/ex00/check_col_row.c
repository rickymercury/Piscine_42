/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_col_row.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 23:07:10 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/02 14:03:17 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int check_columns_view_top(int **grid, int row, int col, int n, int *clue) 
{
    int i;
    int count_view;
    int highest_value;

    i = 0;
    while (i < row) 
    {
        if (grid[i][col] == grid[row][col])
            return (0);
        i++;
    }
    i = 0;
    highest_value = 0;
    count_view = 0;
    while (i <= row) 
    {
        if (grid[i][col] > highest_value) 
        {
            highest_value = grid[i][col];
            count_view++;
        }
        i++;
    }
    if ((row == n - 1 && clue[col] == count_view) ||
        (row != n - 1 && clue[col] >= count_view))
        return (1);
    return (0);
}

int check_columns_view_down(int **grid, int row, int col, int n, int *clue) 
{
    int i;
    int count_view;
    int highest_value;

    if (row != n - 1)
        return (1);
    i = row;
    highest_value = 0;
    count_view = 0;
    while (i >= 0) {
        if (grid[i][col] > highest_value) {
            highest_value = grid[i][col];
            count_view++;
        }
        i--;
    }
    if (clue[col + n] == count_view)
        return (1);
    return (0);
}

int check_rows_left_to_right(int **grid, int row, int col, int n, int *clue) 
{
    int i;
    int count_view;
    int highest_value;

    i = 0;
    while (i < col) 
    {
        if (grid[row][i] == grid[row][col])
            return (0);
        i++;
    }
    i = 0;
    highest_value = 0;
    count_view = 0;
    while (i <= col) 
    {
        if (grid[row][i] > highest_value) 
        {
            highest_value = grid[row][i];
            count_view++;
        }
        i++;
    }
    if ((col == n - 1 && clue[row + (n * 2)] == count_view) ||
        (col != n - 1 && clue[row + (n * 2)] >= count_view))
        return (1);
    return (0);
}

int check_rows_right_to_left(int **grid, int row, int col, int n, int *clue) 
{
    int i;
    int count_view;
    int highest_value;

    if (col != n - 1)
        return (1);
    i = n - 1;
    highest_value = -1;
    count_view = 0;
    while (i >= 0) 
    {
        if (grid[row][i] > highest_value) 
        {
            highest_value = grid[row][i];
            count_view++;
        }
        i--;
    }
    if (clue[row + (n * 3)] == count_view)
        return (1);
    return (0);
}

int ft_is_valid(int **grid, int row, int col, int n, int *clue) 
{
    if (!check_columns_view_top(grid, row, col, n, clue) ||
        !check_columns_view_down(grid, row, col, n, clue) ||
        !check_rows_left_to_right(grid, row, col, n, clue) ||
        !check_rows_right_to_left(grid, row, col, n, clue))
        return (0);
    return (1);
}