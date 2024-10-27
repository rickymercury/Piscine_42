/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 23:40:17 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/26 23:05:40 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	src_len = 0;
	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	else if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (src[i] != '\0' && (dest_len + i) < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/*
#include <stdio.h>

#include <stdio.h>
#include <string.h>

int main() 
{
    char dest1[20] = "Hello, ";
    char src1[] = "World!";

    char dest_1[20] = "Hello, ";
    char src_1[] = "World!";

    char dest2[10] = "Hi, ";
    char src2[] = "there";
    unsigned int size2 = 10;

    char dest_2[10] = "Hi, ";
    char src_2[] = "there";

    char dest3[15] = "Test";
    char src3[] = " String";
    unsigned int size3 = 0;

    char dest_3[15] = "Test";
    char src_3[] = " String";

    char dest4[5] = "abcd";
    char src4[] = "efg";
    unsigned int size4 = 4;

    char dest_4[5] = "abcd";
    char src_4[] = "efg";

    char dest5[15] = "";
    char src5[] = "Hello";
    unsigned int size5 = 15;

    char dest_5[15] = "";
    char src_5[] = "Hello";

    printf("Test Case 1:\n");
    unsigned int result1 = ft_strlcat(dest1, src1, -1);
    printf("Resulting string (ft_strlcat): \"%s\"\n", dest1);
    printf("Length attempted to create (ft_strlcat): %u\n", result1);

    printf("Test Case 2:\n");
    unsigned int result2 = ft_strlcat(dest2, src2, size2);
    printf("Resulting string (ft_strlcat): \"%s\"\n", dest2);
    printf("Length attempted to create (ft_strlcat): %u\n", result2);

    printf("Test Case 3:\n");
    unsigned int result3 = ft_strlcat(dest3, src3, size3);
    printf("Resulting string (ft_strlcat): \"%s\"\n", dest3);
    printf("Length attempted to create (ft_strlcat): %u\n", result3);

    printf("Test Case 4:\n");
    unsigned int result4 = ft_strlcat(dest4, src4, size4);
    printf("Resulting string (ft_strlcat): \"%s\"\n", dest4);
    printf("Length attempted to create (ft_strlcat): %u\n", result4);

    printf("Test Case 5:\n");
    unsigned int result5 = ft_strlcat(dest5, src5, size5);
    printf("Resulting string (ft_strlcat): \"%s\"\n", dest5);
    printf("Length attempted to create (ft_strlcat): %u\n", result5);

    return (0);
}
*/