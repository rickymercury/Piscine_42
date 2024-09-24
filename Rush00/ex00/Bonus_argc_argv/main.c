/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 00:04:49 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/25 00:07:18 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    rush(int x, int y);

int		main(int argc, char **argv)
{
	if (argc == 1)
		rush(5, 3);
	else if (argc == 3)
	{
		int x = atoi(argv[1]);  // Converte o primeiro argumento para int
		int y = atoi(argv[2]);  // Converte o segundo argumento para int
		rush(x, y);
	}
	return (0);
}