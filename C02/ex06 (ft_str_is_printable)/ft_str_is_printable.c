/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 23:38:47 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/21 23:47:36 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int main(void)
{
    char str1[] = "Hello";
    char str2[] = "\tH";
    char str3[] = "";

    if (ft_str_is_printable(str1))
        printf("A string \"%s\" é printável. Retorna: %d\n", str1, ft_str_is_printable(str1));
    else
        printf("A string \"%s\" não é printável. Retorna: %d\n", str1, ft_str_is_printable(str1));
    
	if (ft_str_is_printable(str2))
        printf("A string \"%s\" é printável. Retorna: %d\n", str2, ft_str_is_printable(str2));
    else
        printf("A string \"%s\" não é printável. Retorna: %d\n", str2, ft_str_is_printable(str2));

	if (ft_str_is_printable(str3))
        printf("A string \"%s\" é printável. Retorna: %d\n", str3, ft_str_is_printable(str3));
    else
        printf("A string \"%s\" não é printável. Retorna: %d\n", str3, ft_str_is_printable(str3));

    return (0);
}
*/
