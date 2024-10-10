/*
Assignment name  : search_and_replace
Expected files   : search_and_replace.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

  Escreva um programa chamado search_and_replace que receba 3 argumentos. O 
primeiro argumento é uma string na qual substituir uma letra (2º argumento) por
outra (3º argumento).

  Se o número de argumentos não for 3, exiba apenas uma nova linha.

  Se o segundo argumento não estiver contido no primeiro (a string), o programa 
simplesmente reescreve a string seguida de uma nova linha.

Examples:
$>./search_and_replace "Papache est un sabre" "a" "o"
Popoche est un sobre
$>./search_and_replace "zaz" "art" "zul" | cat -e
$
$>./search_and_replace "zaz" "r" "u" | cat -e
zaz$
$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
$
$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
ZaZ eT David aiME le METal.$
$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
eNcOre Un ExEmPle Pas Facile a Ecrire $
*/


#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 4 && (!argv[2][1]) && (!argv[3][1]))
	{
		int i = 0;
		while(argv[1][i] != '\0')
		{
			if (argv[1][i] == argv[2][0])
				argv[1][i] = argv[3][0];
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}



/*
OUTPUT: 

sh-5.2$ cc -Wall -Werror -Wextra search_and_replace.c 
sh-5.2$ ./a.out "Papache est un sabre" "a" "o"
Popoche est un sobre
sh-5.2$ ./a.out "zaz" "art" "zul"

sh-5.2$ ./a.out "zaz" "r" "u"
zaz
sh-5.2$ ./a.out "ZoZ eT Dovid oiME le METol." "o" "a"
ZaZ eT David aiME le METal.
sh-5.2$ ./a.out "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e"
eNcOre Un ExEmPle Pas Facile a Ecrire 

*/