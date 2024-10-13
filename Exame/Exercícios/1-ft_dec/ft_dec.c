/*
Assignment name  : ft_dec
Expected files   : ft_dec.c
Allowed functions: None
--------------------------------------------------------------------------------

Escreva uma função que receba um ponteiro para um inteiro e decremente o seu valor.

A função deve ser declarada da seguinte forma:

void	*ft_dec(int *a);

*/

void	*ft_dec(int *a)
{
    (*a)--;
}

/*
#include <stdio.h>

int main(void)
{
    int num = 42;

    printf("Antes de ft_dec: %d\n", num);
    ft_dec(&num);
    printf("Depois de ft_dec: %d\n", num);

    return (0);
}
*/
