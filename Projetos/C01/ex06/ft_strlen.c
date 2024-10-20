/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:29:30 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/19 21:39:38 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
#include <stdio.h>

int main(void)
{
    char *str = "Benfica";
    int len = ft_strlen(str);

    printf("O comprimento da string \"%s\" é: %d\n", str, len);
    return 0;
}
*/


/*
OUTPUT:

sh-5.2$ cc -Wall -Wextra -Werror ft_strlen.c -o ft_strlen
sh-5.2$ ./ft_strlen 
O comprimento da string "Benfica" é: 7
*/