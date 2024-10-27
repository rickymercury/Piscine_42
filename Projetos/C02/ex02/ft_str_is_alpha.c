/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 22:56:10 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/23 15:03:23 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') 
				|| (str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}

/*
#include<stdio.h>

int main()
{
    char str1[] = "HelloWorld";
    char str2[] = "Hello123";
    char str3[] = "";

    printf("str1 é alfabética? %d\n", ft_str_is_alpha(str1));
    printf("str2 é alfabética? %d\n", ft_str_is_alpha(str2));
    printf("str3 é alfabética? %d\n", ft_str_is_alpha(str3));

    return (0);
}
*/

/*
OUTPUT:

sh-5.2$ cc -Wall -Wextra -Werror ft_str_is_alpha.c -o ft_str_is_alpha
sh-5.2$ ./ft_str_is_alpha 
str1 é alfabética? 1
str2 é alfabética? 0
str3 é alfabética? 1
*/