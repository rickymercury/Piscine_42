/*
Assignment name  : print_interval
Expected files   : print_interval.c
Allowed functions:
--------------------------------------------------------------------------------

Escreva um programa que imprima os caracteres de uma string, cada um em uma nova
linha, com as seguintes regras:

    Se a posição do índice do caractere for um múltiplo de 3, imprime '3' em vez
	do caractere.

    Se a posição do índice do caractere for um múltiplo de 5, imprime '5' em vez
	do caractere.

    Se a posição do índice do caractere for um múltiplo de 3 e um múltiplo de 5,
	imprime '5' em vez do caractere.

Exemplo:

$>./print_interval "abcde"
ab3d5
$>./print_interval "Hello, World"
He3l53 W35l3
$>./print_interval "42 is awesome!"
423i53aw35o3e!
$>./print_interval "Print this!"
Pr3n53th35!
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if ((i + 1) % 3 == 0 && (i + 1) % 5 == 0)
				write(1, "5", 1);
			else if ((i + 1) % 3 == 0)
				write(1, "3", 1);
			else if ((i + 1) % 5 == 0)
				write(1, "5", 1);
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

