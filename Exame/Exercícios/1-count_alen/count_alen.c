/*
Assignment name  : count_alen
Expected files   : count_alen.c
Allowed functions:
--------------------------------------------------------------------------------

Escreva uma função que retorne o comprimento de uma string até a primeira ocorrência
do caractere 'a'.

Se 'a' não estiver presente na string, ela retorna o comprimento total da string.

A função deve ser declarada da seguinte forma:

int	 count_alen(char *str);
*/

#include <stdlib.h>

int	count_alen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != 'a')
		i++;
	return (i);
}

/*
#include <stdio.h>

int main() {
    char str1[] = "Hello, World!";
    char str2[] = "Banana";

    printf("Length until 'a' in '%s': %d\n", str1, count_alen(str1));  // Saída: 13
    printf("Length until 'a' in '%s': %d\n", str2, count_alen(str2));  // Saída: 1

    return 0;
}
*/