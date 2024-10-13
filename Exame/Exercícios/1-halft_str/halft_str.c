/*
Assignment name  : halft_str
Expected files   : halft_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que receba como parâmetro uma ou mais cadeias de caracteres e
que exiba cada cadeia na ordem, um caractere a cada dois.

Esse programa deve exibir o resultado na saída padrão, seguido de uma quebra de linha.

A exibição sempre termina por uma quebra de linha. O programa deve retornar uma quebra
de linha se não houver nenhum parâmetro.

Examples:

$>./half_str "abc"
ac
$>
$>./half_str "test de phrase" "deuxieme test" "un avant dernier test" "" "enfin c est finis" |
ts eprs$
duim et$
u vn ene et$
$
efncetfns$
$>
$>./half_str "a btcfdceqf gehdiajikhllmgnaovpyqer srttuuvawcxayaz" "142637415869728395" "" | cat -e
abcdefghijklmnopqrstuvwxyz$
123456789$
$
$>
$>./half_str | cat -e
$
$>
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
            while (argv[i][j] != '\0')
            {
                if (j % 2 == 0)
                    write(1, &argv[i][j], 1);
                j++;
            }
            write(1, "\n", 1);
            i++;
        }
    }
    return (0);
}
