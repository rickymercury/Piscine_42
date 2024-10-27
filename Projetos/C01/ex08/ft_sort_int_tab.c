/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:43:34 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/21 20:57:30 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int swap;

    i = 0;
    while (size > 1)
    {
        i = 0;
        while (i < size - 1)
        {
            if (tab[i] > tab[i + 1])
            {
                swap = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = swap;
            }
            i++;
        }
        size--;
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

    ft_sort_int_tab(array, size);

    printf("Depois da ordenação: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
*/

/*
OUTPUT:

sh-5.2$ cc -Wall -Wextra -Werror ft_sort_int_tab.c -o ft_sort_int_tab
sh-5.2$ ./ft_sort_int_tab 
Antes da ordenação: 5 2 9 1 5 6 
Depois da ordenação: 1 2 5 5 6 9 
*/