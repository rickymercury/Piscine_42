/*
Assignment name  : print_even
Expected files   : print_even.c
Allowed functions: write
--------------------------------------------------------------------------------
create a program that only writes the character if the index its on in is a multiple of 2.

./a.out "FOR 42" | cat -e
FR4$
*/

#include <unistd.h>

void print_even(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (i % 2 == 0)
            write(1, &str[i], 1);
        i++;
    }
}