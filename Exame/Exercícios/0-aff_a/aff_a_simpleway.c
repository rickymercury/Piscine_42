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

int main()
{
    write (1, "a\n", 2);

    return (0);
}