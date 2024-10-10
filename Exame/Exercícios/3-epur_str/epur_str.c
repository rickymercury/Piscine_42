/*
Assignment name  : epur_str
Expected files   : epur_str.c
Allowed functions: write
--------------------------------------------------------------------------------

  Escreva um programa que receba uma string e exiba essa string com exatamente
um espaço entre as palavras, sem espaços ou abas no início ou no final, seguido
de um \n.

  Uma "palavra" é definida como uma parte de uma string delimitada por espaços/abas
ou pelo início/fim da string.

  Se o número de argumentos não for 1, ou se não houver palavras para exibir, o
programa deve exibir \n.

Example:

$> ./epur_str "vous voyez c'est facile d'afficher la meme chose" | cat -e
vous voyez c'est facile d'afficher la meme chose$
$> ./epur_str " seulement          la c'est      plus dur " | cat -e
seulement la c'est plus dur$
$> ./epur_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e
$
$> ./epur_str "" | cat -e
$
$>
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_isspace(char c)
{
	if (c <= 32)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	space;

	i = 0;
	space = 0;
	if (argc == 2)
	{
		while (ft_isspace(argv[1][i]))
			i++;
		while (argv[1][i])
		{
			if (ft_isspace(argv[1][i]))
				space = 1;
			if (!ft_isspace(argv[1][i]))
			{
				if (space == 1)
					ft_putchar(' ');
				space = 0;
				ft_putchar(argv[1][i]);
			}
			i++;
		}
	}
	ft_putchar('\n');
}


/*
sh-5.2$ cc -Wall -Werror -Wextra epur_str.c 
sh-5.2$ ./a.out "vous voyez c'est facile d'afficher la meme chose" | cat -e
vous voyez c'est facile d'afficher la meme chose$
sh-5.2$ ./a.out " seulement          la c'est      plus dur " | cat -e
seulement la c'est plus dur$
sh-5.2$ ./a.out "comme c'est cocasse" "vous avez entendu, Mathilde ?"

*/