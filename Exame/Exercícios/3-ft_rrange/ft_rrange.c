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

int *ft_rrange(int start, int end)
{
    int size;
    int i;
    int *rrange;

    if(start >= end)
        size = start - end + 1;
    else
        size = end - start + 1;
    
    rrange = malloc(sizeof(int) * (size));

    i = 0;
    if (start >= end)
    {
        while (start >= end)
        {
            rrange[i++] = end++;
        }
    }
    else
    {
        while (start <= end)
        {
            rrange[i++] = end--;
        }
    }
    return rrange;
}

/*
#include <stdio.h>
int main()
{
    int start = 3;
    int end = -4;
    int *arr = ft_rrange(start, end);
    int i = 0;
    int size;
    if(start >= end)
        size = start - end + 1;
    else
        size = end - start + 1;
    while(i < size)
    {
        printf("%d", arr[i]);
        i++;
    }
}
*/

// ou

int *ft_rrange(int start, int end)
{
    int size;
    int i;
    int *rrange;

    if(start >= end)
        size = start - end + 1;
    else
        size = end - start + 1;
    
    rrange = malloc(sizeof(int) * (size));

    i = 0;
    if (start >= end)
    {
        while (start >= end)
        {
            rrange[i++] = end++;
        }
    }
    else
    {
        while (start <= end)
        {
            rrange[i++] = end--;
        }
    }
    return rrange;
}