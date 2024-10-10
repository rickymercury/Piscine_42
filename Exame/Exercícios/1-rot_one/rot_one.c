/*
Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que receba uma string e a exiba, substituindo cada uma de suas 
letras pela próxima na ordem alfabética.

'z' se torna 'a' e 'Z' se torna 'A'. O caso permanece inalterado.

A saída será seguida de uma nova linha (\n).

Se o número de argumentos não for 1, o programa exibe uma nova linha (\n).

Example:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		while(argv[1][i])
		{
			if ((argv[1][i] >= 'A' && argv[1][i] <= 'Y') 
			    || (argv[1][i] >= 'a' && argv[1][i] <= 'y'))
				argv[1][i] += 1;
			else if (argv[1][i] == 'z' || argv[1][i] == 'Z')
				argv[1][i] -= 25;
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}