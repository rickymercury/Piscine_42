/*
Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que receba uma string e a exiba, substituindo cada uma de suas 
letras pela letra que está 13 posições à frente na ordem alfabética.

'z' se torna 'm' e 'Z' se torna 'M'. O caso permanece inalterado.

A saída será seguida de uma nova linha (\n).

Se o número de argumentos não for 1, o programa exibe uma nova linha (\n).
Example:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$>
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if ((argv[1][i] >= 'A' && argv[1][i] <= 'M') 
			   || (argv[1][i] >= 'a' && argv[1][i] <= 'm'))
				argv[1][i] += 13;
			else if ((argv[1][i] >= 'N' && argv[1][i] <= 'Z') 
			   || (argv[1][i] >= 'n' && argv[1][i] <= 'z'))
				argv[1][i] -= 13;
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}


/*
OUTPUT:

sh-5.2$ cc -Wall -Werror -Wextra rot_13.c
sh-5.2$ ./a.out "abc"
nop
sh-5.2$ ./a.out "My horse is Amazing."
Zl ubefr vf Nznmvat.
sh-5.2$ ./a.out "AkjhZ zLKIJz , 23y "
NxwuM mYXVWm , 23l 
sh-5.2$ 

*/