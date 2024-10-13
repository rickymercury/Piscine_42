/*
Assignment name  : title
Expected files   : title.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que receba uma ou mais strings e, para cada argumento, coloque
o primeiro caractere de cada palavra (se for uma letra) em maiúscula, seguido de
uma nova linha (\n).

Uma palavra é uma seção da string delimitada por espaços/tabs ou pelo início/fim
da string. 
Se uma palavra tiver apenas uma letra, ela deve ser capitalizada.

Se não houver parâmetros, exibe apenas uma nova linha (\n).

Examples:

$> ./title | cat -e
$
$> ./title "no NO no no no!" | cat -e
No NO No No No!$
$> ./title "pjldfjslogjlsj" | cat -e
Pjldfjslogjlsj$
$> ./title "hEllO World! 42 Is aWesoMe!" | cat -e
HEllO World! 42 Is AWesoMe!$
*/

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;

    if (argc >= 2)
    {
        i = 1;
        while (i < argc)
        {
            j = 0;
            if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
                argv[i][j] -= 32;
            write(1, &argv[i][j], 1);
            j++;
            while (argv[i][j])
            {
                if ((argv[i][j - 1] == ' ' || argv[i][j - 1] == '\t') 
                   && argv[i][j] >= 'a' && argv[i][j] <= 'z')
                    argv[i][j] -= 32; 
                write(1, &argv[i][j], 1);
                j++;
            }
            write(1, "\n", 1);
            i++;
        }
    }
    return (0);
}