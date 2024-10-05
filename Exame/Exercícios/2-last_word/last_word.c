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

int main(int argc, char **argv)
{
    int i;
    if(argc == 2)
    {
        i = 0;
        while(argv[1][i] != '\0')
            i++;
        i--;
        while(argv[1][i] == ' ' || argv[1][i] == '\t')
            i--;
        while(argv[1][i] != ' ' && argv[1][i] != '\t')
            i--;
        i++;
        while(argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
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