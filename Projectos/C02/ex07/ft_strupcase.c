/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 23:48:42 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/21 23:55:58 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32; // str[i] -= 'a' - 'A'
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

char	*ft_strupcase(char *str);

int main(void)
{
    char str1[] = "Benfica";
    char str2[] = "BeNfIcA";
    char str3[] = "12345";

    printf("Before: %s\nAfter: %s\n", str1, ft_strupcase(str1));

    printf("Before: %s\nAfter: %s\n", str2, ft_strupcase(str2));

    printf("Before: %s\nAfter:  %s\n", str3, ft_strupcase(str3));

    return 0;
}
*/