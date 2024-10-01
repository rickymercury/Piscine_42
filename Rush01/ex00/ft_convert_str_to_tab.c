/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_str_to_tab.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 23:04:17 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/30 19:04:53 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_check_digit_space(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= '0' && str[i] <= '9')
	{
		while ((str[i + 1] == ' ' || !str[i + 1])
			&& (str[i] <= '9' && str[i] >= '0'))
			i += 2;
	}
	if (i != ft_strlen(str) + 1)
		return (1);
	return (0);
}

int	ft_check_tab(int *tab, int size)
{
	int	max_value;
	int	i;

	i = 0;
	max_value = size / 4;
	while (i < size && max_value >= 4)
	{	
		if (tab[i] > max_value || tab[i] <= 0)
			return (1);
		i++;
	}
	return (0);
}

int	*ft_convert_str_to_tab(char *str, int argc)
{
	int	i;
	int	j;
	int	*tab;
	int	error;

	i = 0;
	j = 0;
	if (ft_check_digit_space(str))
		return (NULL);
	tab = (int *) malloc(argc * sizeof(int));
	if (!tab)
		return (NULL);
	while (str[i])
	{
		if (str[i] <= '9' && str[i] >= '0' && j < argc)
		{
			tab[j] = ft_char_to_int(str[i]);
			j++;
		}
		i++;
	}
	error = ft_check_tab(tab, argc);
	if (error)
		return (NULL);
	return (tab);
}