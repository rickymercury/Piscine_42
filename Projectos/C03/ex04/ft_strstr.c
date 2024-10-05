/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 23:21:37 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/22 23:39:49 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')  // if (!*to_find)
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		j = 0;
        i++;
	}
	return (0);
}

/*
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	// Exemplos de strings e substrings
	char str1[] = "Benfica Campeão!";
	char to_find1[] = "Campeão!";
	char to_find2[] = "Benfica";
	char to_find3[] = "!";
	char to_find4[] = "Sporting";
	char to_find5[] = "";

	printf("Find'%s' em '%s': %s\n", to_find1, str1, ft_strstr(str1, to_find1));

	printf("Find '%s' em '%s': %s\n", to_find2, str1, ft_strstr(str1, to_find2));

	printf("Find '%s' em '%s': %s\n", to_find3, str1, ft_strstr(str1, to_find3));

	printf("Find '%s' em '%s': %p\n", to_find4, str1, ft_strstr(str1, to_find4));

	printf("Find '%s': %s\n", str1, ft_strstr(str1, to_find5));

	return (0);
}
*/


//                           Outra opção

/*
char	*ft_strstr(char *str, char *to_find)
{
	char	*a;
	char	*b;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			a = str;
            b = to_find;
			while (*a == *b && *b != '\0')
			{
				a++;
				b++;
			}
            if (*b == '\0')
                return (str);
		}
		str++;
	}
	return (0);
}
*/