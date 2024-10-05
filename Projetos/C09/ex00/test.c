/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 22:00:09 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/03 23:02:49 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_putchar(char c);
void ft_swap(int *a, int *b);
void ft_putstr(char *str);
int ft_strlen(char *str);
int ft_strcmp(char *s1, char *s2);

int main() 
{
    // ft_putchar
    ft_putchar('A');
    printf("\n");

    // ft_putstr
    ft_putstr("Hello, world!\n");

    // ft_strlen
    printf("Comprimento de 'Hello, world!': %d\n", ft_strlen("Hello, world!"));

    // ft_strcmp
    printf("Comparar 'abc' e 'abc': %d\n", ft_strcmp("abc", "abc"));
    printf("Comparar 'abc' e 'abd': %d\n", ft_strcmp("abc", "abd"));

    // ft_swap
    int x = 42, y = 24;
    printf("Antes: x = %d, y = %d\n", x, y);
    ft_swap(&x, &y);
    printf("Depois: x = %d, y = %d\n", x, y);

    return 0;
}


/*
Depois de criar o test.c, devemos recompilar os arquivos da biblioteca e executar o script
NOTA: no script não podemos remover libft.a

sh-5.2$ ./libft_creator.sh 
sh-5.2$ cc test.c -L. -lft -o test
sh-5.2$ ./test
A
Hello, world!
Comprimento de 'Hello, world!': 13
Comparar 'abc' e 'abc': 0
Comparar 'abc' e 'abd': -1
Antes: x = 42, y = 24
Depois: x = 24, y = 42
*/