/*
Assignment name  : count_words
Expected files   : count_words.c
Allowed functions:
--------------------------------------------------------------------------------

Escreva uma função que recebe uma string como parâmetro, a divide em palavras e
retorna um inteiro representando o número de palavras.

Uma "palavra" é definida como uma parte de uma string delimitada por espaços ou
pelo início/fim da string.

Sua função deve ser declarada da seguinte forma:

int	 count_words(char *str);

*/

int count_words(char *str)
{
    int i;
    int in_word;
    int count;

    i = 0;
    in_word = 1;
    count = 0;
    while (str[i])
    {
        if (str[i] == ' ' && in_word == 0)
            in_word = 1;
        else if (str[i] != ' ' && in_word)
        {
            in_word = 0;
            count++;
        }
        i++;
    }
    return (count);
}

// OU


#include <stdio.h>

int count_words(char *str)
{
    int i = 0;
    int isword = 0;
    int count = 0;
    while (str[i])
    {
        if(str[i] == ' ')
        {
            isword = 0;
        }
        else if(isword == 0)
        {
            count++;
            isword = 1;
        }
        i++;
    }
    return count;
}

/*
int main()
{
    char str[] = "wa drari golo meay a";
    printf("%d", count_words(str));
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d", count_words(argv[1]));
	return (EXIT_SUCCESS);
}
*/