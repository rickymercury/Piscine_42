/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:19:07 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/21 21:24:16 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

    ft_ultimate_div_mod(&a, &b); // Chama a função passando os endereços de a e b

    printf("Depois: a = %d, b = %d\n", a, b);
    return 0;
}
*/