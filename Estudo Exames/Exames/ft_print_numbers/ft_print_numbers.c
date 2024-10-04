/*-------------------------------------------------------------------------------
Assignment name  : ft_print_numbers
Expected files   : ft_print_numbers.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreve uma função que exiba todos os digitos em ordem crescente.

A tua função deve ser declarada como se segue:

void	ft_print_numbers(void);

--------------------------------------------------------------------------------*/

#include <unistd.h>


void ft_print_numbers(void)
{
    write (1, "0123456789", 10);
}

// OU

void	ft_print_numbers(void)
{
	int	num;
	
	num = '0';
	while (num <= '9') 
	{
		write(1, &num,1);
		num++;
    }

}

int main()
{
    ft_print_numbers();
    return (0);
}