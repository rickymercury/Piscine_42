/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:07:09 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/16 22:39:25 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*
OUTPUT:

sh-5.2$ cc -Wall -Wextra -Werror ft_swap.c -o ft_swap              
sh-5.2$ ./ft_swap 
Antes: x = 10, y = 20
Depois: x = 20, y = 10
*/