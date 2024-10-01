/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 21:48:34 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/30 19:04:47 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_char_to_int(char c)
{
	int	i;

	i = c - 48;
	return (i);
}

int	ft_count_valid_digits(char *str)
{
	int	num_digits;
	int	i;

	i = 0;
	num_digits = 0;
	while (str[i])
	{
		if (str[i] <= '9' && str[i] >= '0')
			num_digits++;
		i++;
	}
	if (num_digits % 4 != 0)
		return (1);
	return (num_digits);
}