/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 23:15:46 by rickymercur       #+#    #+#             */
/*   Updated: 2024/11/03 19:55:21 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
        j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int main(void)
{
    char dest1[20] = "Hello";
    char src1[] = " World!";
    unsigned int nb1 = 6;

    printf("Antes da concatenação: '%s'\n", dest1);
    ft_strncat(dest1, src1, nb1);
    printf("Depois da concatenação (nb = %d): '%s'\n\n", nb1, dest1);

    char dest2[20] = "Hello";
    char src2[] = " World!";
    unsigned int nb2 = 3;

    printf("Antes da concatenação: '%s'\n", dest2);
    ft_strncat(dest2, src2, nb2);
    printf("Depois da concatenação (nb = %d): '%s'\n\n", nb2, dest2);

    char dest3[10] = "Hello";
    char src3[] = " World!";
    unsigned int nb3 = 20;

    printf("Antes da concatenação: '%s'\n", dest3);
    ft_strncat(dest3, src3, nb3);
    printf("Depois da concatenação (nb = %d): '%s'\n", nb3, dest3);

    return 0;
}
*/

/*
OUTPUT:

sh-5.2$ cc -Wall -Werror -Wextra ft_strncat.c -o ft_strncat
sh-5.2$ ./ft_strncat 

Antes da concatenação: 'Hello'
Depois da concatenação (nb = 6): 'Hello World'

Antes da concatenação: 'Hello'
Depois da concatenação (nb = 3): 'Hello Wo'

Antes da concatenação: 'Hello'
Depois da concatenação (nb = 20): 'Hello World!'
*/