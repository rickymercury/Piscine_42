/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:58:44 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/14 23:33:57 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	num;

	num = '0';
	while (num <= '9')
	{
		write (1, &num, 1);
		num++;
	}
}

/*
#include <unistd.h>

int main()
{
    ft_print_numbers();
	write(1, "\n", 1);
    return (0);
}
*/

/*
OUTPUT:

sh-5.2$ cc -Wall -Wextra -Werror ft_print_numbers.c -o ft_print_numbers
sh-5.2$ ./ft_print_numbers 
0123456789
*/