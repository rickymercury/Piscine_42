/*
Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa chamado repeat_alpha que receba uma string e a exiba, repetindo
cada caractere alfabético tantas vezes quanto seu índice alfabético, seguido de uma 
nova linha.

'a' se torna 'a', 'b' se torna 'bb', 'e' se torna 'eeeee', etc...

O caso permanece inalterado.

Se o número de argumentos não for 1, exiba apenas uma nova linha.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
*/

#include <unistd.h>

void	ft_repeat_alpha(char *str)	
{
	int		i;							
    int		letter;					
									
	i = 0;					
	while (str[i])				
	{
		letter = 0;									
		if (str[i] >= 'A' && str[i] <='Z')		
			letter = str[i] - 64;					
		else if (str[i] >= 'a' && str[i] <= 'z')	
			letter = str[i] - 96;					
		else										
			letter = 1;							
		while (letter--)						
			write(1, &str[i], 1);					
		i++;										
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 2)					
		ft_repeat_alpha(argv[1]);
	write(1, "\n", 1);				
	return (0);						
}



////////////////////////////////////////////////////////77



#include <unistd.h>

void	repeat_alpha(char c)
{
	int repeat;
	
	if (c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else if (c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	else
		repeat = 1;
	while (repeat > 0)
	{
		write(1, &c, 1);
		repeat--;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	
	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			repeat_alpha(argv[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
}