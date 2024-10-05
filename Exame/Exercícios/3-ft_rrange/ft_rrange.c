/*
Assignment name  : ft_rrange
Expected files   : ft_rrange.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Escreva a seguinte função:

int *ft_rrange(int start, int end);

Ela deve alocar (com malloc()) um array de inteiros, preenchê-lo com valores
consecutivos que começam em end e terminam em start (incluindo start e end!), e
então retornar um ponteiro para o primeiro valor do array.

Exemplos:

    Com (1, 3), você retornará um array contendo 3, 2 e 1.
    Com (-1, 2), você retornará um array contendo 2, 1, 0 e -1.
    Com (0, 0), você retornará um array contendo 0.
    Com (0, -3), você retornará um array contendo -3, -2, -1 e 0.
*/


#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int *range;
	int i;
	int n;

	i = 0;
	if (start > end)
		return (ft_rrange(end, start));
	n = end - start + 1;
	range = (int *)malloc(sizeof(int) * n);
	if (range)
	{
		while (i < n)
		{
			range[i] = start;
			start++;
			i++;
		}
	}
	return (range);
}

/*
#include <stdio.h>

int	main(void)
{
	int	*tab;
	int	idx;
	int	start;
	int	end;
	int	size;

	idx = 0;
	start = -5;
	end = 5;
	tab = ft_rrange(start, end);
	size = ft_abs(end - start) + 1;
	while (idx < size)
	{
		printf(" [%i] ", tab[idx]);
		idx++;
	}
	printf("\n");
}
*/