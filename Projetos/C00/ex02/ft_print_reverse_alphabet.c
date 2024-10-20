/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:53:06 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/14 23:32:05 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		write (1, &letter, 1);
		letter--;
	}
}

/*
#include <stdio.h>

int main(void)
{
    ft_print_reverse_alphabet();
	write(1, "\n", 1);
    return (0);
}
*/

 /*
 OUTPUT:

 sh-5.2$ cc -Wall -Wextra -Werror ft_print_reverse_alphabet.c -o ft_print_reverse_alphabet
sh-5.2$ ./ft_print_reverse_alphabet 
zyxwvutsrqponmlkjihgfedcba
 */