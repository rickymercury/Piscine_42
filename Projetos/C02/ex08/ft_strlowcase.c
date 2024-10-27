/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 23:58:26 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/24 21:24:39 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}


/*
#include <stdio.h>

char	*ft_strupcase(char *str);

int main(void)
{
    char str1[] = "BENFICA";
    char str2[] = "BeNfIcA";
    char str3[] = "12345";
	char str4[] = "OLá !";

    printf("Before: %s\n", str1);
    ft_strlowcase(str1);
    printf("After: %s\n\n", str1);

    printf("Before: %s\n", str2);
    ft_strlowcase(str2);
    printf("After: %s\n\n", str2);

    printf("Before: %s\n", str3);
    ft_strlowcase(str3);
    printf("After: %s\n\n", str3);

    printf("Before: %s\n", str4);
    ft_strlowcase(str4);
    printf("After: %s\n\n", str4);

    return 0;
}
*/

/*
OUTPUT:

sh-5.2$ cc -Wall -Wextra -Werror ft_strlowcase.c -o ft_strlowcase
sh-5.2$ ./ft_strlowcase 
Before: BENFICA
After: benfica

Before: BeNfIcA
After: benfica

Before: 12345
After: 12345

Before: OLá !
After: olá !
*/