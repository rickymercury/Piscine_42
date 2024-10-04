/*
Assignment name  : ft_countdown
Expected files   : ft_countdown.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreve um programa que exiba todos os digitos em ordem decrescente, seguido de
uma newline.

Example:
$> ./ft_countdown | cat -e
9876543210$
$>
*/

#include <unistd.h>

int main()
{
    write (1, "9876543210", 10);
    return (0);
}


// OU

int		main(void)
{
	char c;

	c = '9';
	while (c >= '0')
	{
		write(1, &c, 1);
		c--;
	}
	write(1, "\n", 1);
	return (0);
}