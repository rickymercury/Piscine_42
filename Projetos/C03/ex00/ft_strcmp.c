/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 22:38:50 by rickymercur       #+#    #+#             */
/*   Updated: 2024/11/01 15:47:36 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>

int main()
{
    char *str1 = "Hello";
    char *str2 = "Hello";
    char *str3 = "Hello, World!";
    char *str4 = "Hell";
    char *str5 = "World";
    char *str6 = "";
    char *str7 = "HelloWorld";

    printf("'%s' and '%s': %d\n", str1, str2, ft_strcmp(str1, str2));
    printf("\n");
	printf("'%s' and '%s': %d\n", str1, str3, ft_strcmp(str1, str3));
    printf("'%s' and '%s': %d\n", str3, str1, ft_strcmp(str3, str1));
    printf("\n");
	printf("'%s' and '%s': %d\n", str1, str4, ft_strcmp(str1, str4));
    printf("'%s' and '%s': %d\n", str4, str1, ft_strcmp(str4, str1));
    printf("\n");
	printf("'%s' and '%s': %d\n", str1, str5, ft_strcmp(str1, str5));
    printf("'%s' and '%s': %d\n", str5, str1, ft_strcmp(str5, str1));
    printf("\n");
    printf("'%s' and '%s': %d\n", str1, str6, ft_strcmp(str1, str6));
    printf("'%s' and '%s': %d\n", str6, str1, ft_strcmp(str6, str1));
    printf("\n");
    printf("'%s' and '%s': %d\n", str1, str7, ft_strcmp(str1, str7));
    printf("'%s' and '%s': %d\n", str7, str1, ft_strcmp(str7, str1));

    return (0);
}
*/

/*
OUTPUT:

sh-5.2$ cc -Wall -Werror -Wextra ft_strcmp.c -o ft_strcmp
sh-5.2$ ./ft_strcmp 
'Hello' and 'Hello': 0

'Hello' and 'Hello, World!': -44
'Hello, World!' and 'Hello': 44

'Hello' and 'Hell': 111
'Hell' and 'Hello': -111

'Hello' and 'World': -15
'World' and 'Hello': 15

'Hello' and '': 72
'' and 'Hello': -72

'Hello' and 'HelloWorld': -87
'HelloWorld' and 'Hello': 87
*/