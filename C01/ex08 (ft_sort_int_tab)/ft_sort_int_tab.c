/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:43:34 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/21 21:49:24 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int swap;

    i = 0;
    while (i < size - 1)
    {
        j = 0;
        while (j < size - i - 1)
        {
            if (tab[j] > tab[j + 1])
            {
                swap = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = swap;
            }
            j++;
        }
        i++;
    }
}

/*
#include <stdio.h>

int main(void)
{
    int array[] = {5, 2, 9, 1, 5, 6};
    int size = 6;

    printf("Antes da ordenação: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    ft_sort_int_tab(array, size); // Chama a função para ordenar o array

    printf("Depois da ordenação: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
*/