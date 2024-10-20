/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 10:55:50 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/14 22:32:55 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

/*
int main() 
{
    ft_putchar('A');
    ft_putchar('\n');

    return 0;                      
}
*/


/*
OUTPUT:

cc -Wall -Wextra -Werror ft_putchar.c -o ft_putchar
sh-5.2$ ./ft_putchar 
A
*/