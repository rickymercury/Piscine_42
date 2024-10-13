/*
Assignment name  : rstr_capitalizer
Expected files   : rstr_capitalizer.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que receba uma ou mais strings e, para cada argumento,
coloque o último caractere que é uma letra de cada palavra em maiúsculas e o
restante em minúsculas, exibindo então o resultado seguido de um \n.

Uma palavra é uma seção de uma string delimitada por espaços/abas ou pelo
início/fim da string. Se uma palavra tiver uma única letra, ela deve ser capitalizada.

Uma letra é um caractere do conjunto [a-zA-Z].

Se não houver parâmetros, exibe \n.

Examples:

$> ./rstr_capitalizer | cat -e
$
$> ./rstr_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A firsT littlE tesT$
$> ./rstr_capitalizer "SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay,
	this is the last 1239809147801 but not    the least    t" | cat -e
seconD tesT A littlE biT   moaR compleX$
   but... thiS iS noT thaT compleX$
		okay, thiS iS thE lasT 1239809147801 buT noT    thE leasT    T$
$>

*/

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;

    if (argc > 1)
    {
        i = 1;
        while (i < argc)
        {
            j = 0;
            while (argv[i][j] != '\0')
            {
                if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
                    argv[i][j] += 32;
                if ((argv[i][j] >= 'a' && argv[i][j] <= 'z') 
                    && (argv[i][j + 1] == ' ' || argv[i][j + 1] == '\t' || argv[i][j + 1] == '\0'))
                    argv[i][j] -= 32;
                write (1, &argv[i][j], 1);
                j++;
            }
            write(1, "\n", 1);
            i++;
        }
    }
    return (0);
}


