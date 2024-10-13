/*
Assignment name  : occ_z
Expected files   : occ_z.c
Allowed functions:
--------------------------------------------------------------------------------
Escreva uma função que retorne o número de ocorrências do caractere 'z' na string
dada.
A função deve ser declarada da seguinte forma:

int occ_z(char *str);

*/

#include <stdio.h>

int	occ_z(char *str)
{
	int i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'z')
			count++;
		i++;
	}
	return (count);
}

/*
#include <stdio.h>

int main(void)
{
    char str1[] = "pizza";
    char str2[] = "zebra";
    char str3[] = "zero zz";
    char str4[] = "no z here";
    
    printf("Ocorrências de 'z' em \"%s\": %d\n", str1, occ_z(str1));
    printf("Ocorrências de 'z' em \"%s\": %d\n", str2, occ_z(str2));
    printf("Ocorrências de 'z' em \"%s\": %d\n", str3, occ_z(str3));
    printf("Ocorrências de 'z' em \"%s\": %d\n", str4, occ_z(str4));

    return 0;
}
*/