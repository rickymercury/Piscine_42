Este código é um programa que calcula a soma de todos os números primos até um número dado como argumento da linha de comando. 
Se o número de argumentos for incorreto, o programa imprime 0 seguido de uma nova linha. 
Caso contrário, ele soma todos os números primos menores ou iguais ao número fornecido e imprime o resultado. 


1 - ft_putchar: Esta função recebe um caractere (char c) e o imprime utilizando a função write.

2 - ft_putnbr: Esta função imprime um número inteiro (int n), ao chamar ft_putchar para cada dígito.
    
    A função funciona de maneira recursiva:

        Se n for maior ou igual a 10, a função divide o número em dois: o quociente (n / 10) e o resto (n % 10).
        O quociente é processado recursivamente para garantir que todos os dígitos sejam convertidos em caracteres, enquanto o resto é convertido diretamente num caractere.

3 - ft_atoi: Esta função converte uma string de caracteres num número inteiro.
             Começa com o valor result igual a 0.
             Para cada caractere da string, multiplica result por 10 e adiciona o valor do dígito (subtraindo '0' para converter o caractere num valor numérico).

4 - ft_is_prime: Verifica se um número é primo.
                 O número nb é testado contra todos os divisores possíveis começando em 2 até nb / divisor.
                 
                 Se encontrar algum divisor, retorna 0 (não é primo); 
                 Se não encontrar nenhum divisor, retorna 1 (é primo).

5 - Função main:  int	main(int argc, char **argv)

    5.1 - Verificação de argumentos:

          A função main começa a verificar se o número de argumentos é diferente de 2 (argc != 2).
          Se for, o programa imprime 0 seguido de uma nova linha e termina.
        
        Exemplo de execução: ./program (sem argumentos) imprime 0 e termina.

    5.1 - Conversão de string para número:  n = ft_atoi(argv[1]);
          
          Se o número de argumentos for correto, a função ft_atoi é chamada para converter a string (argv[1]) num número inteiro (n).

        Exemplo de execução: Se argv[1] for "10", n será 10.

    5.2 - Soma de números primos:

          O programa então inicia um loop while (n > 1) para somar todos os números primos menores ou iguais a n.

          Em cada iteração do loop:

                         while (n > 1)
	                     {
	                       	 if (ft_is_prime(n))
			                     sum += n;
		                     n--;
	                     }

           Verifica se n é primo utilizando a função ft_is_prime(n).
        
           Se n for primo, ele é somado à variável sum.
          
           O valor de n é decrementado até que seja menor ou igual a 1.

        Exemplo de execução: Se n = 10, o programa soma 7, 5, 3 e 2 (todos os primos menores ou iguais a 10), o que resulta em 17.

    5.3 - Impressão do resultado:

                    ft_putnbr(sum);
	                ft_putchar('\n');

    Após o loop, o valor de sum é impresso utilizando a função ft_putnbr.
    Uma nova linha é adicionada no final com ft_putchar('\n').



Exemplo 1:

ENtrada:  ./program 10

Passo a Passo:

    Verificação de Argumentos: argc == 2, então o programa continua, já que foi passado um argumento válido.

    Conversão da String para Inteiro:

        argv[1] é a string "10".
        A função ft_atoi é chamada, que converte "10" no número inteiro 10.

    Loop de Soma de Números Primos: O loop começa com n = 10 e vai ser decrementado até n = 1, somando os números primos.

    Iterações do loop:

        n = 10: ft_is_prime(10) retorna 0 (não é primo), então não soma.
        n = 9: ft_is_prime(9) retorna 0 (não é primo), então não soma.
        n = 8: ft_is_prime(8) retorna 0 (não é primo), então não soma.
        n = 7: ft_is_prime(7) retorna 1 (é primo), então sum = 0 + 7 = 7.
        n = 6: ft_is_prime(6) retorna 0 (não é primo), então não soma.
        n = 5: ft_is_prime(5) retorna 1 (é primo), então sum = 7 + 5 = 12.
        n = 4: ft_is_prime(4) retorna 0 (não é primo), então não soma.
        n = 3: ft_is_prime(3) retorna 1 (é primo), então sum = 12 + 3 = 15.
        n = 2: ft_is_prime(2) retorna 1 (é primo), então sum = 15 + 2 = 17.
        n = 1: o loop termina, pois agora n = 1.

    Impressão do Resultado:

        A função ft_putnbr(17) é chamada para imprimir o valor 17.
        O programa então imprime uma nova linha.

Saída:  17
