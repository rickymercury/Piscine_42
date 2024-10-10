/*
Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Escreva uma função que converta o argumento de string str (base N <= 16) em um
inteiro (base 10) e o retorne.

Os caracteres reconhecidos na entrada são: 0123456789abcdef. Esses devem, é claro,
ser ajustados de acordo com a base solicitada. Por exemplo, a base 4 reconhece "0123"
e a base 16 reconhece "0123456789abcdef".

Letras maiúsculas também devem ser reconhecidas: "12fdb3" é o mesmo que "12FDB3".

Os sinais de menos ('-') são interpretados apenas se forem o primeiro caractere
da string.

Sua função deve ser declarada da seguinte forma:

int	ft_atoi_base(const char *str, int str_base);
*/

#include <stdlib.h>

 int	ft_atoi_base(const char *str, int str_base)
 {
	int	i;
	int	sign;
	int	result;
	int	digit;

 	i = 0;
 	sign = 1;
 	result = 0;
	if (str_base < 2 || str_base > 16) 
        return (0);
 	if (str[i] == '-')
 	{
 		sign = -1;
 		i++;
 	}
 	while (str[i] != '\0')
 	{
		digit = 0;
 		if (str[i] >= '0' && str[i] <= '9')
 			digit = str[i] - '0';
 		else if (str[i] >= 'A' && str[i] <= 'F')
			digit = str[i] - 'A' + 10;
 		else if (str[i] >= 'a' && str[i] <= 'f')
 			digit = str[i] - 'a' + 10;
 		else
			return (0);
		if (digit >= str_base)
			return (0);
		result = result * str_base + digit;
		i++;
	}
 	return (result * sign);
 }

/*
#include <stdio.h>

int main() {
    printf("%d\n", ft_atoi_base("1A", 16));  // 26 -> 2 x 13 (D)
    printf("%d\n", ft_atoi_base("101", 2));   // 5 -> Binário 101 é igual ao decimal 5
    printf("%d\n", ft_atoi_base("-42", 10));  // -42
    printf("%d\n", ft_atoi_base("10", 8));    // 8
    printf("%d\n", ft_atoi_base("abc", 16));  // 2748
	printf("%d\n", ft_atoi_base("1A3", 16));  // 419

    return 0;
}
*/