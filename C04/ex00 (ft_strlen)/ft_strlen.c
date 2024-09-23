/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 23:55:19 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/23 01:10:56 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
#include <stdio.h>

int main(void)
{
    char *str = "Benfica";

    int len = ft_strlen(str);

    printf("O comprimento da string \"%s\" é: %d\n", str, len); // Imprime o comprimento
    return 0;
}
*/