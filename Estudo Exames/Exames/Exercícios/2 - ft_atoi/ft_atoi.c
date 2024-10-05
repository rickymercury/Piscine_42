/*
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);
*/

int	ft_atoi(const char *str)
{
    int i;
	int result;
	int sign;

    i = 0;
    result = 0;
    sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        	i++;
	if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (sign * result);
}

/*
#include <stdio.h>

int main(void)
{
    // Teste com diferentes entradas
    char *test1 = "42";
    char *test2 = "   -42";
    char *test3 = "4193 with words";
    char *test4 = "words and 987";
    char *test5 = "-91283472332";
    char *test6 = "2147483647";  // Max int
    char *test7 = "-2147483648"; // Min int
    char *test8 = "+123";

    // Resultados esperados
    printf("String: '%s', ft_atoi: %d\n", test1, ft_atoi(test1));
    printf("String: '%s', ft_atoi: %d\n", test2, ft_atoi(test2));
    printf("String: '%s', ft_atoi: %d\n", test3, ft_atoi(test3));
    printf("String: '%s', ft_atoi: %d\n", test4, ft_atoi(test4));
    printf("String: '%s', ft_atoi: %d\n", test5, ft_atoi(test5));
    printf("String: '%s', ft_atoi: %d\n", test6, ft_atoi(test6));
    printf("String: '%s', ft_atoi: %d\n", test7, ft_atoi(test7));
    printf("String: '%s', ft_atoi: %d\n", test8, ft_atoi(test8));

    return 0;
}
*/