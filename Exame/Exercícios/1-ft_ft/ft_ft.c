/*
Assignment name  : ft_ft
Expected files   : ft_ft.c
Allowed functions: None
--------------------------------------------------------------------------------

Create a function that takes a pointer to int as a parameter , and sets the values '42' to that int

Here is how it should be prototyped

void ft_ft(int *nbr)

*/

void ft_ft(int *nbr)
{
    *nbr = 42;
}

/*
#include <stdio.h>

void ft_ft(int *nbr);

int main(void)
{
    int num;

    printf("Antes de ft_ft: %d\n", num);
    ft_ft(&num);
    printf("Depois de ft_ft: %d\n", num);
    return 0;
}
*/