/*
Assignment name  : halft_str
Expected files   : halft_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que receba como parâmetro uma ou mais cadeias de caracteres e
que exiba cada cadeia na ordem, um caractere a cada dois.

Esse programa deve exibir o resultado na saída padrão, seguido de uma quebra de linha.

A exibição sempre termina por uma quebra de linha. O programa deve retornar uma quebra
de linha se não houver nenhum parâmetro.

Examples:

$>./half_str "abc"
ac
$>
$>./half_str "test de phrase" "deuxieme test" "un avant dernier test" "" "enfin c est finis" |
ts eprs$
duim et$
u vn ene et$
$
efncetfns$
$>
$>./half_str "a btcfdceqf gehdiajikhllmgnaovpyqer srttuuvawcxayaz" "142637415869728395" "
" "Baodnxnce
cshja4nycrew qaq dtdoduqsq" | cat -e
abcdefghijklmnopqrstuvwxyz$
123456789$
$
Bonne chance a tous$
$>
$>./half_str | cat -e
$
$>
*/

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	half_str(char *str)
{
	int		idx;

	idx = 0;
	while (str[idx])
	{
		if (!(idx % 2))
			ft_putchar(str[idx]); //write(1, &str[idx], 1);
		idx++;
	}
}

int		main(int argc, char **argv)
{
	int	idx;

	idx = 1;
	if (argc != 2)
	{
		while (idx < argc)
		{
			half_str(argv[idx]);
			idx++;
		}
	}
	ft_putchar('\n');
	return (0);
}

// ou

#include <unistd.h>

void    half_str(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (i % 2 == 0)
            write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    int i;

    if (argc < 2)
    {
        write(1, "\n", 1);
        return (0);
    }

    i = 1;
    while (i < argc)
    {
        half_str(argv[i]);
        write(1, "\n", 1);
        i++;
    }

    return (0);
}
