/*
Assignment name  : str_capitalizer
Expected files   : str_capitalizer.c
Allowed functions: write
--------------------------------------------------------------------------------

  Escreva um programa que receba uma ou várias strings e, para cada argumento,
capitalize o primeiro caractere de cada palavra (se for uma letra, obviamente),
coloque o restante em letras minúsculas e exiba o resultado na saída padrão,
seguido de um \n.

  Uma "palavra" é definida como uma parte de uma string delimitada por espaços/abas
ou pelo início/fim da string. Se uma palavra tiver apenas uma letra, ela deve ser
capitalizada.

  Se não houver argumentos, o programa deve exibir \n.

Example:

$> ./str_capitalizer | cat -e
$
$> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A First Little Test$
$> ./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" 
"     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
__second Test A Little Bit   Moar Complex$ But... This Is Not That Complex$
Okay, This Is The Last 1239809147801 But Not    The Least    T$
$>
*/

#include <unistd.h>

int main(int argc, char *argv[])
{
    int i;
    int j;

    if (argc < 2)
        write(1, "\n", 1);
    else
    {
        i = 1;
        while (i < argc)
        {
            j = 0;
            while (argv[i][j] != '\0')
            {
                if (j == 0 || (argv[i][j - 1] == ' ' || argv[i][j - 1] == '\t'))
                {
                    if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
                        argv[i][j] -= 32;
                }
                else if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
                    argv[i][j] += 32;
                write(1, &argv[i][j], 1);
                j++;
            }
            write(1, "\n", 1);
            i++;
        }
    }
    return (0);
}

/*
OUTPUT:

sh-5.2$ cc -Wall -Werror -Wextra str_capitalizer.c
sh-5.2$ ./a.out "a FiRSt LiTTlE TESt"
A First Little Test
sh-5.2$ ./a.out "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
__second Test A Little Bit   Moar Complex$
   But... This Is Not That Complex$
     Okay, This Is The Last 1239809147801 But Not    The Least    T$
*/