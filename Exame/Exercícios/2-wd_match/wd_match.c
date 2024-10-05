/*
Assignment name  : wdmatch
Expected files   : wdmatch.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que receba duas strings e verifique se é possível escrever a
 primeira string com caracteres da segunda string, respeitando a ordem em que esses
  caracteres aparecem na segunda string.

Se for possível, o programa exibirá a string, seguida de uma nova linha; caso contrário,
 exibirá simplesmente uma nova linha.

Se o número de argumentos não for 2, o programa exibirá uma nova linha.

Examples:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "forty two" "qfqfsoudf arzgrsayns tsryegftdgs sjytwdekuooixq " | cat -e
forty two$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$
*/

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    
    if (argc == 3)
    {
        j = 0;
        i = 0;
        while (argv[2][j])
        {
            if (argv[1][i] == argv[2][j])
                i++;
            j++;
        }
        if (argv[1][i] == '\0')
        {
            i = 0;
            while(argv[1][i])
            {
                write(1, &argv[1][i], 1);
                i++;
            }
        }
    }
    write(1, "\n", 1);
    return(0);
}

// ou

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    if(argc == 3)
    {
        i = 0;
        j = 0;
        while(argv[1][i] != '\0' && argv[2][j] != '\0')
        {
            if(argv[1][i] == argv[2][j])
                i++;
            j++;
        }
        if(argv[1][i] == '\0')
        {
            i = 0;
            while(argv[1][i] != '\0')
            {
                write(1, &argv[1][i], 1);
                i++;
            }
        }
    }
    write(1, "\n", 1);
}