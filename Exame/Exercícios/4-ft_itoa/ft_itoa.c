/*
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Escreva uma função que recebe um inteiro e o converte numa string terminada em
nulo. 

A função retorna o resultado num array de caracteres que deve ser alocada.

A função deve ser declarada da seguinte forma:

char	*ft_itoa(int nbr);

*/

#include <stdio.h>
#include <stdlib.h>

int	get_num_len(int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		len++;
	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char *ft_itoa(int nbr)
{
    int len;
    char *result;
    long num;                                          

    num = nbr;                                         
    len = get_num_len(nbr);
    result = (char *)malloc(sizeof(char) * (len + 1));
    if (!result)
        return (NULL);
    result[len] = '\0';
    if (num == 0)
    {
        result[0] = '0';
        return (result);
    }
    if (num < 0)
    {
        result[0] = '-';
        num = -num;
    }
    while (num != 0)
    {
        result[--len] = (num % 10) + '0';
        num /= 10;
    }
    return (result);
}

/*
#include <stdio.h>

int main(void)
{
    int num1 = 42;
    int num2 = -12345;
    int num3 = 0;
    int num4 = -2147483648;

    char *str1 = ft_itoa(num1);
    char *str2 = ft_itoa(num2);
    char *str3 = ft_itoa(num3);
    char *str4 = ft_itoa(num4);

    printf("num1: %d -> %s\n", num1, str1);
    printf("num2: %d -> %s\n", num2, str2);
    printf("num3: %d -> %s\n", num3, str3);
    printf("num4: %d -> %s\n", num4, str4);

    free(str1);
    free(str2);
    free(str3);
    free(str4);

    return 0;
}
*/


/*
sh-5.2$ valgrind ./a.out 
==43830== Memcheck, a memory error detector
==43830== Copyright (C) 2002-2024, and GNU GPL'd, by Julian Seward et al.
==43830== Using Valgrind-3.23.0 and LibVEX; rerun with -h for copyright info
==43830== Command: ./a.out
==43830== 
num1: 42 -> 42
num2: -12345 -> -12345
num3: 0 -> 0
num4: -2147483648 -> -2147483648
==43830== 
==43830== HEAP SUMMARY:
==43830==     in use at exit: 0 bytes in 0 blocks
==43830==   total heap usage: 5 allocs, 5 frees, 1,048 bytes allocated
==43830== 
==43830== All heap blocks were freed -- no leaks are possible
==43830== 
==43830== For lists of detected and suppressed errors, rerun with: -s
==43830== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
*/