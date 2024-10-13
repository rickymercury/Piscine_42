/*
Assignment name  : ft_inc
Expected files   : ft_inc.c
Allowed functions: None
--------------------------------------------------------------------------------

Escreva uma função que receba um ponteiro para um inteiro e incremente o seu valor.

A função deve ser declarada da seguinte forma:

void	*ft_inc(int *a);

*/

void	*ft_inc(int *a)
{
    (*a)++;
}

/*
#include <stdio.h>

int main(void)
{
    int num = 42;

    printf("Antes de ft_dec: %d\n", num);
    ft_inc(&num);
    printf("Depois de ft_dec: %d\n", num);

    return (0);
}
*/