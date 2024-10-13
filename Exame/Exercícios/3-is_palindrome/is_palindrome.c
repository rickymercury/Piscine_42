/*
Assignment name  : is_palindrome
Expected files   : is_palindrome.c
version 1        :
Allowed functions: write
--------------------------------------------------------------------------------
Escreva um programa que receba uma string como parâmetro e, se ela for um
palíndromo, a exiba.

Se o número de argumentos não for 1 ou se a string não for um palíndromo, o programa
exibirá uma nova linha '\n'.

Um palíndromo é uma palavra, frase ou sequência de caracteres que é lida da mesma
forma de trás para frente.

Example:

$>./is_palindrome "aabbaa"
aabbaa


$>./is_palindrome "one" "two"
$
$>

$>./is_palindrome "" | cat -e
$
$>
*/

#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int left;
        int right;

        left = 0;
        right = 0;
        while (argv[1][right] != '\0')
            right++;
        right--;
        while (left < right)
        {
            if (argv[1][left] != argv[1][right])
            {
                write(1, "\n", 1);
                return (0);
            }
            left++;
            right--;
        }
        int i = 0;
        while (argv[1][i] != '\0')
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}