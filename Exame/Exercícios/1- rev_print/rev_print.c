/*
Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que recebe uma string e exibe a string de forma invertida, seguida de uma nova linha.

Se o número de parâmetros não for 1, o programa exibe apenas uma nova linha.

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$
*/

#include <unistd.h>
int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return i;
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i;

        i = ft_strlen(av[1]) - 1;
        while (i >= 0)
        {
            write(1, &av[1][i], 1);
            i--;
        }
    }
    write(1, "\n", 1);
}