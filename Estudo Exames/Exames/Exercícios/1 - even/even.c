/*
Assignment name  : even
Expected files   : even.c
Allowed functions:
--------------------------------------------------------------------------------

Escreva um programa que imprima todos os dígitos pares de 0 a 10 na saída padrão,
seguidos de uma nova linha '\n'.


./even
0246810
*/

#include <unistd.h>

int main(void)
{
    write(1, "0246810", 7);
    write(1, "\n", 1); 

    return 0;
}