/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:22:12 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/24 16:41:13 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define BOARD_SIZE 10

int     board[BOARD_SIZE];

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     is_safe_position(int col, int row)
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

void print_solution(void)
{
    int i;
    char c;

    i = 0;
    while (i < BOARD_SIZE)
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

int     place_queen(int col)
{
    int row;
    int total_solutions;

    row = 0;
    total_solutions = 0;
    if (col == BOARD_SIZE)
    {
        print_solution();
        return (1);
    }
    while (row < BOARD_SIZE)
    {
        if (is_safe_position(col, row))
        {
            board[col] = row;
            total_solutions += place_queen(col + 1);
        }
        row++;
    }
    return (total_solutions);
}

int     ft_ten_queens_puzzle(void)
{
    return (place_queen(0));
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Total de solucoes: %d\n", ft_ten_queens_puzzle());
	return (0);
}
*/