/*
 * Assignment name  : camel_to_snake
 * Expected files   : camel_to_snake.c
 * Allowed functions: malloc, free, realloc, write
 * --------------------------------------------------------------------------------
  
  Escreva um programa que receba uma única string no formato lowerCamelCase e a converta 
em uma string no formato snake_case.

  Uma string no formato lowerCamelCase é uma string onde cada palavra começa com uma letra 
maiúscula, exceto a primeira.

  Uma string no formato snake_case é uma string onde cada palavra está em letras minúsculas, 
separadas por um sublinhado "_".

 * Examples:
 * 
 * $>./camel_to_snake "hereIsACamelCaseWord"
 * here_is_a_camel_case_word
 * $>./camel_to_snake "helloWorld" | cat -e
 * hello_word$
 * $>./camel_to_snake | cat -e
 * $
*/


#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i;

        i = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				if (i != 0)
					write(1, "_", 1);
				argv[1][i] += 32;
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

sh-5.2$ cc -Wall -Werror -Wextra camel_to_snake.c -o camel_to_snake
sh-5.2$ ./camel_to_snake "hereIsACamelCaseWord"
here_is_a_camel_case_word
sh-5.2$ ./camel_to_snake "helloWorld"
hello_world
sh-5.2$ 
*/