/*
Assignment name  : aff_first_param
Expected files   : aff_first_param.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que aceite strings como argumentos e exiba seu primeiro argumento, seguido de um \n.

Se o número de argumentos for menor que 1, o programa deve exibir \n.

Example:

$> ./aff_first_param vincent mit "l'ane" dans un pre et "s'en" vint | cat -e
vincent$
$> ./aff_first_param "j'aime le fromage de chevre" | cat -e
j'aime le fromage de chevre$
$> ./aff_first_param
$
*/

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	i = 0;
	
	if (argc < 2)
		write(1, "\n", 1);
	else
	{
		while(argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return(0);
}