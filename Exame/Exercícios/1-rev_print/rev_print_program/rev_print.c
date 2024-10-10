/*
Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que recebe uma string e exibe a string de forma invertida,
seguida de uma nova linha.

Se o número de parâmetros não for 1, o programa exibe apenas uma nova linha.

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$
*/

#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
			i++;
		while (i > 0)
		{
			write(1, &argv[1][i - 1], 1);
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}


/*
OUTPUT:

sh-5.2$ cc -Wall -Werror -Wextra rev_print.c 
sh-5.2$ ./a.out "zaz"
zaz
sh-5.2$ ./a.out "dub0 a POIL"
LIOP a 0bud
sh-5.2$ ./a.out 

sh-5.2$ 
*/