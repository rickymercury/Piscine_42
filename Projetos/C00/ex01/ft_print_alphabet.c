/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:14:03 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/14 23:30:02 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		write (1, &letter, 1);
		letter++;
	}
}

/*
#include <stdio.h>

int main(void)
{
    ft_print_alphabet();
	write(1, "\n", 1);
    return (0);
}
*/

/*
OUTPUT:

sh-5.2$ cc -Wall -Wextra -Werror ft_print_alphabet.c -o ft_print_alphabet
sh-5.2$ ./ft_print_alphabet 
abcdefghijklmnopqrstuvwxyz
*/