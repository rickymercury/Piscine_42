/*
Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Escreva uma função que recebe uma string, a divide em palavras e retorna-as como
 um array de strings terminado em NULL.

Uma "palavra" é definida como uma parte de uma string delimitada por 
espaços/tabulações/novas linhas, ou pelo início/fim da string.

Sua função deve ser declarada da seguinte forma:

char    **ft_split(char *str);

*/

#include <stdio.h>
#include <stdlib.h>

int	ft_isspace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char	*ft_strncpy(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while (s2[i] && i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char	**ft_split(char *str)
{
	int		i;
	int		j;
	int		k;
	int		word_count;
	char	**result;

	i = 0;
	j = 0;
	k = 0;
	word_count = 0;

	while (str[i] != '\0')
	{
		while (str[i] && ft_isspace(str[i]))
			i++;
		if (str[i] != '\0')
			word_count++;
		while (str[i] && !ft_isspace(str[i]))
			i++;
	}
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (!result)
    { 
        return (NULL);
    }
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] && ft_isspace(str[i]))
			i++;
		j = i;
		while (str[i] && !ft_isspace(str[i]))
			i++;
		if (j < i)
		{
			result[k] = (char *)malloc(sizeof(char) * (i - j + 1));
            if (!result[k])
                return (NULL);
			ft_strncpy(result[k], &str[j], i - j);
			k++;
		}
	}
	result[k] = NULL;
	return (result);
}

/*
#include <stdio.h>

int main(void)
{
    char *str = "  Hello   world\t42  school\n";
    char **words = ft_split(str);
    int i = 0;

    while (words[i] != NULL)
    {
        printf("Palavra %d: '%s'\n", i + 1, words[i]);
        free(words[i]);
        i++;
    }
    free(words); 

    return 0;
}
*/

/*
sh-5.2$ cc -Wall -Werror -Wextra ft_split.c
sh-5.2$ valgrind ./a.out 
==46315== Memcheck, a memory error detector
==46315== Copyright (C) 2002-2024, and GNU GPL'd, by Julian Seward et al.
==46315== Using Valgrind-3.23.0 and LibVEX; rerun with -h for copyright info
==46315== Command: ./a.out
==46315== 
Palavra 1: 'Hello'
Palavra 2: 'world'
Palavra 3: '42'
Palavra 4: 'school'
==46315== 
==46315== HEAP SUMMARY:
==46315==     in use at exit: 0 bytes in 0 blocks
==46315==   total heap usage: 6 allocs, 6 frees, 1,086 bytes allocated
==46315== 
==46315== All heap blocks were freed -- no leaks are possible
==46315== 
==46315== For lists of detected and suppressed errors, rerun with: -s
==46315== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
*/