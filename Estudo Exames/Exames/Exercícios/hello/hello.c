/*
Assignment name  : hello
Expected files   : hello.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreve um programa que exiba "Hello World!" seguido de uma \n.

Example:

$>./hello
Hello World!
$>./hello | cat -e
Hello World!$
$>
*/

#include <unistd.h>

int		main(void)
{
	write(1, "Hello World!\n", 13);
	return (0);
}