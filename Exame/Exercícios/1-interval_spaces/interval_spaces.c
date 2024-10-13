/*
Assignment name  : interval_spaces
Expected files   : interval_spaces.c
Allowed functions: write
--------------------------------------------------------------------------------

Crie um programa que escreve três espaços em branco entre cada caractere de um argumento.

Se o número de argumentos for diferente de 2, o programa deve retornar uma nova linha.

$> ./interval_spaces "abc" | cat -e
a   b   c$
$> ./interval_spaces "coconut" | cat -e
c   o   c   o   n   u   t$
*/

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    if(argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            write(1, &argv[1][i], 1);
            if(argv[1][i + 1] != '\0')
                write(1, "   ", 3);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}