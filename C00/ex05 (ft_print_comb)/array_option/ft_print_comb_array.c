/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_array.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:24:44 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/21 13:26:47 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void)
{
    char digits[3];

    digits[0] = '0';
    while (digits[0] <= '7')
    {
        digits[1] = digits[0] + 1;
        while (digits[1] <= '8')
        {
            digits[2] = digits[1] + 1;
            while (digits[2] <= '9')
            {
                write(1, &digits[0], 1);
                write(1, &digits[1], 1);
                write(1, &digits[2], 1);
                if (digits[0] != '7' || digits[1] != '8' || digits[2] != '9')
                    write(1, ", ", 2);
                digits[2]++;
            }
            digits[1]++;
        }
        digits[0]++;
    }
}

/*
int main(void)
{
    ft_print_comb();
    return 0;
}
*/