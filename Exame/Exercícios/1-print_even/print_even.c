/*
Assignment name: print_even
Expected files: print_even.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que exiba os caracteres de uma string em posições pares
(ou seja, 0, 2, 4, ...), seguidos por uma nova linha.

Se o número de parâmetros não for 1, o programa deve apenas exibir uma nova linha.

Exemplo:

$> ./print_even "42W3R9" | cat -e
42R$
$> ./print_even "Hello World!" | cat -e
Hlo ol!$
$> ./print_even | cat -e
$
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
            if (i % 2 == 0)
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
