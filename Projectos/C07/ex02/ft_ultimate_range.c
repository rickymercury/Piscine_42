/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:56:49 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/02 17:10:32 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
    int *num;
	int	i;
    int size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
    size = max - min;
	num = (int *)malloc(size * sizeof(int));
	if (num == NULL)
		return (-1); 
	i = 0;
	while (i < size)
	{
		num[i] = min + i;
		i++;
	}
    *range = num;
	return (size);
}

/*
int main ()
{
	int *str;
	int i = 0;
	int size;

	size = ft_ultimate_range(&str,-10,3);
	printf("size = %d\n", size);
	while (i < 13)
	{
		printf("%d ", str[i]);
		i++;
	}
	free(str);
}
*/

/*
sh-5.2$ cc -Wall -Werror -Wextra ft_ultimate_range.c 
sh-5.2$ valgrind ./a.out 
==9043== Memcheck, a memory error detector
==9043== Copyright (C) 2002-2024, and GNU GPL'd, by Julian Seward et al.
==9043== Using Valgrind-3.23.0 and LibVEX; rerun with -h for copyright info
==9043== Command: ./a.out
==9043== 
size = 13
-10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2 ==9043== 
==9043== HEAP SUMMARY:
==9043==     in use at exit: 0 bytes in 0 blocks
==9043==   total heap usage: 2 allocs, 2 frees, 1,076 bytes allocated
==9043== 
==9043== All heap blocks were freed -- no leaks are possible
==9043== 
==9043== For lists of detected and suppressed errors, rerun with: -s
==9043== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
*/