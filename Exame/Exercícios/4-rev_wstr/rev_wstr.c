/*
Assignment name  : rev_wstr
Expected files   : rev_wstr.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Escreva um programa que recebe uma string como parâmetro e imprime suas palavras na 
ordem inversa.

Uma "palavra" é uma parte da string delimitada por espaços e/ou tabulações, ou pelo
 início/fim da string.

Se o número de parâmetros for diferente de 1, o programa exibirá '\n'.

Nos parâmetros que serão testados, não haverá "espaços adicionais" (ou seja, não 
haverá espaços no início ou no final da string, e as palavras sempre estarão separadas
por exatamente um espaço).

Examples:

$> ./rev_wstr "le temps du mepris precede celui de l'indifference" | cat -e
l'indifference de celui precede mepris du temps le$
$> ./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "il contempla le mont" | cat -e
mont le contempla il$
$> ./rev_wstr | cat -e
$
$>
*/


#include <unistd.h>

void		rev_wstr(char *s, int first)
{
	int		start;
	int		i;

	i = 0;
	if (s[i])
	{
		while (s[i] && (s[i] == ' ' || s[i] == '\t'))
			i++;
		if (!s[i])
			return ;
		start = i;
		while (s[i] && s[i] != ' ' && s[i] != '\t')
			i++;
		rev_wstr(&s[i], 0);
		write(1, &s[start], i - start);
		if (!first)
			write(1, " ", 1);
	}
}

int			main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[1], 1);
	write(1, "\n", 1);
	return (0);
}