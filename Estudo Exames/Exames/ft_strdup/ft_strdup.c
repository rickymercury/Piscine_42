/*
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduza o comportamento da função strdup (man strdup).

Sua função deve ser declarada da seguinte forma:

char    *ft_strdup(char *src);
*/

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int 	len;
    
    if (src == NULL)
    {
        return (NULL);
    }
	len = ft_strlen(src);
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}

/*
int main() 
{
	char *str = "Benfica";
	char *duplicated_str;

	duplicated_str = ft_strdup(str);
	printf("%s\n", duplicated_str);

	free(duplicated_str);
	return 0;
}
*/