/*
Assignment name  : occ_z
Expected files   : occ_z.c
Allowed functions:
--------------------------------------------------------------------------------
Escreva uma função que retorne o número de ocorrências do caractere 'z' na string dada.

Sua função deve ser declarada da seguinte forma:

int occ_z(char *str);
*/

#include <stdio.h>

int	occ_z(char *str)
{
	int	count;

	count = 0;
	if (str == NULL)
		return (0);
	while (*str)
	{
		if (*str == 'z')
			count++;
		str++;
	}
	return (count);
}