/*
Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions: 
--------------------------------------------------------------------------------

Escreva uma função que inverta (no local) uma string.

Ela deve retornar o seu parâmetro.

Sua função deve ser declarada da seguinte forma:

char    *ft_strrev(char *str);

*/

char *ft_strrev(char *str)
{
	int i;
	int len;
	char swap;

    i = 0;
    len = 0;
    swap = 0;
	while (str[len])
		len++;
	while (i < len / 2)
	{
		swap = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = swap;
        i++;
	}
	return (str);
}

/*
#include <stdio.h>

int main(void)
{
    char str1[] = "Hello, World!";
    char str2[] = "1234567890";
    char str3[] = "abcdef";

    printf("Original: %s\n", str1);
    printf("Invertida: %s\n", ft_strrev(str1));

    printf("Original: %s\n", str2);
    printf("Invertida: %s\n", ft_strrev(str2));

    printf("Original: %s\n", str3);
    printf("Invertida: %s\n", ft_strrev(str3));

    return 0;
}
*/
