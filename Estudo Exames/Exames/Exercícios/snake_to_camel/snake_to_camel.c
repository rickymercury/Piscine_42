/*
 * Assignment name  : snake_to_camel
 * Expected files   : snake_to_camel.c
 * Allowed functions: malloc, free, realloc, write
 * --------------------------------------------------------------------------------

  Escreva um programa que receba uma única string no formato snake_case e a converta 
em uma string no formato lowerCamelCase.

  Uma string no formato snake_case é uma string onde cada palavra está em letras minúsculas, 
separadas por um sublinhado "_".

  Uma string no formato lowerCamelCase é uma string onde cada palavra começa com uma letra maiúscula,
exceto a primeira.

 * Examples:

 * $>./camel_to_snake "here_is_a_snake_case_word"
 * hereIsASnakeCaseWord
 * $>./camel_to_snake "hello_world" | cat -e
 * helloWorld$
 * $>./camel_to_snake | cat -e
 * $
*/

#include <unistd.h>

void    putchar(char c)
{
    write(1, &c, 1);
}

int     isLower(int c)
{
    return (c >= 'a' && c <= 'z');
}

int     toUpper(int c)
{
    if (isLower(c))
        return (c - 32);
    return (c);
}

int     main(int ac, char **av)
{
    if (ac < 2)
    {
        putchar('\n');
        return (0);
    }
    int     i;

    i = 0;
    while (av[1][i])
    {
        if (av[1][i] == '_')
        {
            i++;
            putchar(toUpper(av[1][i]));
        }
        else 
            putchar(av[1][i]);
        i++;
    }
    putchar('\n');
    return (0);
}