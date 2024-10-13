/*
Assignment name  : buzzfizz
Expected files   : buzzfizz.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que imprima os números de 1 a 100, cada um separado por uma
nova linha.

    Se o número for um múltiplo de 4, imprima 'buzz' no lugar.

    Se o número for um múltiplo de 7, imprima 'fizz' no lugar.

    Se o número for múltiplo de 4 e múltiplo de 7, imprima 'buzzfizz' no lugar.

    Example:

    $>./buzzfizz
    1
    2
    3
    buzz
    5
    6   
    fizz
    buzz
    9
    10
    11
    buzz
    13
    fizz
    15
    buzz
    [...]
    fizz
    buzz
    93
    94
    95
    buzz
    97
    fizz
    99
    buzz

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

int main()
{
    int i;

    i = 0;
    while (i <= 100)
    {
        if ((i % 4 == 0) && (i % 7 == 0))
            write(1, "buzzfizz", 8);
        else if (i % 4 == 0) 
            write(1, "buzz", 4);
        else if (i % 7 == 0)
            write(1, "fizz", 4);
        else
            ft_put_nbr(i);
        write(1, "\n", 1);
        i++;
    }
}

/*
OUTPUT:

sh-5.2$ cc -Wall -Werror -Wextra buzzfizz.c 
sh-5.2$ ./a.out 
1
2
3
buzz
5
6
fizz
buzz
9
10
11
buzz
13
fizz
15
buzz
17
18
19
buzz
fizz
22
23
buzz
25
26
27
buzzfizz
29
30
31
buzz
33
34
fizz
buzz
37
38
39
buzz
41
fizz
43
buzz
45
46
47
buzz
fizz
50
51
buzz
53
54
55
buzzfizz
57
58
59
buzz
61
62
fizz
buzz
65
66
67
buzz
69
fizz
71
buzz
73
74
75
buzz
fizz
78
79
buzz
81
82
83
buzzfizz
85
86
87
buzz
89
90
fizz
buzz
93
94
95
buzz
97
fizz
99
buzz*/