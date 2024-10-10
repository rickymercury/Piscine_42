/*
Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa chamado repeat_alpha que receba uma string e a exiba, repetindo
cada caractere alfabético tantas vezes quanto seu índice alfabético, seguido de uma 
nova linha.

'a' se torna 'a', 'b' se torna 'bb', 'e' se torna 'eeeee', etc...

O caso permanece inalterado.

Se o número de argumentos não for 1, exiba apenas uma nova linha.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
*/

#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	repeat;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			repeat = 1;
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				repeat = argv[1][i] - 64;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				repeat = argv[1][i] - 96;
			while (repeat >= 1)
			{
				write(1, &argv[1][i], 1);
				repeat--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}


/*
OUTPUT:

sh-5.2$ cc -Wall -Werror -Wextra repeat_alpha.c 
sh-5.2$ ./a.out "abc"
abbccc
sh-5.2$ ./a.out "Alex"
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx
sh-5.2$ ./a.out "abacadaba 42!"
abbacccaddddabba 42!
sh-5.2$ ./a.out 

*/