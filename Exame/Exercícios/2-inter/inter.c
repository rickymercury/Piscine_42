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
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
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
	int tab[256];

    i = 0;
    j = 0;
    tab[256] = 0;
	if(argc == 3)
	{
		while(argv[1][i])
		{	
			j = 0;
			while(argv[2][j])
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

// ou 

#include <unistd.h>

int    check(char *str, int i)
{
    int c = 0;
    while(c < i)
    {
        if(str[i] == str[c])
        {
            return 0;
        }
        c++;
    }
    return 1;
}

void    inter(char *str, char *dest)
{
    int i = 0;
    int j;
    while(str[i] != '\0')
    {
        j = 0;
        while(dest[j] != '\0')
        {
            if(str[i] == dest[j])
            {
                if(check(str,i) == 1)
                {
                    write(1, &str[i], 1);
                    break;
                }
            }
            j++;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        inter(argv[1],argv[2]);
    }
    write(1, "\n", 1);
}