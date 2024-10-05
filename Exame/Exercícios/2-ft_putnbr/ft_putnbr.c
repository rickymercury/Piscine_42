/*
Assignment name  : ft_putnbr
Expected files   : ft_putnbr.c
Allowed functions: write
--------------------------------------------------------------------------------

Create a function that displays the number entered as a parameter. 
The function has to be able to display all possible values within an int type variable.

Here's how it should be prototyped :

void ft_putnbr(int nb);

For example:

ft_putbr (42) displays "42".

*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb >= 0 && nb < 10)
		ft_putchar(nb + 48);
}

/*
#include <stdio.h>

int	main(void)
{
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(-42);
	ft_putchar('\n');
	ft_putnbr(4);
	ft_putchar('\n');
	return (0);
}
*/

// ou

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    long a = nb;
    if (a < 0)
	{
        write(1, "-", 1);
		a = -a;
	}
	if (a >= 10)
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
	else
		ft_putchar(a + '0');
}