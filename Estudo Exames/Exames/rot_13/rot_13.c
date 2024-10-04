/*
Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que receba uma string e a exiba, substituindo cada uma de suas 
letras pela letra que está 13 posições à frente na ordem alfabética.

'z' se torna 'm' e 'Z' se torna 'M'. O caso permanece inalterado.

A saída será seguida de uma nova linha (\n).

Se o número de argumentos não for 1, o programa exibe uma nova linha (\n).
Example:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$>
*/


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rot_13(char *str)	
{
	int	i;						

	i = 0;						
	while (str[i])				
	{
		if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))	
			ft_putchar(str[i] + 13);				

		else if ((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))	
			ft_putchar(str[i] - 13);				

		else										
			ft_putchar(str[i]);						
		i++;										
	}
}

int		main(int argc, char **argv)
{	
	if (argc == 2)
	 ft_rot_13(argv[1]);				
	ft_putchar('\n');					
	return (0);							
}