/*
Assignment name  : ft_swap
Expected files   : ft_swap.c
Allowed functions: 
--------------------------------------------------------------------------------

Escreva uma função que troca o conteúdo de dois inteiros cujos endereços são
passados como parâmetros.

A tua função deve ser declarada como se segue:

void	ft_swap(int *a, int *b);
*/


void	ft_swap(int *a, int *b)
{
	int		tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
#include <stdio.h>

int		main(void)
{
	int		a;
	int		b;

	a = 24;
	b = 42;
	printf("a : %d\n", a);
	printf("b : %d\n", b);
	ft_swap(&a, &b);
	printf("%s\n", "Result");
	printf("a : %d\n", a);
	printf("b : %d\n", b);
	return (0);
}
*/