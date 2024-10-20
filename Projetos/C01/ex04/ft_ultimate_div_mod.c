/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:19:07 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/17 20:52:47 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 3;

    printf("Antes: a = %d, b = %d\n", a, b);

    ft_ultimate_div_mod(&a, &b);

    printf("Depois: a = %d, b = %d\n", a, b);
    return 0;
}
*/

/*
OUTPUT:

sh-5.2$ cc -Wall -Wextra -Werror ft_ultimate_div_mod.c -o ft_ultimate_div_mod
sh-5.2$ ./ft_ultimate_div_mod 
Antes: a = 10, b = 3
Depois: a = 3, b = 1
*/