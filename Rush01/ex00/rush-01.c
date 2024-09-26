/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:40:38 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/26 18:12:07 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#define GRID_SIZE 4

int solve(int grid[GRID_SIZE][GRID_SIZE], int *input, int row, int col);
void print_grid(int grid[GRID_SIZE][GRID_SIZE]);

int is_valid_input(int argc, char **argv, int *input)
{
    int i;

    if (argc != 2)
        return (0);
    i = 0;
    while (i < 16)
    {
        if (argv[1][i * 2] < '1' || argv[1][i * 2] > '4')
            return (0);
        input[i] = argv[1][i * 2] - '0'; // Converte de caractere para inteiro
        if (i < 15 && argv[1][i * 2 + 1] != ' ') // Verifica se há um espaço entre os números
            return (0); 
        i++;
    }
    return (1); // Retorna 1 se tudo estiver válido
}

int main(int argc, char **argv) 
{
    int *input;

    input = (int *)malloc(16 * sizeof(int)); // Aloca memória para input
    if (!input) 
    {
        write(1, "Error\n", 6);
        return 1;
    }
    if (!is_valid_input(argc, argv, input)) // Verifica o número de argumentos e validade da entrada
    {
        write(1, "Error\n", 6);
        free(input); // Liberta a memória se a validação falhar
        return 1;
    }
    // Inicialização da matriz grid
    int grid[GRID_SIZE][GRID_SIZE] = {0}; // Inicializa todas as posições com 0
    if (solve(grid, input, 0, 0)) // Tenta resolver o puzzle e imprimir o resultado
        print_grid(grid);
    else
        write(1, "Error\n", 6);
    free(input); // Liberta a memória alocada
    return 0;
}