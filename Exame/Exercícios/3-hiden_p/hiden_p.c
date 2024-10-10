/*
Assignment name  : hidenp
Expected files   : hidenp.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa chamado hidenp que receba duas strings e exiba 1 seguido de 
uma nova linha se a primeira string estiver oculta na segunda, caso contrário, 
exiba 0 seguido de uma nova linha.

Sejam s1 e s2 strings. Dizemos que s1 está oculta em s2 se for possível encontrar
 cada caractere de s1 em s2, na mesma ordem em que aparecem em s1. Além disso, a 
 string vazia está oculta em qualquer string.

Se o número de parâmetros não for 2, o programa exibe uma nova linha.

Examples :

$>./hidenp "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e
1$
$>./hidenp "abc" "2altrb53c.sse" | cat -e
1$
$>./hidenp "abc" "btarc" | cat -e
0$
$>./hidenp | cat -e
$
$>
*/

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	
	if (argc == 3)
	{
		while (argv[2][j] && argv[1][i])
		{
			if (argv[2][j] == argv[1][i])
				i++;
			j++;
		}
		if (argv[1][i] == '\0')
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}


/*
sh-5.2$ cc -Wall -Werror -Wextra hiden_p.c 
sh-5.2$ ./a.out "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6"
1
sh-5.2$ ./a.out "abc" "2altrb53c.sse"
1
sh-5.2$ ./a.out "abc" "btarc"
0
sh-5.2$ ./a.out 

sh-5.2$
*/