/*Assignment name  : do_op
Expected files   : *.c, *.h
Allowed functions: atoi, printf, write
--------------------------------------------------------------------------------

Escreva um programa que recebe três strings:

   - A primeira e a terceira são representações de inteiros com sinal em base 10
   que cabem em um int.
   - A segunda é um operador aritmético escolhido entre: + - * / %

O programa deve exibir o resultado da operação aritmética solicitada, seguido de
uma nova linha.

Se o número de parâmetros não for 3, o programa deve exibir apenas uma nova linha.

Você pode assumir que as strings não contêm erros ou caracteres extras.
Números negativos, tanto na entrada quanto na saída, terão apenas um e somente um
sinal de '-'. O resultado da operação se encaixa num int.

Examples:

$> ./do_op "123" "*" 456 | cat -e
56088$
$> ./do_op "9828" "/" 234 | cat -e
42$
$> ./do_op "1" "+" "-43" | cat -e
-42$
$> ./do_op | cat -e
$
*/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			printf("%d", (atoi(argv[1]) + atoi(argv[3])));
		if (argv[2][0] == '-')
			printf("%d", (atoi(argv[1]) - atoi(argv[3])));
		if (argv[2][0] == '*')
			printf("%d", (atoi(argv[1]) * atoi(argv[3])));
		if (argv[2][0] == '/')
			printf("%d", (atoi(argv[1]) / atoi(argv[3])));
		if (argv[2][0] == '%')
			printf("%d", (atoi(argv[1]) % atoi(argv[3])));
	}
	printf("\n");
	return (0);
}


/*
OUTPUT:

sh-5.2$ cc -Wall -Werror -Wextra do_op.c -o do_op
sh-5.2$ ./do_op "123" "*" 456
56088
sh-5.2$ ./do_op "9828" "/" 234
42
sh-5.2$ ./do_op "1" "+" "-43"
-42
*/