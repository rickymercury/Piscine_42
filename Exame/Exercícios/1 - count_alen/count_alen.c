/*
Assignment name  : count_alen
Expected files   : count_alen.c
version 1        :
Allowed functions:
--------------------------------------------------------------------------------

Escreva uma função que retorne o comprimento de uma string até a primeira ocorrência
do caractere 'a'.

Se não houver 'a' presente na string, ela retorna o comprimento total da string.

Sua função deve ser declarada da seguinte forma:

int	 count_alen(char *str);
*/

#include <stdio.h>

int	count_alen(char *str)
{
	int	length;

	length = 0;
	while (str[length] && str[length] != 'a')
		length++;
	return (length);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("%d-", count_alen("a"));
	printf("%d-", count_alen("wwwwa"));
	printf("%d-", count_alen("www  0 qq a qqwo"));
	printf("%d-", count_alen("Nothing here"));
	return (EXIT_SUCCESS);
}
*/