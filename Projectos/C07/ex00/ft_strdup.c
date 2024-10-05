/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:06:40 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/02 23:10:01 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int 	len;
    
    if (src == NULL)
    {
        return (NULL);
    }
	len = ft_strlen(src);
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}

/*
int main() 
{
	char *str = "Benfica";
	char *duplicated_str;

	duplicated_str = ft_strdup(str);
	printf("%s\n", duplicated_str);

	free(duplicated_str);
	return 0;
}
*/



/*
==7399== Command: ./a.out
==7399== 
Benfica
==7399== 
==7399== HEAP SUMMARY:
==7399==     in use at exit: 0 bytes in 0 blocks
==7399==   total heap usage: 2 allocs, 2 frees, 1,032 bytes allocated
==7399== 
==7399== All heap blocks were freed -- no leaks are possible
==7399== 
==7399== For lists of detected and suppressed errors, rerun with: -s
==7399== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
*/