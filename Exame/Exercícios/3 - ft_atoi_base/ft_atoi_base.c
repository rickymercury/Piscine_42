/*
Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);
*/


static int	ft_isdigit(int c)
{
	return (('0' <= c) && (c <= '9'));
}

static int	ft_isupper(int c)
{
	return ((c >= 'A') && (c <= 'Z'));
}

static int	ft_islower(char c)
{
	return ((c >= 'a') && (c <= 'z'));
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	sign;
	int	result;

	sign = 0x1;
	result = 0x0;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str)
	{
		result *= str_base;
		if (ft_isdigit(*str))
			result += (*str - '0');
		else if (ft_isupper(*str))
			result += (*str - '7');
		else if (ft_islower(*str))
			result += (*str - 'W');
		str++;
	}
	return (result * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("%d\n", ft_atoi_base("A", 16));
	printf("%d\n", ft_atoi_base("B", 16));
	printf("%d\n", ft_atoi_base("C", 16));
	printf("%d\n", ft_atoi_base("D", 16));
	printf("%d\n", ft_atoi_base("e", 16));
	printf("%d\n", ft_atoi_base("E", 16));
	return (EXIT_SUCCESS);
}
*/
// int	ft_atoi_base(const char *str, int str_base)
// {
// 	int	idx;
// 	int	sign;
// 	int	result;

// 	idx = 0;
// 	sign = 1;
// 	result = 0;
// 	if (str[idx] == '-')
// 	{
// 		sign = -1;
// 		idx++;
// 	}
// 	while (str[idx] != '\0')
// 	{
// 		result *= str_base;
// 		if (str[idx] >= '0' && str[idx] <= '9')
// 			result += str[idx] - '0';
// 		else if (str[idx] >= 'A' && str[idx] <= 'Z')
// 			result += str[idx] - '7';
// 		else if (str[idx] >= 'a' && str[idx] <= 'z')
// 			result += str[idx] - 'W';
// 		idx++;
// 	}
// 	return (result * sign);