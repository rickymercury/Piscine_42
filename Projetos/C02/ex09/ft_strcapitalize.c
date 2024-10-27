/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 00:02:50 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/24 22:17:30 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize;

	i = 0;
	capitalize = 1;
	while (str[i] != '\0')
	{
		if (capitalize == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (capitalize == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z') 
			|| (str[i] >= 'A' && str[i] <= 'Z') 
				|| (str[i] >= '0' && str[i] <= '9'))
			capitalize = 0;
		else
			capitalize = 1;
		i++;
	}
	return (str);
}


/*
#include <stdio.h>

int	main()
{
	char str[] = "hello WORLD";
	char str1[] = "rekt17+lol mdr mdr 4242l42";
	char str2[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	
	printf("%s", ft_strcapitalize(str));
	printf("\n%s", ft_strcapitalize(str1));
	printf("\n%s", ft_strcapitalize(str2));

	return (0);
}
*/


/*
OUTPUT:

sh-5.2$ cc -Wall -Wextra -Werror ft_strcapitalize.c -o ft_strcapitalize
sh-5.2$ ./ft_strcapitalize 
Hello World
Rekt17+Lol Mdr Mdr 4242l42
Ola, Tudo Bem? 42palavras Quarenta-E-Duas; Cinquenta+E+Ums
*/
