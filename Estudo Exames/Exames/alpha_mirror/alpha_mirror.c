/*
Assignment name  : alpha_mirror
Expected files   : alpha_mirror.c
Allowed functions: write
--------------------------------------------------------------------------------

   Escreva um programa chamado alpha_mirror que receba uma string e exiba essa string 
após substituir cada caractere alfabético pelo seu caractere alfabético oposto, seguido 
de uma nova linha.

'a' se torna 'z', 'Z' se torna 'A'
'd' se torna 'w', 'M' se torna 'N'

e assim por diante.

O case não deve ser alterado.

Se o número de argumentos não for 1, exiba apenas uma nova linha.

Examples:

$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$>
*/

#include <unistd.h>

void	ft_alpha_miror(char *str)					
{
	int		i;										
	char	mirror_char;									

	i = 0;											
	while (str[i])									
	{
		if (str[i] >= 'A' && str[i] <= 'Z')			
			mirror_char = (('Z' - str[i]) + 'A');				
		else if (str[i] >= 'a' && str[i] <= 'z')		
			mirror_char = (('z' - str[i]) + 'a');				
		else
			mirror_char = str[i];							
		write(1, &mirror_char, 1);							
		str++;										
	}
}

int		main(int argc, char *argv[])				
{
	if (argc == 2)									
		ft_alpha_miror(argv[1]);					
	write(1, "\n", 1);								
	return (0);								
}