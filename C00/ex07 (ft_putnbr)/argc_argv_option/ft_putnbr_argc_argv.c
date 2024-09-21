#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c) 
{
    write(1, &c, 1);
}

void ft_putnbr(int nb) 
{
    if (nb == -2147483648) 
    {
        write(1, "-2147483648", 11);
        return;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb >= 10) 
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
    {
        ft_putchar(nb % 10 + '0');
    }
}

int main(int argc, char **argv)
{
    if (argc == 2) 
    {
        int numero = atoi(argv[1]);
        ft_putnbr(numero);
        ft_putchar('\n');
    }
    return 0;
}