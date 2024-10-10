/*
Assignment name  : alpha_mirror
Expected files   : alpha_mirror.c
Allowed functions: write
--------------------------------------------------------------------------------

   Escreva um programa chamado alpha_mirror que receba uma string e exiba essa string 
após substituir cada caractere alfabético pelo seu caractere alfabético oposto, seguido 
de uma nova linha.

'a' se torna 'z', 'Z' se torna 'A'
'd' se torna 'w', 'M' se torna 'N'

e assim por diante.

O case não deve ser alterado.

Se o número de argumentos não for 1, exiba apenas uma nova linha.

Examples:

$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$>
*/

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if(argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
                argv[1][i] = ('a' + 'z') - argv[1][i];
            else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                argv[1][i] = 'Z' - (argv[1][i] - 'A');
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}


/*
OUTPUT:

sh-5.2$ cc -Wall -Werror -Wextra alpha_mirror.c -o alpha_mirror
sh-5.2$ ./alpha_mirror "abc"
zyx
sh-5.2$ ./alpha_mirror "My horse is Amazing." 
Nb slihv rh Znzarmt.
sh-5.2$ ./alpha_mirror 

*/