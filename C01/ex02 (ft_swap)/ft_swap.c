/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:07:09 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/21 21:09:20 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*
#include <stdio.h>

int main(void)
{
    int x = 10;
    int y = 20;

    printf("Antes: x = %d, y = %d\n", x, y);

    ft_swap(&x, &y); // Chama a função passando os endereços de x e y

    printf("Depois: x = %d, y = %d\n", x, y);
    return 0;
}
*/