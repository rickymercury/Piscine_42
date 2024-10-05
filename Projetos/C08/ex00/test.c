/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:54:58 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/02 17:59:16 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 
#include "ft.h"   

void ft_putchar(char c)
{
    write(1, &c, 1); 
}

void ft_swap(int *a, int *b)
{
    int temp = *a; 
    *a = *b;    
    *b = temp;   
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') 
    {
        ft_putchar(str[i]);
        i++; 
    }
}

int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0') 
    {
        i++;
    }
    return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}


#include <stdio.h>

int main()
{
    // ft_putchar
    ft_putchar('A');
    ft_putchar('\n');

    // ft_swap
    int x = 5;
    int y = 10;
    printf("Antes da troca: x = %d, y = %d\n", x, y);
    ft_swap(&x, &y);
    printf("Depois da troca: x = %d, y = %d\n", x, y);

    // ft_putstr
    char *str = "Hello, World!";
    ft_putstr(str);
    ft_putchar('\n');

    // ft_strlen
    printf("O comprimento da string '%s' é: %d\n", str, ft_strlen(str));

    // ft_strcmp
    char *s1 = "Hello";
    char *s2 = "Hello";
    char *s3 = "World";
    printf("Comparando '%s' e '%s': %d\n", s1, s2, ft_strcmp(s1, s2)); // Deve retornar 0
    printf("Comparando '%s' e '%s': %d\n", s1, s3, ft_strcmp(s1, s3)); // Deve retornar negativo

    return 0;
}
