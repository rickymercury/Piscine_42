/*Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que imprima os números de 1 a 100, cada um separado por uma
nova linha.

Se o número for um múltiplo de 3, imprime 'fizz' em vez disso.

Se o número for um múltiplo de 5, imprime 'buzz' em vez disso.

Se o número for um múltiplo de 3 e um múltiplo de 5, imprime 'fizzbuzz' em vez disso.


Example:

$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$> 
*/

#include <unistd.h>

void	ft_write_number(int number)
{
	char	str[10] = "0123456789";

	if (number > 9)
		ft_write_number(number / 10);
	write (1, &str[number % 10], 1);
}

int		main()
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 15 == 0)
			write (1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write (1, "fizz", 4);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else
			ft_write_number(i);
		i++;
		write (1, "\n", 1);
	}
}


// ou 


#include <unistd.h>

void	ft_putnbr(int n)
{
	char c;

	if (n > 9)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int main()
{
    int a = 1;
    while(a <= 100)
    {
        if(a % 3 == 0 && a % 5 == 0)
            write(1, "fizzbuzz\n", 9);
        else if(a % 3 == 0)
            write(1, "fizz\n", 5);
        else if(a % 5 == 0)
            write(1, "buzz\n", 5);
        else
        {
            ft_putnbr(a);
            write(1, "\n", 1);
        }
        a++;
    }
}