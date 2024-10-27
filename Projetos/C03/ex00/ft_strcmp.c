/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 22:38:50 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/26 20:13:51 by rickymercur      ###   ########.fr       */
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
    char *str3 = "Hell";
    char *str4 = "World";
    char *str5 = "";
    char *str6 = "HelloWorld";

    // Same strings
    printf("Comparing '%s' and '%s':\n", str1, str2);
    printf("ft_strcmp: %d\n", ft_strcmp(str1, str2));   
    printf("\n");

    // First string longer
    printf("Comparing '%s' and '%s':\n", str1, str3);
    printf("ft_strcmp: %d\n", ft_strcmp(str1, str3));   
    printf("\n");

    // Different strings
    printf("Comparing '%s' and '%s':\n", str1, str4);
    printf("ft_strcmp: %d\n", ft_strcmp(str1, str4));   
    printf("\n");

    // Empty string comparison
    printf("Comparing '%s' and '%s':\n", str5, str5);
    printf("ft_strcmp: %d\n", ft_strcmp(str5, str5));   
    printf("\n");

    // First string empty, second string non-empty
    printf("Comparing '%s' and '%s':\n", str5, str1);
    printf("ft_strcmp: %d\n", ft_strcmp(str5, str1));   
    printf("\n");

    // First string non-empty, second string empty
    printf("Comparing '%s' and '%s':\n", str1, str5);
    printf("ft_strcmp: %d\n", ft_strcmp(str1, str5));   
    printf("\n");

    // First string is a substring of second string
    printf("Comparing '%s' and '%s':\n", str3, str6);
    printf("ft_strcmp: %d\n", ft_strcmp(str3, str6));   
    printf("\n");

    return 0;
}
*/


/*
OUTPUT:

sh-5.2$ cc -Wall -Wextra -Werror ft_strcmp.c -o ft_strcmp
sh-5.2$ ./ft_strcmp 
Comparing 'Hello' and 'Hello':
ft_strcmp: 0

Comparing 'Hello' and 'Hell':
ft_strcmp: 111

Comparing 'Hello' and 'World':
ft_strcmp: -15

Comparing '' and '':
ft_strcmp: 0

Comparing '' and 'Hello':
ft_strcmp: -72

Comparing 'Hello' and '':
ft_strcmp: 72

Comparing 'Hell' and 'HelloWorld':
ft_strcmp: -111
*/