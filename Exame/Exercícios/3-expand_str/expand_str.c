/*
Assignment name  : expand_str
Expected files   : expand_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que receba uma string e a exiba com exatamente três espaços
entre cada palavra, sem espaços ou abas no início ou no final, seguido de uma
nova linha.

Uma palavra é uma seção da string delimitada por espaços/abas ou pelo início/fim
da string.

Se o número de parâmetros não for 1, ou se não houver palavras, exiba simplesmente
uma nova linha.

Examples:

$> ./expand_str "vous   voyez   c'est   facile   d'afficher   la   meme   chose" | cat -e
vous   voyez   c'est   facile   d'afficher   la   meme   chose$
$> ./expand_str " seulement          la c'est      plus dur " | cat -e
seulement   la   c'est   plus   dur$
$> ./expand_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e
$
$> ./expand_str "" | cat -e
$
$>
*/


#include <unistd.h>

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
					write(1, "   ", 3);
				space = 0;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}


/*
OUTPUT:

sh-5.2$ cc -Wall -Werror -Wextra expand_str.c 
sh-5.2$ ./a.out "vous   voyez   c'est   facile   d'afficher   la   meme   chose" | cat -e
vous   voyez   c'est   facile   d'afficher   la   meme   chose$
sh-5.2$ ./a.out " seulement          la c'est      plus dur " | cat -e
seulement   la   c'est   plus   dur$
sh-5.2$ ./a.out "comme c'est cocasse" "vous avez entendu, Mathilde ?"

sh-5.2$ 
*/