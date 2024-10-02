/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:13:47 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/02 17:37:33 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char    *ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
    j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_total_size(int size, char **strs, char *sep)
{
	int	total_len;
	int	i;
    int sep_len;

	i = 0;
    sep_len = ft_strlen(sep);
    total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i < size - 1)
			total_len += sep_len;
		i++;
	}
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		total_len;
	int		i;

	if (size == 0)
	{
		dest = (char *)malloc(1);
		if (dest != NULL)
			dest[0] = '\0';
		return (dest);
	}
    total_len = ft_total_size(size, strs, sep) + 1;
	dest = (char *)malloc(sizeof(char) * total_len);
	if (dest == NULL)
    {
		return (NULL);
    }
	dest[0] = '\0';
    i = 0;
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i < size - 1)
			ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}

/*
int main(void)
{
	char *strs[] = {"Benfica", "Campeão", "da", "Liga"};
	char *sep = " ";
	int size = 4;
	
	char *result = ft_strjoin(size, strs, sep);
	if (result != NULL)
	{
		printf("strjoin: %s\n", result);
		free(result);
	}
	else
        printf("Error.\n");

	return 0;
}
*/


/*
sh-5.2$ cc -Wall -Werror -Wextra ft_strjoin.c
sh-5.2$ valgrind ./a.out 
==9808== Memcheck, a memory error detector
==9808== Copyright (C) 2002-2024, and GNU GPL'd, by Julian Seward et al.
==9808== Using Valgrind-3.23.0 and LibVEX; rerun with -h for copyright info
==9808== Command: ./a.out
==9808== 
strjoin: Benfica Campeão da Liga
==9808== 
==9808== HEAP SUMMARY:
==9808==     in use at exit: 0 bytes in 0 blocks
==9808==   total heap usage: 2 allocs, 2 frees, 1,049 bytes allocated
==9808== 
==9808== All heap blocks were freed -- no leaks are possible
==9808== 
==9808== For lists of detected and suppressed errors, rerun with: -s
==9808== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
sh-5.2$ 
*/