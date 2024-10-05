/*
Assignment name  : print_odd
Expected files   : print_odd.c
Allowed functions: write
--------------------------------------------------------------------------------
create a program that only writes the character if the index its not multiple of 2.

Example:

./a.out "FOR 42" | cat -e
O 4$
*/

#include <unistd.h>

void print_odd(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (i % 2 != 0)
            write(1, &str[i], 1);
        i++;
    }
}