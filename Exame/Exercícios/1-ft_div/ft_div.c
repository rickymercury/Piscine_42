/*
Assignment name  : ft_div
Expected files   : ft_div.c
Allowed functions:
--------------------------------------------------------------------------------

Escreva uma função que receba dois parâmetros: um ponteiro para um inteiro e um
inteiro.

Essa função divide o segundo parâmetro, um inteiro, ao inteiro apontado pelo
primeiro parâmetro (o ponteiro).

Sua função deve ser declarada da seguinte forma:

void	ft_div(int a, int *ptr);

*/

void    ft_div(int a, int *ptr)
{
    *ptr /= a;
}

/*
#include <stdio.h>

int main(void)
{
    int ptr = 10;
    int div_value = 5;

    printf("Antes de ft_add: %d\n", ptr);
    ft_div(div_value, &ptr);
    printf("Depois de ft_add: %d\n", ptr);

    return (0);
}
*/