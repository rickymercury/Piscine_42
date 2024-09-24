/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle_10.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:35:44 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/24 16:43:27 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void print_solution(int board[10])
{
    int i;
    char c;

    i = 0;
    while (i < 10)
    {
        c = board[i] + '0';
        if (board[i] >= 10)
        {
            ft_putchar((board[i] / 10) + '0');
            ft_putchar((board[i] % 10) + '0');
        }
        else
            ft_putchar(c);
        i++;
    }
    ft_putchar('\n');
}

int    is_safe_position(int board[10], int col, int row)
{
    int i;

    i = 0;
    while (i < col)
    {
        if (board[i] == row || board[i] == row - (col - i) 
            || board[i] == row + (col - i))
            return (0);
        i++;
    }
    return (1);
}

void    place_queen(int board[10], int *total_solutions, int col)
{
    int row = 0;

    if (col == 10)
    {
        print_solution(board);
        (*total_solutions)++;
        return ;
    }
    while (row < 10)
    {
        if (is_safe_position(board, col, row))
        {
            board[col] = row;
            place_queen(board, total_solutions, col + 1);
        }
        row++;
    }
}

int    ft_ten_queens_puzzle(void)
{
    int board[10];
    int total_solutions = 0;

    place_queen(board, &total_solutions, 0);
    return (total_solutions);
}

/*
int main(void)
{
    int total_solutions;

    total_solutions = ft_ten_queens_puzzle();
    printf("Total solutions: %d\n", total_solutions);
    return (0);
}
*/
