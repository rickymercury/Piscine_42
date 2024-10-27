/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 23:07:13 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/26 22:54:59 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	i;

    dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;              
	}
	dest[dest_len + i] = '\0';
	return (dest);
}


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