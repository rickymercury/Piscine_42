/*Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva uma função que recebe uma string e exibe a string em ordem reversa,
seguida de uma nova linha.

A string original não deve ser modificada.

Você deve retornar a string passada como parâmetro.

Sua função deve ser declarada da seguinte forma:

char *rev_print(char *str);

Examples:

int main(void)
{
  rev_print("Hello world");
  write (1, "\n", 1);
  rev_print("tnirp esreveR");
  write (1, "\n", 1);
  rev_print("");
  write (1, "\n", 1);
}

Output :
$> ./a.out | cat -e
dlrow olleH$
$> ./a.out | cat -e
Reverse print$
$> ./a.out | cat -e
$
*/

#include <unistd.h>

char *rev_print(char *str)
{
    int i;
    
    i = 0;
    while(str[i] != '\0')
        i++;
	while (--i >= 0)
		write(1, &str[i], 1);
	write(1, "\n", 1);
  return (str);
}