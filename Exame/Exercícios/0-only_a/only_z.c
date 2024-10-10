/*
Assignment name  : only_a
Expected files   : only_a.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreve um programa que exiba um caracter 'a' na saída padrão.

*/

#include <unistd.h>

int		main(void)
{
	write(1, "z", 1);
	return (0);
}