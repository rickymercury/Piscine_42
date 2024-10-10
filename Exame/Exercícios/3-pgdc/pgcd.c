/*
Assignment name  : pgcd
Expected files   : pgcd.c
Allowed functions: printf, atoi, malloc, free
--------------------------------------------------------------------------------

Escreva um programa que receba duas strings que representam dois inteiros
estritamente positivos que caibam num int.

Exiba o maior denominador comum seguido por uma nova linha (sempre será um número
estritamente positivo).

Se o número de parâmetros não for 2, exiba apenas uma nova linha.

Examples:

$> ./pgcd 42 10 | cat -e
2$
$> ./pgcd 42 12 | cat -e
6$
$> ./pgcd 14 77 | cat -e
7$
$> ./pgcd 17 3 | cat -e
1$
$> ./pgcd | cat -e
$
*/

#include <stdlib.h>
#include <stdio.h>

// Algoritmo de Euclides :D
int main(int argc, char **argv)
{
    if (argc == 3)
    {
        int n1;
        int n2;
		int temp;

		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
        if (n1 > 0 && n2 > 0)
        {
            while (n2 != 0)
            {
                temp = n2;
                n2 = n1 % n2;
                n1 = temp;
            }
            printf("%d", n1);
        }
    }
    printf("\n");
    return (0);
}

/*
OUTPUT:

sh-5.2$ ./pgdc 42 10
2
sh-5.2$ ./pgdc 42 12
6
sh-5.2$ ./pgdc 14 77
7
sh-5.2$ ./pgdc 17 3
1
sh-5.2$ 
*/