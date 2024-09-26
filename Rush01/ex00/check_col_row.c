/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_col_row.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:41:14 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/26 18:19:36 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#define GRID_SIZE 4

// Esta função verifica a visibilidade nas colunas de cima para baixo
int check_columns_top(int grid[GRID_SIZE][GRID_SIZE], int *input) 
{
    int visible;  // Contador de edifícios visíveis
    int max;      // Armazena o valor máximo visto até o momento
    int col;     
    int row;      

    col = 0; 
    while (col < GRID_SIZE)  // Percorre cada coluna
    {
        visible = 0;   // Reinicia o contador de visíveis para a nova coluna
        max = 0;       // Reinicia o valor máximo para a nova coluna
        row = 0;       // Começa da primeira linha (de cima para baixo)

        while (row < GRID_SIZE)  // Percorre as linhas da coluna de cima para baixo
        {
            if (grid[row][col] > max)  // Se o valor da matriz for maior que o máximo atual
            {
                max = grid[row][col];  // Atualiza o máximo
                visible++;             // Incrementa o contador de visíveis
            }
            row++;  // Move para a próxima linha
        }
        if (visible != input[col])  // Verifica se o número de edifícios visíveis do topo corresponde à clue
            return (0);  // Retorna 0 se não corresponder
        col++;  // Move para a próxima coluna
    }
    return (1);  // Retorna 1 se todas as colunas corresponderem às pistas
}

// Esta função verifica a visibilidade nas colunas de baixo para cima
int check_columns_bottom(int grid[GRID_SIZE][GRID_SIZE], int *input) 
{
    int visible;  
    int max;      
    int col;      
    int row;      

    col = 0; 
    while (col < GRID_SIZE)  // Percorre cada coluna
    {
        visible = 0;   // Reinicia o contador de visíveis para a nova coluna
        max = 0;       // Reinicia o valor máximo para a nova coluna
        row = GRID_SIZE - 1;  // Começa da última linha (de baixo para cima)
        while (row >= 0)  // Percorre as linhas da coluna de baixo para cima
        {
            if (grid[row][col] > max)  // Se o valor da célula for maior que o máximo atual
            {
                max = grid[row][col]; 
                visible++;            
            }
            row--;  // Move para a linha de cima
        }
        if (visible != input[GRID_SIZE + col])   // Verifica se o número de edifícios visíveis da parte inferior corresponde à clue
            return (0);  // Retorna 0 se não corresponder
        col++;  
    }
    return (1);  // Retorna 1 se todas as colunas corresponderem às clues
}

// Esta função verifica a visibilidade nas linhas da direita para a esquerda
int check_rows_right_to_left(int grid[GRID_SIZE][GRID_SIZE], int *input) 
{
    int visible;  // Contador de edifícios visíveis
    int max;      
    int row;      
    int col;      

    row = 0;  
    while (row < GRID_SIZE)  // Percorre cada linha
    {
        visible = 0;   // Reinicia o contador de visíveis para a nova linha
        max = 0;       // Reinicia o valor máximo para a nova linha
        col = GRID_SIZE - 1;  // Começa da última coluna (da direita para a esquerda)

        while (col >= 0)  // Percorre as colunas da linha da direita para a esquerda
        {
            if (grid[row][col] > max)  // Se o valor da matriz for maior que o máximo atual
            {
                max = grid[row][col];  // Atualiza o máximo
                visible++;             // Incrementa o contador de visíveis
            }
            col--;  // Move para a coluna à esquerda
        }
        if (visible != input[3 * GRID_SIZE + row]) // Verifica se o número de edifícios visíveis da direita corresponde à pista
            return (0);  // Retorna 0 se não corresponder
        row++;  // Move para a próxima linha
    }
    return (1);  // Retorna 1 se todas as linhas corresponderem às pistas
}

// Esta função verifica a visibilidade nas linhas da esquerda para a direita
int check_rows_left_to_right(int grid[GRID_SIZE][GRID_SIZE], int *input) 
{
    int visible;
    int max;
    int row;
    int col;

    row = 0; 
    while (row < GRID_SIZE) 
    {
        visible = 0;
        max = 0;
        col = 0;
        while (col < GRID_SIZE) 
        {
            if (grid[row][col] > max) 
            {
                max = grid[row][col];
                visible++;
            }
            col++;
        }
        if (visible != input[2 * GRID_SIZE + row]) 
            return (0);
        row++;
    }
    return (1);
}

// Esta função verifica se a solução atual atende a todas as condições de visibilidade
int is_valid(int grid[GRID_SIZE][GRID_SIZE], int *input) 
{
    if (!check_columns_top(grid, input)) 
        return 0;
    if (!check_columns_bottom(grid, input)) 
        return 0;
    if (!check_rows_left_to_right(grid, input)) 
        return 0;
    if (!check_rows_right_to_left(grid, input)) 
        return 0;
    return 1;
}

