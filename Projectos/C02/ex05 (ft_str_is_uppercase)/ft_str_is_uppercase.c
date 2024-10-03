/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 23:28:06 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/21 23:35:55 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/*
#include<stdio.h>

int main(void)
{
    char str1[] = "HELLO";
    char str2[] = "hello";
    char str3[] = "";

    if (ft_str_is_uppercase(str1))
        printf("A string \"%s\" é maiúscula. Retorna: %d\n", str1, ft_str_is_uppercase(str1));
    else
        printf("A string \"%s\" não é maiúscula. Retorna: %d\n", str1, ft_str_is_uppercase(str1));
    
    if (ft_str_is_uppercase(str2))
        printf("A string \"%s\" é maiúscula. Retorna: %d\n", str2, ft_str_is_uppercase(str2));
    else
        printf("A string \"%s\" não é maiúscula. Retorna: %d\n", str2, ft_str_is_uppercase(str2));

    if (ft_str_is_uppercase(str3))
        printf("A string \"%s\" é maiúscula. Retorna: %d\n", str3, ft_str_is_uppercase(str3));
    else
        printf("A string \"%s\" não é maiúscula. Retorna: %d\n", str3, ft_str_is_uppercase(str3));

    return (0);
}
*/