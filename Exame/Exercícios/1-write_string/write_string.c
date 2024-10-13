/*
Assignment name  : write_string
Expected files   : write_string.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva uma função que exiba uma string na saída padrão.

O ponteiro passado para a função contém o endereço do primeiro caractere da string.

Sua função deve ser declarada da seguinte forma:

void	write_string(char *str);

*/

#include <unistd.h>

void	write_string(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}