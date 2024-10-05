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

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_verif_char(char *str, char *symbol)
{
	while (str < symbol)
	{
		if (*str == *symbol)
			return (0);
		str++;
	}
	return (1);
}

void	ft_union(char **argv)
{
	int string;
	int	symbol;

	string = 0;
	while (string < 2)
	{
		symbol = 0;
		while (argv[string][symbol])
		{
			if (ft_verif_char(argv[0], &argv[string][symbol]))
				ft_putchar(argv[string][symbol]);
			symbol++;
		}
		string++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(&argv[1]);
	ft_putchar('\n');
	return (0);
}