/*
Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que receba uma string e a exiba, substituindo cada uma de suas 
letras pela próxima na ordem alfabética.

'z' se torna 'a' e 'Z' se torna 'A'. O caso permanece inalterado.

A saída será seguida de uma nova linha (\n).

Se o número de argumentos não for 1, o programa exibe uma nova linha (\n).

Example:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>
*/


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *str)
{
    int i;

    i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Y') || (str [i] >= 'a' && str[i] <= 'y'))
			ft_putchar(str[i] + 1);
		else if (str[i] == 'Z' || str[i] == 'z')
			ft_putchar(str[i] - 25);
		else
			ft_putchar(str[i]);
		++i;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		rotone(argv[1]);
	ft_putchar('\n');
	return (0);
}