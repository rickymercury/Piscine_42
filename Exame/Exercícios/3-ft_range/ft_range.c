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

int     *ft_range(int start, int end)
{
    int i;
    int len;
    int *res;

    i = 0;
    len = abs(end - start) + 1;
    res = (int *)malloc(sizeof(int) * len);
    if (!res)
        return (NULL);
    while (i < len)
    {
        if (start <= end)
            res[i] = start++;
        else
            res[i] = start--;
        i++;
    }
    return (res);
}

/*
int main(void)
{
    int *range;
    int i, len;

    // Exemplo 1: start < end
    printf("Exemplo 1: start = 3, end = 8\n");
    range = ft_range(3, 8);
    len = abs(8 - 3) + 1;
    for (i = 0; i < len; i++)
        printf("%d ", range[i]);
    printf("\n");
    free(range);

    // Exemplo 2: start > end
    printf("Exemplo 2: start = 8, end = 3\n");
    range = ft_range(8, 3);
    len = abs(3 - 8) + 1;
    for (i = 0; i < len; i++)
        printf("%d ", range[i]);
    printf("\n");
    free(range);

    // Exemplo 3: start == end
    printf("Exemplo 3: start = 5, end = 5\n");
    range = ft_range(5, 5);
    len = abs(5 - 5) + 1;  // Quando start == end, len = 1
    for (i = 0; i < len; i++)
        printf("%d ", range[i]);
    printf("\n");
    free(range);

    return 0;
}
*/

/*
sh-5.2$ valgrind ./a.out 
==22740== Memcheck, a memory error detector
==22740== Copyright (C) 2002-2024, and GNU GPL'd, by Julian Seward et al.
==22740== Using Valgrind-3.23.0 and LibVEX; rerun with -h for copyright info
==22740== Command: ./a.out
==22740== 
Exemplo 1: start = 3, end = 8
3 4 5 6 7 8 
Exemplo 2: start = 8, end = 3
8 7 6 5 4 3 
Exemplo 3: start = 5, end = 5
5 
==22740== 
==22740== HEAP SUMMARY:
==22740==     in use at exit: 0 bytes in 0 blocks
==22740==   total heap usage: 4 allocs, 4 frees, 1,076 bytes allocated
==22740== 
==22740== All heap blocks were freed -- no leaks are possible
==22740== 
==22740== For lists of detected and suppressed errors, rerun with: -s
==22740== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
*/