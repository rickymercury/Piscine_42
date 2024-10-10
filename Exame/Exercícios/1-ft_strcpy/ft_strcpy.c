/*
Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions: 
--------------------------------------------------------------------------------

Reproduza o comportamento da função strcpy (man strcpy).

Sua função deve ser declarada da seguinte forma:

char    *ft_strcpy(char *s1, char *s2);
*/

#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while(s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

/*
#include <stdio.h>

int	main(void)
{
	// String "Ola" com dest de tamanho 50
	char src1[] = "Ola";
	char dest1[50];
	ft_strcpy(dest1, src1);
	printf("src: \"%s\", dest: \"%s\"\n", src1, dest1);

	// String "benfica" com dest de tamanho 50
	char src2[] = "benfica";
	char dest2[50];
	ft_strcpy(dest2, src2);
	printf("src: \"%s\", dest: \"%s\"\n", src2, dest2);

	// String "benfica" com dest do mesmo tamanho
	char src3[] = "benfica";
	char dest3[8]; // Tamanho exato da string + 1 para o '\0'
	ft_strcpy(dest3, src3);
	printf("src: \"%s\", dest: \"%s\"\n", src3, dest3);

	// Teste 4: String "benfica" com dest menor que a string
	char src4[] = "benfica";
	char dest4[4]; // Menor que a string
	ft_strcpy(dest4, src4);
	printf("src: \"%s\", dest (truncado): \"%s\"\n", src4, dest4);

	// Teste 5: String vazia
	char src5[] = "";
	char dest5[50];
	ft_strcpy(dest5, src5);
	printf("src: \"%s\", dest: \"%s\"\n", src5, dest5);

	return (0);
}
*/