/*
Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que receba duas strings e exiba, sem duplicatas, os caracteres
 que aparecem em ambas as strings, na ordem em que aparecem na primeira.

A exibição será seguida de uma nova linha.

Se o número de argumentos não for 2, o programa exibirá uma nova linha.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter "ddf6vewg64f" "gtwthgdwthdwfteewhrtag6h4ffdhsd" | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$
*/

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int j;
	int tab[256] = {};

    i = 0;
	if(argc == 3)
	{
		while(argv[1][i] != '\0')
		{	
			j = 0;
			while(argv[2][j] != '\0')
			{
				if(argv[2][j] == argv[1][i])
				{
					if(tab[(int)argv[1][i]] == 0)
					{
						tab[(int)argv[1][i]] = 1;
						write(1, &argv[2][j], 1);
					}
				}
				j++;
			}
			i++;
		}
	}
	write(1,"\n",1);
	return (0);
}


/*
OUTPUT:

sh-5.2$ cc -Wall -Werror -Wextra inter.c 
sh-5.2$ ./a.out "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj"
padinto
sh-5.2$ ./a.out "ddf6vewg64f" "gtwthgdwthdwfteewhrtag6h4ffdhsd"
df6ewg4
sh-5.2$ ./a.out "rien" "cette phrase ne cache rien" 
rien
*/