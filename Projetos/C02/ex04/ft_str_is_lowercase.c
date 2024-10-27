/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 23:19:07 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/23 21:56:52 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0); 
		i++;
	}
	return (1);
}

/*
#include<stdio.h>

int main()
{
    char str1[] = "hello";
    char str2[] = "HELLO";
    char str3[] = "";

    printf("str1 é minúsculo? %d\n", ft_str_is_lowercase(str1));
    printf("str2 é minúsculo? %d\n", ft_str_is_lowercase(str2));
    printf("str3 é minúsculo? %d\n", ft_str_is_lowercase(str3));

    return (0);
}
*/

/*
OUTPUT:

sh-5.2$ cc -Wall -Wextra -Werror ft_str_is_lowercase.c -o ft_str_is_lowercase
sh-5.2$ ./ft_str_is_lowercase 
str1 é minúsculo? 1
str2 é minúsculo? 0
str3 é minúsculo? 1
*/