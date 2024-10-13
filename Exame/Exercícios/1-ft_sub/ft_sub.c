/*
Assignment name  : ft_sub
Expected files   : ft_sub.c
Allowed functions:
--------------------------------------------------------------------------------

Escreva uma função que receba dois parâmetros: um ponteiro para um inteiro e um
inteiro.

Essa função subtrai o segundo parâmetro, um inteiro, ao inteiro apontado pelo
primeiro parâmetro (o ponteiro).

Sua função deve ser declarada da seguinte forma:

void	ft_sub(int a, int *ptr);

*/

void    ft_sub(int a, int *ptr)
{
    *ptr -= a;
}

/*
#include <stdio.h>

int main(void)
{
    int ptr = 10;
    int sub_value = 5;

    printf("Antes de ft_add: %d\n", ptr);
    ft_sub(sub_value, &ptr);
    printf("Depois de ft_add: %d\n", ptr);

    return (0);
}
*/