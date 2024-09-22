/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 23:40:17 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/22 23:49:09 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;
	unsigned int	src_size;

	i = 0;
	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (dest_size >= size)                // if (size < 1)
		return (src_size + size);
	while (src[i] != '\0' && (i + dest_size) < size - 1)
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
    if (size < dest_size)
        return (src_size + size);
    else
        return (dest_size + src_size);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str1[20] = "Benfica";
	char	str2[] = " Campeão";
	unsigned int		size;
	unsigned int		result;

	size = 7;
	result = ft_strlcat(str1, str2, size);
	printf("str dest + src limited by size is: %d\n", result);
	return (0);
}
*/