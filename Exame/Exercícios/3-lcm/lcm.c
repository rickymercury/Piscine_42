/*
Assignment name  : lcm
Expected files   : lcm.c
Allowed functions:
--------------------------------------------------------------------------------

Escreva uma função que recebe dois inteiros não assinados como parâmetros e retorna
o MMC (Mínimo Múltiplo Comum) calculado desses parâmetros.

O MMC (Mínimo Múltiplo Comum) de dois inteiros não nulos é o menor inteiro positivo
que é divisível por ambos os inteiros.

Um MMC pode ser calculado de duas maneiras:

    Você pode calcular todos os múltiplos de cada inteiro até ter um múltiplo comum
    diferente de 0.

    Você pode usar o MDC (Máximo Divisor Comum) desses dois inteiros e calcular da
    seguinte forma:

	LCM(x, y) = | x * y | / HCF(x, y)

  | x * y | significa "Valor absoluto do produto de x por y".

 Se pelo menos um dos inteiros for nulo, o MMC é igual a 0.

 Sua função deve ser prototipada da seguinte forma:

  unsigned int    lcm(unsigned int a, unsigned int b);

*/

unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int n;	

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		n = a;
	else
		n = b;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		++n;
	}
}