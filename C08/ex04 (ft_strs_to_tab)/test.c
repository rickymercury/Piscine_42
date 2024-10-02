/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:41:19 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/03 00:11:28 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void ft_show_tab(struct s_stock_str *par);

int main(void)
{
    char *strings[] = {"Benfica", "Campeão", "Portugal"};
    int size = 3;
    t_stock_str *array;

    array = ft_strs_to_tab(size, strings);
    if (!array)
        return (1);
    ft_show_tab(array);

    for (int i = 0; i < size; i++)
    {
        free(array[i].copy);
    }
    free(array);

    return (0);
}


/*
sh-5.2$ cc -Wall -Werror -Wextra ft_show_tab.c ft_stock_str.h ft_strs_to_tab.c main.c 
sh-5.2$ valgrind .
./  ../ 
sh-5.2$ valgrind ./a.out 
==14341== Memcheck, a memory error detector
==14341== Copyright (C) 2002-2024, and GNU GPL'd, by Julian Seward et al.
==14341== Using Valgrind-3.23.0 and LibVEX; rerun with -h for copyright info
==14341== Command: ./a.out
==14341== 
Benfica
7        // Benfica tem 7 caracteres
Benfica
Campeão
8        // Campeão tem 8 caracteres (com o til)
Campeão
Portugal
8        // Portugal tem 8 caracteres.
Portugal
==14341== 
==14341== HEAP SUMMARY:
==14341==     in use at exit: 0 bytes in 0 blocks
==14341==   total heap usage: 4 allocs, 4 frees, 122 bytes allocated
==14341== 
==14341== All heap blocks were freed -- no leaks are possible
==14341== 
==14341== For lists of detected and suppressed errors, rerun with: -s
==14341== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
*/