/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:12:11 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/21 21:24:29 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b == 0)
	{
		return ;
	}
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 3;
    int divisao;
    int resto;

    printf("Antes: a = %d, b = %d\n", a, b);

    ft_div_mod(a, b, &divisao, &resto); // Chama a função passando os endereços das variáveis

    printf("Depois: divisão = %d, resto = %d\n", divisao, resto);
    return 0;
}
*/