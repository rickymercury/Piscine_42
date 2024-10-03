/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:40:47 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/02 17:00:48 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*num;
    int size;
	int	i;

	if (min >= max)
		return (0);
    size = max - min;
	num = (int *) malloc(size * sizeof(int));
    if (num == NULL)
    {
        return (NULL);
    }
    i = 0;
	while (i < size)
	{
		num[i] = min + i;
		i++;
	}
	return (num);
}

/*
int main ()
{
	int *str;
	int i = 0;

	str = ft_range(-10, 3);
	while (i < 13)
	{
		printf("%d ", str[i]);
		i++;
	}
	free(str);
	return 0;
}
*/

/*
sh-5.2$ cc -Wall -Werror -Wextra ft_range.c
sh-5.2$ valgrind ./a.out 
==8408== Memcheck, a memory error detector
==8408== Copyright (C) 2002-2024, and GNU GPL'd, by Julian Seward et al.
==8408== Using Valgrind-3.23.0 and LibVEX; rerun with -h for copyright info
==8408== Command: ./a.out
==8408== 
-10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2 ==8408== 
==8408== HEAP SUMMARY:
==8408==     in use at exit: 0 bytes in 0 blocks
==8408==   total heap usage: 2 allocs, 2 frees, 1,076 bytes allocated
==8408== 
==8408== All heap blocks were freed -- no leaks are possible
==8408== 
==8408== For lists of detected and suppressed errors, rerun with: -s
==8408== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
sh-5.2$ 
*/