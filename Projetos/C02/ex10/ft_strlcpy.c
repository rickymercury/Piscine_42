/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 00:15:52 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/25 22:16:02 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size > 0)
	{
		i = 0;
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

 /*
#include <stdio.h>

int main()
{
	char src[] = "Hello World";
	char dest[9];
	unsigned int size = sizeof(dest);
	unsigned int len = ft_strlcpy(dest, src, size);
	
	printf("SRC: %s\n", src);
	printf("Comprimento da SRC: %u\n", len);
	printf("DEST: %s\n", dest); 

	return (0);
}
*/


/*
OUTPUT:

sh-5.2$ cc -Wall -Wextra -Werror ft_strlcpy.c -o ft_strlcpy
sh-5.2$ ./ft_strlcpy 
SRC: Hello World
Comprimento da SRC: 11
DEST: Hello Wo
*/