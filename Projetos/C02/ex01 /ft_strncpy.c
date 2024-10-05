/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 22:44:08 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/21 22:51:57 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
    char src[] = "Hello, world!";
    char dest1[20];  // Buffer de destino maior que o necessário
    char dest2[20];

    ft_strncpy(dest1, src, 8); //  Copiar os primeiros 8 caracteres de 'src' para 'dest1'
    ft_strncpy(dest2, src, 15); // Copiar os primeiros 15 caracteres de 'src' para 'dest2' (mesmo que 'src' seja menor)

    printf("Source: %s\n", src);
    printf("Destination 1 (8 chars): %s\n", dest1);
    printf("Destination 2 (15 chars): %s\n", dest2);

    return 0;
}
*/