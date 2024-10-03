/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 23:58:26 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/22 00:00:27 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32; // str[i] += 'a' - 'A';
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
    char str1[] = "BENFICA";
    char str2[] = "BeNfIcA";
    char str3[] = "12345";

    printf("Before: %s\nAfter: %s\n", str1, ft_strlowcase(str1));

    printf("Before: %s\nAfter: %s\n", str2, ft_strlowcase(str2));

    printf("Before: %s\nAfter:  %s\n", str3, ft_strlowcase(str3));

    return 0;
}
*/