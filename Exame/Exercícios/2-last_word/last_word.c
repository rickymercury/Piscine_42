/*
Assignment name  : last_word
Expected files   : last_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que receba uma string e exiba sua última palavra seguida de
um '\n'.

Uma palavra é uma seção da string delimitada por espaços/abas ou pelo início/fim
da string.

Se o número de parâmetros não for 1, ou se não houver palavras, exiba uma nova
linha.

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
	if (argc == 2)
	{
		int i = 0;
		int j = 0;

		while(argv[1][i])
		{
			if (argv[1][i] == 32 && argv[1][i + 1] >= 33)
				j = i + 1;
			i++;
		}
		while(argv[1][j])
		{
			write(1, &argv[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return(0);
}


/*
OUTPUT:

sh-5.2$ cc -Wall -Werror -Wextra last_word.c 
sh-5.2$ ./a.out "FOR PONY"
PONY
sh-5.2$ ./a.out "this        ...       is sparta, then again, maybe    not"
not
sh-5.2$ ./a.out "  "
  
sh-5.2$ ./a.out "a" "b"

sh-5.2$ ./a.out "  lorem,ipsum  "
lorem,ipsum
*/