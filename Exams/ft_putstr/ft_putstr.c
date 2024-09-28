/*
Assignment name  : ft_putstr
Expected files   : ft_putstr.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva uma função que exiba uma string na saída padrão.

O ponteiro passado para a função contém o endereço do primeiro caractere da string.

Sua função deve ser declarada da seguinte forma:

void	ft_putstr(char *str);
*/

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}