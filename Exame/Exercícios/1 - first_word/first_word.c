/*
Assignment name  : first_word
Expected files   : first_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que receba uma string e exiba sua primeira palavra, seguida de uma nova linha.

Uma palavra é uma seção da string delimitada por espaços, tabulações ou pelo início/fim da string.

Se o número de parâmetros não for 1, ou se não houver palavras, simplesmente exiba uma nova linha.

Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...       is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
*/

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	
	i = 0;
	if (argc != 2)
		write (1, "\n", 1);
	if (argc == 2)
	{
		while (argv[1][i])
		{
			while (argv[1][i] == 32 || argv[1][i] >= 9 && argv[1][i] <= 13)
			{
				i++;
			}
			while (argv[1][i] != 32 && (argv[1][i] < 9 && argv[1][i] > 13) && argv[1][i] != '\0')
			{
				write (1, &argv[1][i], 1);
				i++;
			}
			write (1, "\n", 1);
		}
	}
	return (0);
}