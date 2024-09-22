/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 23:07:13 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/22 23:14:37 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j]; // dest[i + j] = src[j];
		i++;              // j++;
		j++;
	}
	dest[i] = '\0';      // dest[i + j] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int	main()
{
	char	str1[20] = "Benfica ";
	char	str2[] = "Campeão";

    printf("String original: %s\n", str1);
	ft_strcat(str1, str2);
	printf("String concatenada: %s\n", str1);
	return (0);
}
*/