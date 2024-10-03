/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 23:07:45 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/02 15:45:59 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
}

int	main(int argc, char **argv)
{
	int	valid_digits;
	int	*tab;

	if (argc != 2)
	{
		ft_error();
		return (1);
	}
	valid_digits = ft_count_valid_digits(argv[1]);
	if (valid_digits == 0 || valid_digits / 4 > 9)
	{
		ft_error();
		return (1);
	}
	tab = ft_convert_str_to_tab(argv[1], valid_digits);
	if (tab == NULL || valid_digits / 4 == 0)
	{
		ft_error();
		return (1);
	}
	if (rush01(valid_digits / 4, tab))
		return (1);
	return (0);
}