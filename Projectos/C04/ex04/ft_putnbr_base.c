/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 00:54:12 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/23 22:35:52 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int is_valid_base(char *base)
{
    int i;
    int j;
    int base_len;

    i = 0;
    base_len = ft_strlen(base);
    if (base_len < 2)
        return (0);
     while (i < base_len)
    {
        if (base[i] == '-' || base[i] == '+' || (base[i] < 32 || base[i] > 126))
            return (0);
        j = i + 1;
        while (j < base_len)
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

void ft_putnbr_base(int nbr, char *base)
{
    long int nb;
    int base_len;

    nb = nbr;
    base_len = ft_strlen(base);
    if (!is_valid_base(base) || base_len < 2)
        return;
    if (nbr == -2147483648)
    {
        ft_putchar('-');
        ft_putnbr_base(-(nbr / base_len), base);
        ft_putchar(base[-(nbr % base_len)]);
        return;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb >= base_len)      // if (nbr > (base_len - 1))
        ft_putnbr_base(nb / base_len, base);
    ft_putchar(base[nb % base_len]);
}

/*
int main()
{
    int nbr1 = 42;
    int nbr2 = -42;
    int nbr3 = -2147483648;


    ft_putnbr_base(nbr1, "0123456789");
    ft_putchar('\n');
    ft_putnbr_base(nbr2, "0123456789");
    ft_putchar('\n');
    ft_putnbr_base(nbr3, "0123456789");
    ft_putchar('\n');

    ft_putnbr_base(nbr1, "01");
    ft_putchar('\n');
    ft_putnbr_base(nbr2, "01");
    ft_putchar('\n');
    ft_putnbr_base(nbr3, "01");
    ft_putchar('\n');

    ft_putnbr_base(nbr1, "0123456789ABCDEF");
    ft_putchar('\n');
    ft_putnbr_base(nbr2, "0123456789ABCDEF");
    ft_putchar('\n');
    ft_putnbr_base(nbr3, "0123456789ABCDEF");
    ft_putchar('\n');

    ft_putnbr_base(nbr1, "poneyvif");
    ft_putchar('\n');
    ft_putnbr_base(nbr2, "poneyvif");
    ft_putchar('\n');
    ft_putnbr_base(nbr3, "poneyvif");
    ft_putchar('\n');

    return 0;
}
*/