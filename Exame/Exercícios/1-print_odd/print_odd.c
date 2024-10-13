/*
Assignment name  : print_odd
Expected files   : print_odd.c
Allowed functions: write
--------------------------------------------------------------------------------
Escreva um programa que receba uma string e exiba os caracteres que estão em
posições ímpares (considerando que a primeira posição é 0), seguidos por uma nova
linha.

Example:

./a.out "Hello World!" | cat -e
el ol!$
./a.out "abcdef" | cat -e
bdf$
./a.out "123456789" | cat -e
2468$
*/

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i] != '\0') 
        {
            if (i % 2 == 1)
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
