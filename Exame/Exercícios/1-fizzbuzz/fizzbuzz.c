/*Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que imprima os números de 1 a 100, cada um separado por uma
nova linha.

Se o número for um múltiplo de 3, em vez disso, imprime 'fizz'.

Se o número for um múltiplo de 5, em vez disso, imprime 'buzz'.

Se o número for um múltiplo de 3 e um múltiplo de 5, em vez disso, imprime 'fizzbuzz'.


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

void	ft_put_nbr(int n)
{
	char c;

	if (n > 9)
		ft_put_nbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int i = 1;

	while(i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			write(1, "fizzbuzz", 8);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else 
			ft_put_nbr(i);
		write(1, "\n", 1);
		i++;
	}
}

/*
OUTPUT:

sh-5.2$ cc -Wall -Werror -Wextra fizzbuzz.c -o fizzbuzz
sh-5.2$ ./fizzbuzz 
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
16
17
fizz
19
buzz
fizz
22
23
fizz
buzz
26
fizz
28
29
fizzbuzz
31
32
fizz
34
buzz
fizz
37
38
fizz
buzz
41
fizz
43
44
fizzbuzz
46
47
fizz
49
buzz
fizz
52
53
fizz
buzz
56
fizz
58
59
fizzbuzz
61
62
fizz
64
buzz
fizz
67
68
fizz
buzz
71
fizz
73
74
fizzbuzz
76
77
fizz
79
buzz
fizz
82
83
fizz
buzz
86
fizz
88
89
fizzbuzz
91
92
fizz
94
buzz
fizz
97
98
fizz
buzz
sh-5.2$ 
*/