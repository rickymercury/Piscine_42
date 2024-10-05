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

#include <stdlib.h>

int			ft_isspace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

int		count_words(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		// move to the beggining of a new word
		while (*str && ft_isspace(*str))
			str++;
		if (*str && !ft_isspace(*str))
		{
			count++;
			// move to the next whitespace
			while (*str && !ft_isspace(*str))
				str++;
		}
	}
	return (count);
}

char	*malloc_word(char *str)
{
	char *word;
	int	i;

	i = 0;
	while (str[i] && !ft_isspace(str[i]))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && !ft_isspace(str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	char **arr = (char **)malloc(sizeof(char *) * (count_words(str) + 1));

	int i = 0;
	while (*str)
	{
		while (*str && ft_isspace(*str))
			str++;
		if (*str && !ft_isspace(*str))
		{
			arr[i] = malloc_word(str);
			i++;
			while (*str && !ft_isspace(*str))
				str++;
		}
	}
	arr[i] = NULL;
	return (arr);
}

// ou 

#include <stdio.h>
#include <stdlib.h>

int isdelimiter(char c)
{
    if(c == ' ' || c == '\t' || c == '\n')
        return 1;
    return 0;
}

int count_words(char *str)
{
    int isword = 0;
    int count = 0;
    int i = 0;

    while (str[i])
    {
        if(isdelimiter(str[i]))
        {
            isword = 0;
        }
        else if(isword == 0)
        {
            isword = 1;
            count++;
        }
        i++;
    }
    return count;
}

char *copy_words(char *str, int start, int len)
{
    char *word = malloc(sizeof(char) * (len + 1));
    if(!word)
        return NULL;
    int i = 0;
    while (i < len)
    {
        word[i] = str[start + i];
        i++;
    }
    word[len] = '\0';
    return word;
}

char **ft_split(char *str)
{
    int words = count_words(str);
    char **result = malloc(sizeof(char *) * (words + 1));

    if(!result)
        return NULL;
    int i = 0;
    int word_index = 0;
    while (str[i])
    {
        while (str[i] && isdelimiter(str[i]))
        {
            i++;
        }
        if(str[i])
        {
            int start = i;
            int len = 0;
            while (str[i] && !isdelimiter(str[i]))
            {
                i++;
                len++;
            }
            result[word_index] = copy_words(str, start, len);
            if(!result)
                return NULL;
            word_index++;
        }
    }
    result[word_index] = NULL;
    return result;
}

int main()
{
    char str[] = "hello \n how  are u \t come    to bocal   ";
    char **result = ft_split(str);
    int i = 0;
    if(result)
    {
        while (result[i])
        {
            printf("%s", result[i]);
            i++;
        }
    }
}