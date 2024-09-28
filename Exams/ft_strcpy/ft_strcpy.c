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
	while(s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
}

/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "Ola";
	char	dest[50];

	ft_strcpy(src, dest);
	printf("%s", dest);
	return(0);
}
*/