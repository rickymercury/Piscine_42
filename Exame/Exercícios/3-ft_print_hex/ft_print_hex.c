/*
Assignment name  : print_hex
Expected files   : print_hex.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que receba um número positivo (ou zero) expresso em base 10 e
o exiba em base 16 (letras minúsculas), seguido de uma nova linha.

Se o número de parâmetros não for 1, o programa deve exibir uma nova linha.

Examples:

$> ./print_hex "10" | cat -e
a$
$> ./print_hex "255" | cat -e
ff$
$> ./print_hex "5156454" | cat -e
4eae66$
$> ./print_hex | cat -e
$
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result);
}

void	ft_puthex(int n)
{
	char	*symbols;

	symbols = "0123456789abcdef";
	if (n >= 16)
	{
		ft_puthex(n / 16);
		ft_puthex(n % 16);
	}
	else
		ft_putchar(symbols[n % 16]);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_puthex(ft_atoi(av[1]));
	ft_putchar('\n');
	return (0);
}