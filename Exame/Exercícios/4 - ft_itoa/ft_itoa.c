/*
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Escreva uma função que recebe um inteiro e o converte em uma string terminada em
nulo. 

A função retorna o resultado em um array de caracteres que você deve alocar.

Sua função deve ser declarada da seguinte forma:

char	*ft_itoa(int nbr);

*/

# include <stdio.h>
# include <stdlib.h>

int get_number_length (int number)
{
	int number_length;

	number_length = 0;

	if (number < 0)
		number_length++;

	while (number != 0)
	{
		number = number / 10;
		number_length++;
	}
	return (number_length);
}

char *ft_itoa(int number)
{
	int number_converted_to_string_length;
	int index;
	unsigned int num;

	char *store_converted_string;

	number_converted_to_string_length = get_number_length(number);

	store_converted_string = malloc(sizeof(char) * (number_converted_to_string_length + 1));

	if (!store_converted_string)
		return (NULL);

	store_converted_string[number_converted_to_string_length] = '\0';

	index = number_converted_to_string_length - 1;

	if (number == 0)
	{
		store_converted_string[0] = '0';
		return (store_converted_string);
	}

	if (number < 0)
	{
		store_converted_string[0] = '-';
		num = -number;
	}
	else
		num = number;

	while (num != 0)
	{
		store_converted_string[index] = (num % 10) + '0';

		num = num / 10;

		index--;
	}

	return (store_converted_string);
}

/*
int main(void)
{
    char *str;

    str = ft_itoa(2147483647);
    printf("%s\n", str);
    free(str);

    str = ft_itoa(-2147483648);
    printf("%s\n", str);
    free(str);

    str = ft_itoa(0);
    printf("%s\n", str);
    free(str);

    str = ft_itoa(12345);
    printf("%s\n", str);
    free(str);

    str = ft_itoa(-12345);
    printf("%s\n", str);
    free(str);

    return 0;
}
*/