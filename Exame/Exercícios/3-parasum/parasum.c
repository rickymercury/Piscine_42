/*Assignment name  : paramsum
Expected files   : paramsum.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que exiba o número de argumentos passados, seguido de uma 
nova linha.

Se não houver argumentos, exibe apenas um 0 seguido de uma nova linha.

Example:

$>./paramsum 1 2 3 5 7 24
6
$>./paramsum 6 12 24 | cat -e
3$
$>./paramsum | cat -e
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

int	main(int argc, char **argv)
{
	(void)argv;

	ft_putnbr(argc - 1);
	ft_putchar('\n');
	return (0);
}

/*
sh-5.2$ cc -Wall -Werror -Wextra parasum.c -o parasum
sh-5.2$ ./parasum 1 2 3 5 7 24
6
sh-5.2$ ./parasum 6 12 24
3
sh-5.2$ ./parasum 
0
sh-5.2$ 
*/