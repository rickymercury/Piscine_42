/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:12:11 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/17 16:58:56 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b == 0)
		return ;
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

    ft_div_mod(a, b, &divisao, &resto);

    printf("Depois: divisão = %d, resto = %d\n", divisao, resto);
    return 0;
}
*/

/*
OUTPUT:

sh-5.2$ cc -Wall -Wextra -Werror ft_div_mod.c -o ft_div_mod
sh-5.2$ ./ft_div_mod           
Antes: a = 10, b = 3
Depois: divisão = 3, resto = 1
*/