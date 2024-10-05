/*
Assignment name  : buzzfizz
Expected files   : buzzfizz.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 4, it prints 'buzz' instead.

If the number is a multiple of 7, it prints 'fizz' instead.

If the number is both a multiple of 4 and a multiple of 7, it prints 'buzzfizz' instead.
*/

#include <unistd.h>

void print_number(int n)
{
    char buffer[4]; 
    int len = 0; 
    if (n == 0)
    {
        buffer[len++] = '0';
    }
    else
    {
        while (n > 0)
        {
            buffer[len++] = (n % 10) + '0'; 
            n /= 10; 
        }
    }
    while (len > 0)
    {
        write(1, &buffer[--len], 1);
    }
}

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 4 == 0 && i % 7 == 0)
            write(1, "buzzfizz\n", 9);
        else if (i % 4 == 0) 
            write(1, "buzz\n", 5);
        else if (i % 7 == 0)
            write(1, "fizz\n", 5);
        else
        {
            print_number(i);
            write(1, "\n", 1);
        }
    }
    return 0;
}