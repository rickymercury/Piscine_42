/*
Assignment name  : ft_djamal
Expected files   : ft_djamal.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva uma função ft_djamal que receberá três inteiros como parâmetros e retornará o valor mediano. Esta função será prototipada da seguinte forma:

int ft_djamal(int t, int j, int k);

*/

int		ft_djamal(int i, int j, int k)
{
	if (i >= j && i >= k)
	{
		if (j >= k)
			return (j);
		else
			return (k);
	}
	if (j >= i && j >= k)
	{
		if (i >= k)
			return (i);
		else
			return (k);
	}
	if (k >= j && k >= i)
	{
		if (j >= i)
			return (j);
		else
			return (i);
	}
	return(i);
}

// ou 

#include <unistd.h>

int ft_djamal(int t, int j, int k)
{
    if ((t >= j && t <= k) || (t <= j && t >= k))
        return t;
    else if ((j >= t && j <= k) || (j <= t && j >= k))
        return j;
    else
        return k;
}

/*
int main(int argc, char **argv)
{
    int median = ft_djamal(10, 20, 15);
    char str[12];
    int len = snprintf(str, sizeof(str), "%d\n", median);
    write(1, str, len);
    return 0;
}
*/