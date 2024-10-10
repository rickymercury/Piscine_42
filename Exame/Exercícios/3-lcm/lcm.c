/*
Assignment name  : lcm
Expected files   : lcm.c
Allowed functions:
--------------------------------------------------------------------------------

Escreva uma função que recebe dois unsigned int como parâmetros e retorna
o LCM (Mínimo Múltiplo Comum) calculado desses parâmetros.

O LCM (Mínimo Múltiplo Comum) de dois inteiros não nulos é o menor inteiro positivo
que é divisível por ambos os inteiros.

Um LCM pode ser calculado de duas maneiras:

    Podemos calcular todos os múltiplos de cada inteiro até termos um múltiplo comum
    diferente de 0.

    Podemos usar o HCF (Máximo Divisor Comum) desses dois inteiros e calcular da
    seguinte forma:

	LCM(x, y) = | x * y | / HCF(x, y)

  | x * y | significa "Valor absoluto do produto de x por y".

 Se pelo menos um dos inteiros for nulo, o LCM é igual a 0.

 A tua função deve ser prototipada da seguinte forma:

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

/*
 #include <stdio.h>

 int	main(void)
 {
  	printf("%u\n", lcm(4, 15));
 }
 */