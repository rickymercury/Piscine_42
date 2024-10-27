/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 23:15:46 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/26 22:55:20 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	i;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int main() 
{
    char dest1[100] = "Hello, ";  // Ensure enough space for concatenation
    char src1[] = "World!";

    char dest2[100];
    strcpy(dest2, dest1);  // Copy initial content to dest2 for comparison
    char src2[] = "World!";

    // Test case 1: Concatenate first 3 characters from src
    printf("Before ft_strncat: %s\n", dest1);
    printf("Before strncat: %s\n", dest2);

    ft_strncat(dest1, src1, 3);
    strncat(dest2, src2, 3);

    printf("After ft_strncat (3 chars): %s\n", dest1);
    printf("After strncat (3 chars): %s\n", dest2);
    printf("\n");

    // Test case 2: Concatenate next 10 characters from src
    ft_strncat(dest1, src1 + 3, 10);  // Note: src1 + 3 skips first 3 characters
    strncat(dest2, src2 + 3, 10);     // Same test with strncat

    printf("After ft_strncat (remaining chars): %s\n", dest1);
    printf("After strncat (remaining chars): %s\n", dest2);

    return 0;
}

*/