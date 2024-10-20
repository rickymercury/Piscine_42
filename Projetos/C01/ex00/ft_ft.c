/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:11:13 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/16 16:00:41 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*
#include <stdio.h>

int	main()
{
	int	valor = 0; // Declaração do inteiro

	printf("Valor inicial do inteiro: %d", valor); // O inteiro aqui é 0
	printf("\n");
	ft_ft(&valor); // Passar o inteiro como ponteiro para a função 
	printf("A função atribui 42 ao inteiro que é assim %d", valor); // O novo valor do inteiro agora é 42
	
	return 0;
}
*/

/*
OUTPUT:

sh-5.2$ cc -Wall -Wextra -Werror ft_ft.c -o ft_ft                            
sh-5.2$ ./ft_ft 
Valor inicial do inteiro: 0
A função atribui 42 ao inteiro que é assim 42
*/