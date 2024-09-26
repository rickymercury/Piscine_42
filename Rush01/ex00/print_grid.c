/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 23:16:50 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/26 18:07:51 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define GRID_SIZE 4

void ft_putchar(char c) 
{
    write(1, &c, 1);
}

// Função para imprimir a matriz
void print_grid(int grid[GRID_SIZE][GRID_SIZE]) // print_grid (int grid[4][4])
{
    int row;
    int col;

    row = 0;
    while (row < GRID_SIZE) // while (row < 4)
    {
        col = 0;
        while (col < GRID_SIZE)  // while (col < 4)
        {
            ft_putchar(grid[row][col] + '0');
            if (col < GRID_SIZE - 1)  // if (col < 4 -1) ou seja if (col != 3)
                ft_putchar(' ');
            col++;
        }
        ft_putchar('\n');
        row++;
    }
}

// Função para inicializar a matriz
void init_grid(int grid[GRID_SIZE][GRID_SIZE]) 
{
    int row;
    int col;

    row = 0;
    while (row < GRID_SIZE) 
    {
        col = 0;
        while (col < GRID_SIZE) 
        {
            grid[row][col] = 0;
            col++; // Incrementa a coluna
        }
        row++; // Incrementa a linha após completar a linha atual
    }
}