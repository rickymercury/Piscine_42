/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 22:52:27 by rickymercur       #+#    #+#             */
/*   Updated: 2024/11/01 16:15:29 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
    if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>

int	main(void)
{
    char str1[] = "Hello";
    char str2[] = "HelloWorld";
    char str3[] = "Hell";
    char str4[] = "HeLlo";
    char str5[] = "World";

    printf("\"%s\" e \"%s\" com n = 5: %d\n", str1, str2, ft_strncmp(str1, str2, 5));
    printf("\n");
    printf("\"%s\" e \"%s\" com n = 6: %d\n", str1, str2, ft_strncmp(str1, str2, 6));
    printf("\n");
    printf("\"%s\" e \"%s\" com n = 5: %d\n", str1, str3, ft_strncmp(str1, str3, 5));
    printf("\n");
    printf("\"%s\" e \"%s\" com n = 3: %d\n", str1, str3, ft_strncmp(str1, str3, 3));
    printf("\n");
    printf("\"%s\" e \"%s\" com n = 5: %d\n", str1, str4, ft_strncmp(str1, str4, 5));
    printf("\n");
    printf("\"%s\" e \"%s\" com n = 5: %d\n", str1, str5, ft_strncmp(str1, str5, 5));

    return 0;
}
*/

/*
sh-5.2$ cc -Wall -Werror -Wextra ft_strncmp.c -o ft_strncmp
sh-5.2$ ./ft_strncmp

"Hello" e "HelloWorld" com n = 5: 0

"Hello" e "HelloWorld" com n = 6: -87

"Hello" e "Hell" com n = 5: 111

"Hello" e "Hell" com n = 3: 0

"Hello" e "HeLlo" com n = 5: 32

"Hello" e "World" com n = 5: -15
*/