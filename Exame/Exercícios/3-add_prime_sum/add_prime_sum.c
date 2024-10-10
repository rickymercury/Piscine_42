/*
Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Escreva um programa que recebe um número inteiro positivo como argumento e exibe
a soma de todos os números primos inferiores ou iguais a ele, seguida por uma
nova linha.

Se o número de argumentos não for 1, ou se o argumento não for um número positivo,
apenas exiba 0 seguido por uma nova linha.

Sim, os exemplos estão corretos.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

int	ft_atoi(char *str)
{
	int	result;

	result = 0;
	while (*str)
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result);
}

int	ft_is_prime(int nb)
{
	int	divisor;

	divisor = 2;
	if (nb < 2)
	    return (0);
	while (divisor <= nb / divisor)
	{
		if (nb % divisor == 0)
		    return (0);
		divisor++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	sum;
	int	n;

	sum = 0;
	if (argc != 2)
	{
		write(1, "0\n", 1);
		return (0);
	}
	n = ft_atoi(argv[1]);
	while (n > 1)
	{
		if (ft_is_prime(n))
			sum += n;
		n--;
	}
	ft_putnbr(sum);
	ft_putchar('\n');
}