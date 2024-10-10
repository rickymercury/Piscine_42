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

int     *ft_rrange(int start, int end)
{
    int i;
    int len;
    int *res;

    i = 0;
    len = abs(end - start) + 1;
    res = (int *)malloc(sizeof(int) * len);
    if (res == NULL) 
        return NULL;
    while(i < len)
    {
        if (start < end)
            res[i] = end--;
        else
            res[i] = end++;
        i++;
    }
    return (res);
}

/*
#include <stdio.h>

int     *ft_rrange(int start, int end);

int main(void)
{
    int *range;
    int i;

    // Exemplo 1: start = 3, end = 8
    range = ft_rrange(3, 8);
    i = 0;
    printf("Exemplo 1: start = 3, end = 8\n");
    while (i < 6)
    {
        printf("%d ", range[i]);
        i++;
    }
    printf("\n");
    free(range);

    // Exemplo 2: start = 8, end = 3
    range = ft_rrange(8, 3);
    i = 0;
    printf("Exemplo 2: start = 8, end = 3\n");
    while (i < 6)
    {
        printf("%d ", range[i]);
        i++;
    }
    printf("\n");
    free(range);

    // Exemplo 3: start = 5, end = 5
    range = ft_rrange(5, 5);
    i = 0;
    printf("Exemplo 3: start = 5, end = 5\n");
    while (i < 1)
    {
        printf("%d ", range[i]);
        i++;
    }
    printf("\n");
    free(range);

    return 0;
}
*/


/*
ft_rrange  ft_rrange.c
sh-5.2$ cc -Wall -Werror -Wextra ft_rrange.c
sh-5.2$ valgrind ./a.out 
==23362== Memcheck, a memory error detector
==23362== Copyright (C) 2002-2024, and GNU GPL'd, by Julian Seward et al.
==23362== Using Valgrind-3.23.0 and LibVEX; rerun with -h for copyright info
==23362== Command: ./a.out
==23362== 
Exemplo 1: start = 3, end = 8
8 7 6 5 4 3 
Exemplo 2: start = 8, end = 3
3 4 5 6 7 8 
Exemplo 3: start = 5, end = 5
5 
==23362== 
==23362== HEAP SUMMARY:
==23362==     in use at exit: 0 bytes in 0 blocks
==23362==   total heap usage: 4 allocs, 4 frees, 1,076 bytes allocated
==23362== 
==23362== All heap blocks were freed -- no leaks are possible
==23362== 
==23362== For lists of detected and suppressed errors, rerun with: -s
==23362== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
sh-5.2$ 
*/