/*
Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Escreva a seguinte função:

int *ft_range(int start, int end);

Ela deve alocar (com malloc()) um array de inteiros, preenchê-lo com valores
consecutivos que começam em start e terminam em end (incluindo start e end!), e
então retornar um ponteiro para o primeiro valor do array.

Exemplos:

    Com (1, 3), você retornará um array contendo 1, 2 e 3.
    Com (-1, 2), você retornará um array contendo -1, 0, 1 e 2.
    Com (0, 0), você retornará um array contendo 0.
    Com (0, -3), você retornará um array contendo 0, -1, -2 e -3.
    
*/

#include <stdlib.h>

int *ft_range(int start, int end)
{
	int i = 0;
	int len = abs((end - start)) + 1;
	int *res = (int *)malloc(sizeof(int) * len);
	
	while (i < len)
	{
		if (start < end)
		{
			res[i] = start;
			start++;
			i++;
		}
		else
		{
			res[i] = start;
			start--;
			i++;
		}
	}
        return (res);
}

/*
#include <stdio.h>

int main()
{
    int start = 4;
    int end = 7;
    int *arr = ft_range(start, end);
    int i = 0;
    int size;
    if(start >= end)
        size = start - end + 1;
    else
        size = end - start + 1;
    while (i < size)
    {
        printf("%d", arr[i]);
        i++;
    }
    
}
*/

// ou

#include <stdlib.h>

int *ft_range(int start, int end)
{
    int size;
    int *range;
    int i;

    if(start >= end)
        size = start - end + 1;
    else
        size = end - start + 1;
    
    range = malloc(sizeof(int) * (size));
    if(!range)
        return NULL;
    
    i = 0;
    if (start >= end)
    {
        while(start >= end)
        {
            range[i++] = start--;
        }
    }
    else
    {
        while (start <= end)
        {
            range[i++] = start++;
        }
    }
    return range;
}