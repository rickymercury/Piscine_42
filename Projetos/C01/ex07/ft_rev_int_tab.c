/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:34:06 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/21 13:04:59 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i <= size - (i + 1))  // while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size - (i + 1)];
		tab[size - (i + 1)] = swap;
		i++;
	}
}

/*
#include <stdio.h>

int main(void)
{
    int array[] = {1, 2, 3, 4, 5};
    int size = 5;

    printf("Antes da inversão: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    ft_rev_int_tab(array, size); // Chama a função para reverter o array

    printf("Depois da inversão: ");
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

sh-5.2$ cc -Wall -Wextra -Werror ft_rev_int_tab.c -o ft_rev_int_tab
sh-5.2$ ./ft_rev_int_tab 
Antes da inversão: 1 2 3 4 5 
Depois da inversão: 5 4 3 2 1 
*/