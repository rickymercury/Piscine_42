/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 23:28:06 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/23 22:44:07 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}


/*
#include<stdio.h>

int main()
{
    char str1[] = "HELLO";
    char str2[] = "hello";
    char str3[] = "";

    printf("str1 é maiúsculo? %d\n", ft_str_is_uppercase(str1));
    printf("str2 é maiúsculo? %d\n", ft_str_is_uppercase(str2));
    printf("str3 é maiúsculo? %d\n", ft_str_is_uppercase(str3));

    return (0);
}
*/


/*
OUTPUT:

sh-5.2$ cc -Wall -Wextra -Werror ft_str_is_uppercase.c -o ft_str_is_uppercase
sh-5.2$ ./ft_str_is_uppercase 
str1 é maiúsculo? 1
str2 é maiúsculo? 0
str3 é maiúsculo? 1
*/