/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 00:03:46 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/23 00:32:01 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	number;
	int	sign;

	i = 0;
	number = 0;
	sign = 1;
	while ((str[i] == ' ') || str[i] >= 9 && str[i] <= 13)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;    // sign = -sign
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return (number * sign);
}

/*
#include <stdio.h>

int main(void)
{
	char *test1 = " ---+--+1234ab567";
    char *test2 = "4193 with words";
    char *test3 = "words and 987";
    char *test4 = "-91283472332";
    char *test5 = "2147483647";  // Max int
    char *test6 = "-2147483648"; // Min int

    printf("String: '%s', ft_atoi: %d\n", test1, ft_atoi(test1));
    printf("String: '%s', ft_atoi: %d\n", test2, ft_atoi(test2));
    printf("String: '%s', ft_atoi: %d\n", test3, ft_atoi(test3));
    printf("String: '%s', ft_atoi: %d\n", test4, ft_atoi(test4));
    printf("String: '%s', ft_atoi: %d\n", test5, ft_atoi(test5));
    printf("String: '%s', ft_atoi: %d\n", test6, ft_atoi(test6));

    return 0;
}
*/