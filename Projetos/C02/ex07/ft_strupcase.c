/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 23:48:42 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/24 10:24:40 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;                    // str[i] -= 'a' - 'A'
		i++;
	}
	return (str);
}


/*
#include <stdio.h>

int main(void)
{
    char str1[] = "Benfica";
    char str2[] = "BeNfIcA";
    char str3[] = "12345";
    char str4[] = "Olá !";

    printf("Before: %s\n", str1);
    ft_strupcase(str1);
    printf("After: %s\n\n", str1);

    printf("Before: %s\n", str2);
    ft_strupcase(str2);
    printf("After: %s\n\n", str2);

    printf("Before: %s\n", str3);
    ft_strupcase(str3);
    printf("After: %s\n\n", str3);

    printf("Before: %s\n", str4);
    ft_strupcase(str4);
    printf("After: %s\n\n", str4);

    return 0;
}
*/


/*
OUTPUT:

sh-5.2$ cc -Wall -Wextra -Werror ft_strupcase.c -o ft_strupcase
sh-5.2$ ./ft_strupcase 
Before: Benfica
After: BENFICA

Before: BeNfIcA
After: BENFICA

Before: 12345
After: 12345

Before: Olá !
After: OLá !
*/