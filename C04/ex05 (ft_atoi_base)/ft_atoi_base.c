/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:44:37 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/23 22:46:52 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int is_valid_base(char *base)
{
    int i;
    int j;
    int base_len;

    i = 0;
    base_len = ft_strlen(base);
    if (base_len < 2)
        return (0);
     while (i < base_len)
    {
        if (base[i] == '-' || base[i] == '+' || (base[i] < 32 || base[i] > 126))
            return (0);
        j = i + 1;
        while (j < base_len)
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

int	is_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{   
        int base_len;
	int	i;
	int	sign;
	long int number;


	i = 0;
	number = 0;
	sign = 1;
	if (!is_valid_base(base))
		return (0);
        base_len = ft_strlen(base);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
            sign = -sign;
		i++;
	}
	while (is_base(str[i], base) != -1)
	{
		number = (number * base_len) + (is_base(str[i], base));
		i++;
	}
	return (number * sign);
}

/*
#include <stdio.h>

int main()
{
    char *base2 = "01"; // Base binária
    char *base8 = "01234567"; // Base octal
    char *base10 = "0123456789"; // Base decimal
    char *base16 = "0123456789ABCDEF"; // Base hexadecimal
    char *invalid_base1 = "01+2"; // Base inválida (contém +)
    char *invalid_base2 = ""; // Base vazia
    char *invalid_base3 = "1"; // Base com apenas um caractere
    char *invalid_base4 = "0123 456"; // Base inválida (contém espaço)
    
    printf("Base 2, \"1010\": %d\n", ft_atoi_base("1010", base2)); // Esperado: 10
    printf("Base 8, \"17\": %d\n", ft_atoi_base("17", base8)); // Esperado: 15
    printf("Base 10, \"123\": %d\n", ft_atoi_base("123", base10)); // Esperado: 123
    printf("Base 16, \"1A\": %d\n", ft_atoi_base("1A", base16)); // Esperado: 26
    printf("Base inválida, \"1010\": %d\n", ft_atoi_base("1010", invalid_base1)); // Esperado: 0
    printf("Base vazia: %d\n", ft_atoi_base("123", invalid_base2)); // Esperado: 0
    printf("Base de tamanho 1: %d\n", ft_atoi_base("123", invalid_base3)); // Esperado: 0
    printf("Base com espaço: %d\n", ft_atoi_base("123", invalid_base4)); // Esperado: 0
    
    return 0;
}
*/