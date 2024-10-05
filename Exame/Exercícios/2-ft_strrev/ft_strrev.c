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
	int length;
	char temp;

    i = 0;
    length = 0;
    temp = 0;
	while (str[length])
		length++;
	while (i < length / 2)
	{
		temp = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = temp;
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

// ou

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int i;
	int len;
	char tmp;

	i = 0;
	len = ft_strlen(str) - 1;
	while (len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}