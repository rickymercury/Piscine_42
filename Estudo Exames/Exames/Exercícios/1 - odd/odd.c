/*
Assignment name  : odd
Expected files   : odd.c
Allowed functions:
--------------------------------------------------------------------------------

Write a program that prints
all even digits from 0 to 10 to the standard output, followed by a newline '\n'.

./odd
*/

#include <unistd.h>

int main(void)
{
    write(1, "13579\n", 6);
    return 0;
}