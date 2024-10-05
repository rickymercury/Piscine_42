/*
Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Escreva a seguinte função:

int max(int* tab, unsigned int len);

O primeiro parâmetro é um array de int, e o segundo é o número de elementos no array.

A função retorna o maior número encontrado no array.

Se o array estiver vazio, a função retorna 0.
*/

int max(int *tab, unsigned int len)
{
	int result;
	unsigned int i = 0;
	
	if (len == 0)
		return (0);
	result = tab[i];
	while(i < len)
	{
		if (result <  tab[i])
			result = tab[i];
		i++;
	}
	return result;
}