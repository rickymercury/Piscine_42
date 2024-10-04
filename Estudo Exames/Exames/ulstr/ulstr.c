/*
Assignment name  : ulstr
Expected files   : ulstr.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que receba uma string e inverta o case de todas as suas letras. Os outros caracteres permanecem inalterados.

Você deve exibir o resultado seguido de um '\n'.

Se o número de argumentos não for 1, o programa exibe '\n'.

Examples :

$>./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification." | cat -e
l'EspRIT Ne PEuT PLuS PrOGrESsER S'iL STAgNE ET Si PErSiStENT vaNiTE ET AUTO-JUSTIFICATION.$
$>./ulstr "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  " | cat -e
s'ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE.  $
$>./ulstr "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot" | cat -e
3:21 bA  ToUT  MOuN KI kA DI ke M'EN kA FE FOT$
$>./ulstr | cat -e
$
*/


#include <unistd.h>

void	ft_ulstr(char *str)			
{
	int		i;						

	i = 0;							
	while (str[i])					
	{
		if (str[i] >= 'A' && str[i] <= 'Z')		
			str[i] = str[i] + 32;				
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;				
		write(1, &str[i], 1);					
		i++;										
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)					
		ft_ulstr(argv[1]);			
	write(1, "\n", 1);				
	return (0);						
}