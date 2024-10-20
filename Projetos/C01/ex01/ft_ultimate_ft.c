/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:30:21 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/16 21:50:22 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

/*
#include <stdio.h>

int main(void)
{
    int num = 0;
    int *ptr1 = &num;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    int ****ptr4 = &ptr3;
    int *****ptr5 = &ptr4;
    int ******ptr6 = &ptr5;
    int *******ptr7 = &ptr6;
    int ********ptr8 = &ptr7;
    int *********ptr9 = &ptr8;

    printf("Antes: num = %d\n", num);

    ft_ultimate_ft(ptr9);

    printf("Depois: num = %d\n", num);
    return 0;
}
*/

/*
OUTPUT:

sh-5.2$ cc -Wall -Wextra -Werror ft_ultimate_ft.c -o ft_ultimate_ft
sh-5.2$ ./ft_ultimate_ft 
Antes: num = 0
Depois: num = 42
*/