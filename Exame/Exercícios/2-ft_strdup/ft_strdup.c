/*
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduza o comportamento da função strdup (man strdup).

Sua função deve ser declarada da seguinte forma:

char    *ft_strdup(char *src);
*/

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *dest;
	int len;
	int i;

	len = 0;
	while (src[len])
		len++;
	dest = malloc(sizeof(*dest) * len + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int main() 
{
	char *str = "Benfica";
	char *duplicated_str;

	duplicated_str = ft_strdup(str);
	printf("%s\n", duplicated_str);

	free(duplicated_str);
	return 0;
}
*/


/*
OUTPUT:

sh-5.2$ cc -Wall -Werror -Wextra ft_strdup.c 
sh-5.2$ ./a.out 
Benfica
sh-5.2$ valgrind ./a.out 
==10529== Memcheck, a memory error detector
==10529== Copyright (C) 2002-2024, and GNU GPL'd, by Julian Seward et al.
==10529== Using Valgrind-3.23.0 and LibVEX; rerun with -h for copyright info
==10529== Command: ./a.out
==10529== 
Benfica
==10529== 
==10529== HEAP SUMMARY:
==10529==     in use at exit: 0 bytes in 0 blocks
==10529==   total heap usage: 2 allocs, 2 frees, 1,032 bytes allocated
==10529== 
==10529== All heap blocks were freed -- no leaks are possible
==10529== 
==10529== For lists of detected and suppressed errors, rerun with: -s
==10529== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
sh-5.2$ 
*/