/*
Assignment name  : aff_a
Expected files   : aff_a.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que receba uma string e exiba o primeiro caractere 'a' que
encontrar nela, seguido de uma nova linha. 

Se não houver caracteres 'a' na string, o programa apenas escreve uma nova linha. 

Se o número de parâmetros não for 1, o programa exibe 'a' seguido de uma nova
linha.

Example:
$> ./aff_a "abc" | cat -e
a$
$> ./aff_a "dubO a POIL" | cat -e
a$
$> ./aff_a "zz sent le poney" | cat -e
$
$> ./aff_a | cat -e
a$
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	
	if (argc != 2)
    {
		write(1, "a\n", 2);
        return (0);
    }
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == 'a')
		{
			write(1, "a\n", 2);
			return (0);
		}
		i++;
	}
    write(1, "\n", 1);
	return (0);
}

