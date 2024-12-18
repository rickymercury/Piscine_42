/*
Assignment name  : maff_revalpha
Expected files   : maff_revalpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que exiba o alfabeto revertido, com o tamanho das letras
alternadas, começando com minuscula, seguido por uma newline.

Example:

$> ./maff_revalpha | cat -e
zYxWvUtSrQpOnMlKjIhGfEdCbA$
 */

#include <unistd.h>

int   main(void)
{ 
    char  lowercase;
    char  uppercase; 
    
    lowercase = 'z';
    uppercase   = 'Y';
    
    while (lowercase >= 'a' && uppercase >= 'A')
    {
        write (1, &lowercase, 1);
        write (1, &uppercase, 1);
        lowercase -= 2;
        uppercase -= 2;
    }
    write (1, "\n", 1);
    return (0);
 }