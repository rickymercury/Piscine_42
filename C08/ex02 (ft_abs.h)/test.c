/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:46:02 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/02 22:46:23 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_abs.h"

int main(void)
{
    int x = -5;
    int y = 10;
    int z = 0;

    printf("ABS(%d) = %d\n", x, ABS(x));
    printf("ABS(%d) = %d\n", y, ABS(y));
    printf("ABS(%d) = %d\n", z, ABS(z));

    return 0;
}