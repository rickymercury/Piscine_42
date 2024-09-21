/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:34:06 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/21 21:41:00 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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