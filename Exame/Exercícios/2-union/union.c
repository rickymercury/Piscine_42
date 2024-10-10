/*
Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que receba duas strings e exiba, sem duplicatas, os caracteres
 que aparecem em qualquer uma das strings.

A exibição será na ordem em que os caracteres aparecem na linha de comando e será
 seguida por uma nova linha.

Se o número de argumentos não for 2, o programa exibirá uma nova linha.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	tab[256] = {};

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			tab[(int)argv[1][i]] = 1;
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			tab[(int)argv[2][i]] = 1;
			i++;
		}
		i = 0;
		while (argv[1][i])
		{
			if (tab[(int)argv[1][i]] == 1)
			{
				write(1, &argv[1][i], 1);
				tab[(int)argv[1][i]] = 0;
			}
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (tab[(int)argv[2][i]] == 1)
			{
				write(1, &argv[2][i], 1);
				tab[(int)argv[2][i]] = 0;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}