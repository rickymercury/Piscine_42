/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 22:31:15 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/22 15:54:33 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int main(void)
{
    char src[] = "Benfica, Campeão";
    char dest[50];  // dest com tamanho maior para evitar overflow
    ft_strcpy(dest, src); // Copiar a string de 'src' para 'dest'
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}
*/

/*
OUTPUT:

sh-5.2$ cc -Wall -Wextra -Werror ft_strcpy.c -o ft_strcpy
sh-5.2$ ./ft_strcpy 
Source: Benfica, Campeão
Destination: Benfica, Campeão
*/