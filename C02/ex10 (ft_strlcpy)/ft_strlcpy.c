/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 00:15:52 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/22 00:25:43 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int ft_strlen(const char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

unsigned int ft_strlcpy(char *dest, const char *src, unsigned int size)
{
    unsigned int    src_len;
    unsigned int    i;
    
    src_len = ft_strlen(src);
    if (size == 0)
        return (src_len);
    i = 0;
    while (i < (size - 1) && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // Garante que a string de destino seja nula
    return (src_len);
}

/*
int main()
{
	char src[] = "Teste 123456";
	char dest[9] = "";
	
	ft_strlcpy(dest, src, 9);
	printf("Txt original: %s\n", src);
	printf("Txt dest: %s\n", dest); 
}
*/