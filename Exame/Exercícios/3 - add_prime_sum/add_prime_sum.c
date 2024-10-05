/*
Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Escreva um programa que recebe um número inteiro positivo como argumento e exibe
a soma de todos os números primos inferiores ou iguais a ele, seguida por uma nova linha.

Se o número de argumentos não for 1, ou se o argumento não for um número positivo, apenas
exiba 0 seguido por uma nova linha.

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

int	ft_atoi(char *str)
{
	int sum;
	int i;
	int posneg;

	posneg = 1;
	i = 0;
	sum = 0;
	while (str[i] <= ' ')
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		posneg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum *= 10;
		sum += str[i] - '0';
		i++;
	}
	return (sum * posneg);
}

int	ft_is_prime(int nbr)
{
	int	div;

	div = 2;
	while (div <= nbr / 2)
	{
		if (nbr % div == 0)
			return (0);
		div++;
	}
	return (1);
}

void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr == -2147483648)
	{
		write(1, "-2", 2);
		nbr = (nbr + 2000000000) * -1;
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= 1;
	}
	if (nbr > 0)
	{
		ft_putnbr(nbr / 10);
		c = nbr % 10 + '0';
		write(1, &c, 1);
	}
}

int	main(int argc, char **argv)
{
	int	sum;
	int n;

	if (argc != 2)
	{
		write(1, "0\n", 2);
		return (0);
	}
	n = ft_atoi(argv[1]);
	if (n <= 0)
	{
		write(1, "0\n", 2);
		return (0);
	}
	sum = 0;
	while (n > 1)
	{
		if(ft_is_prime(n))
			sum += n;
		n--;
	}
	ft_putnbr(sum);
	write(1, "\n", 1);
}