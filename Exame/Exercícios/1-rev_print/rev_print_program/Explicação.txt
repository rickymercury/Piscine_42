1 - Função main:  int main(int argc, char **argv)

    Define a função principal do programa. Aqui, argc é o número de argumentos passados para o programa (incluindo o nome do programa), e argv é um array de strings que contém esses argumentos.

    1.1 - Declaração e inicialização da variável i:  int i = 0

          Declara uma variável inteira i, que será usada como um índice para percorrer a string fornecida como argumento.

          Inicialização de i:

          Inicializa i com 0, que servirá para contar o comprimento da string.

    1.2 - Verificação do número de argumentos: if (argc == 2)
     
          Verifica se o número de argumentos passados é igual a 2. Se não for, o código dentro deste bloco não será executado.

    1.3 - Contar o comprimento da string:  while (argv[1][i] != '\0') 
                                                i++
    
          Este loop percorre a string fornecida (argv[1]), em que incrementa i até encontrar o caractere nulo ('\0'), que indica o final da string. Após a execução deste loop, i vai conter o comprimento da string.

    1.4 - Imprimir a string em ordem reversa:  while (i > 0)
    
          Este loop é responsável por imprimir os caracteres da string em ordem reversa.

          write(1, &argv[1][i - 1], 1): A função write é chamada para escrever um único caractere na saída padrão. Aqui, &argv[1][i - 1] obtém o endereço do último caractere da string (porque i é o comprimento total da string, e o último índice é i - 1).

          i--: Decrementa i em 1 para passar para o próximo caractere (para trás na string).

    1.5 - Impressão de nova linha:  write(1, "\n", 1)
    
          Após a impressão de todos os caracteres da string em ordem reversa, imprime uma nova linha.

    1.6 - Retorno da função main:  return (0)
     
          Retorna 0 ao sistema operacional, indicando que o programa terminou com sucesso.

    

Suponhamos que executamos o programa da seguinte maneira:

./programa "Benfica"

        Entrada:
        O programa recebe argc = 2 (o nome do programa é contado como o primeiro argumento).
        argv[1] é "Benfica".

    Inicialização:

        A variável i é inicializada com 0.

    Contar o Comprimento da String:

        O loop while (argv[1][i] != '\0') é executado:

            Iteração 1: i = 0, argv[1][0] é 'B' → i é incrementado para 1.
            Iteração 2: i = 1, argv[1][1] é 'e' → i é incrementado para 2.
            Iteração 3: i = 2, argv[1][2] é 'n' → i é incrementado para 3.
            Iteração 4: i = 3, argv[1][3] é 'f' → i é incrementado para 4.
            Iteração 5: i = 4, argv[1][4] é 'i' → i é incrementado para 5.
            Iteração 6: i = 5, argv[1][5] é 'c' → i é incrementado para 6.
            Iteração 7: i = 6, argv[1][6] é 'a' → i é incrementado para 7.
            Iteração 8: i = 7, argv[1][7] é '\0' → o loop termina.

        Após o loop, i é igual a 7, que é o comprimento da string.

    Imprimir a String em Ordem Reversa:

        O loop while (i > 0) começa a imprimir os caracteres em ordem reversa:

            Iteração 1: i = 7 → write(1, &argv[1][6], 1) → imprime 'a'.
            Iteração 2: i = 6 → write(1, &argv[1][5], 1) → imprime 'c'.
            Iteração 3: i = 5 → write(1, &argv[1][4], 1) → imprime 'i'.
            Iteração 4: i = 4 → write(1, &argv[1][3], 1) → imprime 'f'.
            Iteração 5: i = 3 → write(1, &argv[1][2], 1) → imprime 'n'.
            Iteração 6: i = 2 → write(1, &argv[1][1], 1) → imprime 'e'.
            Iteração 7: i = 1 → write(1, &argv[1][0], 1) → imprime 'B'.
            Iteração 8: i = 0 → o loop termina.

    Imprimir Nova Linha:

        Após o loop, o comando write(1, "\n", 1) é executado, imprimindo uma nova linha.

Saída Final: acifneB