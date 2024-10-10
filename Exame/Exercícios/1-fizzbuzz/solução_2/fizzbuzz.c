/*Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que imprima os números de 1 a 100, cada um separado por uma
nova linha.

Se o número for um múltiplo de 3, imprime 'fizz' em vez disso.

Se o número for um múltiplo de 5, imprime 'buzz' em vez disso.

Se o número for um múltiplo de 3 e um múltiplo de 5, imprime 'fizzbuzz' em vez disso.


Example:

$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$> 
*/

#include <unistd.h>

int	main(void)
{
	int i = 1;
	char c;

	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			write(1, "fizzbuzz", 8);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else 
		{
			if (i > 9)
				write(1, &"0123456789"[i / 10], 1);
			c = "0123456789"[i % 10];
			write(1, &c, 1);
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}