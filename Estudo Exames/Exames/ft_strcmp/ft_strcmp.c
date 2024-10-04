/*
Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduza o comportamento da função strcmp (man strcmp).

Sua função deve ser declarada da seguinte forma:

int    ft_strcmp(char *s1, char *s2);
*/

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char str1[] = "benfica";
	char str2[] = "benfica";
	char str3[] = "benfas";
	char str4[] = "BenficaCampeão";
	char str5[] = "";          
	char str6[] = "BENFICA";
	char str7[] = "BeNfIcA";
	char str8[] = "123";
	char str9[] = "hello123";

	printf("'%s' e '%s': %d\n", str1, str2, ft_strcmp(str1, str2));

	printf("'%s' e '%s': %d\n", str1, str3, ft_strcmp(str1, str3));

	printf("'%s' e '%s': %d\n", str1, str4, ft_strcmp(str1, str4));

	printf("'%s' e string vazia: %d\n", str1, str5, ft_strcmp(str1, str5));

	printf("'%s' e '%s': %d\n", str1, str6, ft_strcmp(str1, str6));
	printf("'%s' e '%s': %d\n", str1, str7, ft_strcmp(str1, str7));

	printf("'%s' e '%s': %d\n", str1, str8, ft_strcmp(str1, str8));
	printf("'%s' e '%s': %d\n", str1, str9, ft_strcmp(str1, str9));

	return (0);
}
*/