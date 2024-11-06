/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 23:21:37 by rickymercur       #+#    #+#             */
/*   Updated: 2024/11/04 11:06:01 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] && to_find[j] && str[i + j] == to_find[j])
				j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

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

/*
OUTPUT:

sh-5.2$ cc -Wall -Werror -Wextra ft_strstr.c -o ft_strstr
sh-5.2$ ./ft_strstr 
Find'Campeão!' em 'Benfica Campeão!': Campeão!
Find 'Benfica' em 'Benfica Campeão!': Benfica Campeão!
Find '!' em 'Benfica Campeão!': !
Find 'Sporting' em 'Benfica Campeão!': (nil)
Find 'Benfica Campeão!': Benfica Campeão!
*/