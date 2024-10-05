/*
Assignment name  : maff_alpha
Expected files   : maff_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreve um programa que exiba o alfabeto, com as letras pares em maisculas, e
as letras ímpares em minusculas, seguidas por uma newline.


Example:

$> ./maff_alpha | cat -e
aBcDeFgHiJkLmNoPqRsTuVwXyZ$
*/


#include <unistd.h>

int		main(void)
{
	write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
	return (0);
}

/////////////////////////////////////////////////////////////

#include <unistd.h>

int	main(void)
{
	char	i;
	int	n;

	i = 'a';
	while (i <= 'z')
	{
		n = i;
		if (i % 2 == 0)
		{
			n -= 32;
			write (1, &n, 1);
		}
		else
			write(1, &i, 1);
		i++;	
	}
	write(1, "\n", 1);
}