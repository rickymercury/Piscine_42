/*
 * Assignment name  : camel_to_snake
 * Expected files   : camel_to_snake.c
 * Allowed functions: malloc, free, realloc, write
 * --------------------------------------------------------------------------------
  
  Escreva um programa que receba uma única string no formato lowerCamelCase e a converta 
em uma string no formato snake_case.

  Uma string no formato lowerCamelCase é uma string onde cada palavra começa com uma letra 
maiúscula, exceto a primeira.

  Uma string no formato snake_case é uma string onde cada palavra está em letras minúsculas, 
separadas por um sublinhado "_".

 * Examples:
 * 
 * $>./camel_to_snake "hereIsACamelCaseWord"
 * here_is_a_camel_case_word
 * $>./camel_to_snake "helloWorld" | cat -e
 * hello_word$
 * $>./camel_to_snake | cat -e
 * $
*/

#include <unistd.h>

void    putchar(char c)
{
    write(1, &c, 1);
}

int     isUpper(int c)
{
    return (c >= 'A' && c <= 'Z');
}

int     toLower(int c)
{
    if (isUpper(c))
        return (c + 32);
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
        if (isUpper(av[1][i]) && i != 0)
            putchar('_');
        putchar(toLower(av[1][i]));
        i++;
    }
    putchar('\n');
    return (0);
}