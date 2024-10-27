/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 23:38:47 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/23 23:05:15 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}


/*
#include<stdio.h>

int main()
{
    char str1[] = "Hello";
    char str2[] = "\tH";
    char str3[] = "";

    printf("str1 é printable? %d\n", ft_str_is_printable(str1));
    printf("str2 é printable? %d\n", ft_str_is_printable(str2));
    printf("str3 é printable? %d\n", ft_str_is_printable(str3));

    return (0);
}
*/

/*
OUTPUT:

sh-5.2$ cc -Wall -Wextra -Werror ft_str_is_printable.c -o ft_str_is_printable
sh-5.2$ ./ft_str_is_printable 
str1 é printable? 1
str2 é printable? 0
str3 é printable? 1
*/