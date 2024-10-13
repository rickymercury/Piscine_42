/*
Assignment name  : ft_strlen
Expected files   : ft_strlen.c
Allowed functions:
--------------------------------------------------------------------------------

Escreva uma função que retorne o comprimento de uma string.

Sua função deve ser declarada da seguinte forma:

int	ft_strlen(char *str);
*/

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
#include <stdio.h>

int main(void)
{
    char *str = "Benfica";

    int len = ft_strlen(str);

    printf("O comprimento da string \"%s\" é: %d\n", str, len); // Imprime o comprimento
    return 0;
}
*/

