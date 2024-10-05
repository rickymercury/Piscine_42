/*
Assignment name  : last_word
Expected files   : last_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que receba uma string e exiba sua última palavra seguida de um '\n'.

Uma palavra é uma seção da string delimitada por espaços/abas ou pelo início/fim da string.

Se o número de parâmetros não for 1, ou se não houver palavras, exiba uma nova linha.

Example:

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
*/

#include <unistd.h>

void	last_word(char *str)
{
	int i = 0;
	int start = 0;
	while (str[i])
		i++;
	while (i > 0 && (str[i - 1] == ' ' || str[i - 1] == '\t'))
		i--;
	start = i;
	while (start > 0 && str[start - 1] != ' ' && str[start - 1] != '\t')
		start--;
	while (start < i)
	{
		write(1, &str[start], 1);
		start++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}

/*
#include <unistd.h>

int		main(int argc, char *argv[])
{
	int		i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
			i++;
		i--;
		while (argv[1][i] <= 32)
			i--;
		while (argv[1][i] > 32)
			i--;
		i++;
		while (argv[1][i] > 32)
			write(1, &argv[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
*/