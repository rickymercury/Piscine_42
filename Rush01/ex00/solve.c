/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 23:10:06 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/26 18:19:58 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#define GRID_SIZE 4

int is_valid(int grid[GRID_SIZE][GRID_SIZE], int *input);

// Esta função verifica se um número pode ser colocado numa posição (sem repetir na linha/coluna)
int can_place(int grid[GRID_SIZE][GRID_SIZE], int row, int col, int num) 
{
    int i = 0;
    while (i < GRID_SIZE) 
    {
        if (grid[row][i] == num || grid[i][col] == num)
            return (0);
        i++;
    }
    return (1);
}

// Função recursiva para tentar preencher o grid
int solve(int grid[GRID_SIZE][GRID_SIZE], int *input, int row, int col) 
{
    int num;

    if (row == GRID_SIZE)  // Se chegamos ao final das linhas
        return (is_valid(grid, input));  // Verifica se o grid é válido
    if (col == GRID_SIZE)  // Se chegamos ao final das colunas
        return (solve(grid, input, row + 1, 0)); // Passa para a próxima linha
    num = 1;
    while (num <= GRID_SIZE)  // Tenta números de 1 a GRID_SIZE
    {
        if (can_place(grid, row, col, num))  // Se podemos colocar o número
        {
            grid[row][col] = num;  // Coloca o número
            if (solve(grid, input, row, col + 1)) // Chama a função solve recursivamente para tentar preencher o próximo espaço
                return (1);  // Se for possível, retorna 1
            grid[row][col] = 0;  // Se não foi possível, volta atrás (backtrack)
        }
        num++;  // Tenta o próximo número
    }
    return (0);  // Se não conseguiu colocar nenhum número, retorna 0
}
