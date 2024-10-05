/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 23:03:55 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/21 23:15:46 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/*
#include<stdio.h>

int main(void)
{
    char str1[] = "123457";
    char str2[] = "123abc";
    char str3[] = "";

    if (ft_str_is_numeric(str1))
        printf("A string \"%s\" é númerica. Retorna: %d\n", str1, ft_str_is_numeric(str1));
    else
        printf("A string \"%s\" não é númerica. Retorna: %d\n", str1, ft_str_is_numeric(str1));
    
    if (ft_str_is_numeric(str2))
        printf("A string \"%s\" é númerica. Retorna: %d\n", str2, ft_str_is_numeric(str2));
    else
        printf("A string \"%s\" não é númerica. Retorna: %d\n", str2, ft_str_is_numeric(str2));
    if (ft_str_is_numeric(str3))
        printf("A string \"%s\" é númerica. Retorna: %d\n", str3, ft_str_is_numeric(str3));
    else
        printf("A string \"%s\" não é númerica. Retorna: %d\n", str1, ft_str_is_numeric(str3));
    return (0);
}
*/