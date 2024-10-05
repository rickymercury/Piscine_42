/*
Assignment name  : ft_add
Expected files   : ft_add.c
Allowed functions:
--------------------------------------------------------------------------------

Escreva uma função que receba dois parâmetros: um ponteiro para um inteiro e um inteiro.

Essa função adiciona o segundo parâmetro, um inteiro, ao inteiro apontado pelo primeiro parâmetro (o ponteiro).

Sua função deve ser declarada da seguinte forma:

void	ft_add(int *ptr, int number);

*/

void	ft_add(int *ptr, int number)
{
	*ptr += number;
}