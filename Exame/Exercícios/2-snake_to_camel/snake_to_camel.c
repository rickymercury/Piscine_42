/*
 * Assignment name  : snake_to_camel
 * Expected files   : snake_to_camel.c
 * Allowed functions: malloc, free, realloc, write
 * --------------------------------------------------------------------------------

  Escreva um programa que receba uma única string no formato snake_case e a converta 
em uma string no formato lowerCamelCase.

  Uma string no formato snake_case é uma string onde cada palavra está em letras minúsculas, 
separadas por um sublinhado "_".

  Uma string no formato lowerCamelCase é uma string onde cada palavra começa com uma letra maiúscula,
exceto a primeira.

 * Examples:

 * $>./camel_to_snake "here_is_a_snake_case_word"
 * hereIsASnakeCaseWord
 * $>./camel_to_snake "hello_world" | cat -e
 * helloWorld$
 * $>./camel_to_snake | cat -e
 * $
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == '_')
			{
				i++;
				argv[1][i] = argv[1][i] - 32;
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}


/*
OUTPUT:

sh-5.2$ cc -Wall -Werror -Wextra snake_to_camel.c 
sh-5.2$ ./a.out "here_is_a_snake_case_word"
hereIsASnakeCaseWord
sh-5.2$ ./a.out "hello_world"
helloWorld
sh-5.2$ ./a.out 

sh-5.2$ 
*/