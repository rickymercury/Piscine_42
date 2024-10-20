#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

/*
int main(void)
{
    ft_is_negative(-5);
	write(1, "\n", 1);
    ft_is_negative(0);
	write(1, "\n", 1);
    ft_is_negative(7);
	write(1, "\n", 1);
    
    return 0;
}
*/

/*
OUTPUT:

sh-5.2$ cc -Wall -Wextra -Werror ft_is_negative.c -o ft_is_negative 
sh-5.2$ ./ft_is_negative 
N
P
P
*/