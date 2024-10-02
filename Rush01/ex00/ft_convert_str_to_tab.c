/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_str_to_tab.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 23:04:17 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/02 08:05:21 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_check_digit_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			// Se o próximo caractere é um espaço, avançamos dois caracteres (dígito + espaço)
			if (str[i + 1] == ' ')
				i += 2;
			// Se o próximo caractere é nulo, chegamos ao fim, tudo certo
			else if (str[i + 1] == '\0')
				return (0);
			// Se o próximo caractere não for espaço nem nulo, erro
			else
				return (1);
		}
		else
			return (1); // Se o caractere atual não for dígito, erro
	}
	return (0); // Tudo foi validado corretamente
}


int	ft_check_tab(int *tab, int size)
{
	int	max_value;
	int	i;

	i = 0;
	max_value = size / 4;
	while (i < size)
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
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9' && j < argc)
		{
			tab[j] = ft_char_to_int(str[i]);
			j++;
		}
		i++;
	}
	error = ft_check_tab(tab, argc);
	if (error)
	{
		free(tab);
		return (NULL);
	}
	return (tab);
}