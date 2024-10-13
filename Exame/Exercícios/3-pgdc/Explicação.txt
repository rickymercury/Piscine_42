1 - Função Principal:  int main(int argc, char **argv)

Esta é a função principal do programa. Ela aceita dois argumentos:

    argc: número de argumentos passados ao programa. O valor mínimo será 1 (nome do programa) e aumenta com os argumentos fornecidos.

    argv: uma lista de strings (vetor de strings) que contém os argumentos passados na linha de comando. argv[0] é o nome do programa, argv[1] e argv[2] são as strings que representam os números passados.

    1.1 - Verificação do Número de Argumentos: if (argc == 3)

          Verificamos se o número de argumentos fornecido é exatamente 3 (o nome do programa e mais dois números). 
          Se argc não for igual a 3, o programa salta para o fim e imprime apenas uma nova linha (printf("\n");).

    1.2 - Declaração de variáveis: int n1;
                                       int n2;
                                       int temp;

           Essas variáveis são:

           n1 e n2: inteiros que vão armazenar os dois números convertidos de strings para inteiros.
           temp: variável temporária utilizada durante o cálculo do Máximo Divisor Comum (MDC).

    1.3 - COnversão de String para Inteiro: n1 = atoi(argv[1]); n2 = atoi(argv[2]);

          Aqui convertemos as strings fornecidas como argumentos (argv[1] e argv[2]) para inteiros e armazenamos os seus valores em n1 e n2, respectivamente.

    1.4 - Verificação:  if (n1 > 0 && n2 > 0)

          Esta verificação garante que ambos os números sejam estritamente positivos, como solicitado no enunciado do problema. 
          Se um dos números for menor ou igual a zero, o programa salta para o fim e imprime apenas uma nova linha.

    1.5 - Algoritmo de Euclides:

                        while (n2 != 0)
                        {
                            temp = n2;
                            n2 = n1 % n2;
                            n1 = temp;
                        }

    De que se trata Algoritmo de Euclides, para calcular o MDC?

     - Enquanto n2 for diferente de 0, o loop continua.
    
    Passo 1: Armazena o valor de n2 em temp. 
             Isso é necessário para não perdermos o valor de n2 na próxima operação.
    Passo 2: Calcula o resto da divisão de n1 por n2 e armazena em n2. 
             Esse resto será o novo valor de n2. O processo de cálculo do MDC envolve sucessivas divisões onde o número maior é substituído pelo número menor, e o número menor é substituído pelo resto da divisão.
    Passo 3: Atribui o valor original de n2 (salvo em temp) a n1. Assim, n1 recebe o valor de n2, e o ciclo continua.

    Quando n2 for igual a 0, o loop termina, e o valor final de n1 será o MDC dos dois números.

    1.6 - printf("%d", n1): Após o loop, o valor de n1 vai conter o MDC dos dois números.             Este valor é impresso.
    
    1.7 - printf("\n"): O programa imprime uma nova linha, seja qual for o caso (argumentos corretos ou não). 
                 
    1.8 - return (0): O programa retorna 0, indicando que a execução foi bem-sucedida.


    Vamos ver um exemplo de execução para ./pgcd 42 12:

    argc == 3, portanto a condição é verdadeira e o código entra no bloco principal.

    n1 = 42, n2 = 12 (ambos são estritamente positivos).

    Algoritmo de Euclides:

        Primeira iteração: temp = 12, n2 = 42 % 12 = 6, n1 = 12.
        Segunda iteração: temp = 6, n2 = 12 % 6 = 0, n1 = 6.

    O loop termina, e n1 agora é 6, que é o MDC de 42 e 12.
    O programa imprime 6 seguido de uma nova linha.

    Outro Exemplo:

    Para ./pgcd 17 3:

    argc == 3, o programa entra no bloco principal.

    n1 = 17, n2 = 3 (ambos estritamente positivos).

    Algoritmo de Euclides:

        Primeira iteração: temp = 3, n2 = 17 % 3 = 2, n1 = 3.
        Segunda iteração: temp = 2, n2 = 3 % 2 = 1, n1 = 2.
        Terceira iteração: temp = 1, n2 = 2 % 1 = 0, n1 = 1.
        
    O loop termina, e n1 agora é 1, que é o MDC de 17 e 3.
    O programa imprime 1 seguido de uma nova linha.