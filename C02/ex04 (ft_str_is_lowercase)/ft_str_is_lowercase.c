/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 23:19:07 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/21 23:25:34 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0); 
		i++;
	}
	return (1);
}

/*
#include<stdio.h>

int main(void)
{
    char str1[] = "hello";
    char str2[] = "HELLO";
    char str3[] = "";

    if (ft_str_is_lowercase(str1))
        printf("A string \"%s\" é minúscula. Retorna: %d\n", str1, ft_str_is_lowercase(str1));
    else
        printf("A string \"%s\" não é minúscula. Retorna: %d\n", str1, ft_str_is_lowercase(str1));
    
     if (ft_str_is_lowercase(str2))
        printf("A string \"%s\" é minúscula. Retorna: %d\n", str2, ft_str_is_lowercase(str2));
    else
        printf("A string \"%s\" não é minúscula. Retorna: %d\n", str2, ft_str_is_lowercase(str2));
    
     if (ft_str_is_lowercase(str3))
        printf("A string \"%s\" é minúscula. Retorna: %d\n", str3, ft_str_is_lowercase(str3));
    else
        printf("A string \"%s\" não é minúscula. Retorna: %d\n", str3, ft_str_is_lowercase(str3));

    return (0);
}
*/