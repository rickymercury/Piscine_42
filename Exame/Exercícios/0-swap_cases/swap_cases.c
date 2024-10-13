/*
Assignment name  : swap_cases
Expected files   : swap_cases.c
Allowed functions: None
--------------------------------------------------------------------------------

Escreva uma função que recebe uma string e inverte o case de todas as suas letras.
Outros caracteres permanecem inalterados.

A função deve ser declarada da seguinte forma:

char *swap_cases(char *str);

*/

char *swap_cases(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    return (str);
}

/*
#include <stdio.h>

int main(void)
{
    char str[] = "Hello1World!";
    
    printf("Original: %s\n", str);
    printf("Modified: %s\n", swap_cases(str));

    return 0;
}
*/