/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 23:03:55 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/23 21:22:28 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/*
#include<stdio.h>

int main()
{
    char str1[] = "1234567";
    char str2[] = "123abc";
    char str3[] = "";

    printf("str1 é numérico? %d\n", ft_str_is_numeric(str1));
    printf("str2 é numérico? %d\n", ft_str_is_numeric(str2));
    printf("str3 é numérico? %d\n", ft_str_is_numeric(str3));

    return (0);
}
*/


/*
OUTPUT:

sh-5.2$ cc -Wall -Wextra -Werror ft_str_is_numeric.c -o ft_str_is_numeric
sh-5.2$ ./ft_str_is_numeric 
str1 é numérico? 1
str2 é numérico? 0
str3 é numérico? 1
*/