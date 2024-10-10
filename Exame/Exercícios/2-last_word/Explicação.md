1 - Verificação do número de argumentos:   if (argc == 2)

    O código só será executado se o número de argumentos for 2, ou seja, o nome do programa (contado automaticamente como argv[0]) e uma string passada como argumento (argv[1]).
    Se forem passados mais ou menos de dois argumentos, o programa não faz nada além de imprimir uma nova linha.

2 - Inicialização de variáveis:

                              int i = 0;
                              int j = 0;

    i será usado para iterar sobre cada caractere da string.
    j armazenará o índice da primeira letra da última palavra encontrada.

3 - Loop para percorrer a string:   while (argv[1][i])

    Este while percorre todos os caracteres da string fornecida até encontrar o caractere \0 (final da string).

4 - Detetar o início da última palavra:

                if (argv[1][i] == 32 && argv[1][i + 1] >= 33)
                    j = i + 1;

    A condição verifica se o caractere atual é um espaço (valor ASCII 32) e se o próximo caractere é um caractere imprimível (valor ASCII maior ou igual a 33).

    Se essas condições forem verdadeiras, isso indica que o próximo caractere (argv[1][i + 1]) é o início de uma nova palavra. 
    Nesse caso, a variável j é atualizada para a posição seguinte (i + 1), ou seja, o índice da primeira letra dessa nova palavra.

5 - Impressão da última palavra:

                     while (argv[1][j])
                     {
                          write(1, &argv[1][j], 1);
                          j++;
                     }

    Após o término do primeiro while, j aponta para o início da última palavra encontrada.
    Este segundo loop imprime cada caractere a partir da posição j até o final da string.

6 - Nova linha ao final:    write(1, "\n", 1);

    Após imprimir a última palavra, o programa imprime uma nova linha para garantir que a saída termine corretamente.




Exemplo de fluxo:

Entrada:  ./a.out "hello world"

    O programa verifica se o número de argumentos (argc) é 2. Nesse caso, o número de argumentos está correto, então o programa continua.

    Inicializa as variáveis i e j:  int i = 0;
                                    int j = 0;

O primeiro while percorre a string "hello world" utilizando i para encontrar a última palavra:

    Iteração 1 (i = 0): O caractere argv[1][0] é 'h'. Não é um espaço, então nada acontece.
    Iteração 2 (i = 1): O caractere argv[1][1] é 'e'. Não é um espaço, então nada acontece.
    Iteração 3 (i = 2): O caractere argv[1][2] é 'l'. Não é um espaço, então nada acontece.
    Iteração 4 (i = 3): O caractere argv[1][3] é 'l'. Não é um espaço, então nada acontece.
    Iteração 5 (i = 4): O caractere argv[1][4] é 'o'. Não é um espaço, então nada acontece.

    Iteração 6 (i = 5): O caractere argv[1][5] é um espaço (' '), e o próximo caractere (argv[1][6]) é 'w' (maior ou igual a 33).
       Isso indica que a palavra seguinte começa na posição 6 (i + 1).
    Atualiza j = 6 (pois j = i + 1)

    Iteração 7 (i = 6 até ao fim da string):
    O programa continua a percorrer a string, mas j já está na posição da última palavra.

O segundo while imprime a palavra a partir da posição j = 6:

    Iteração 1 (j = 6): O caractere argv[1][6] é 'w'. O programa imprime 'w'.
    Iteração 2 (j = 7): O caractere argv[1][7] é 'o'. O programa imprime 'o'.
    Iteração 3 (j = 8): O caractere argv[1][8] é 'r'. O programa imprime 'r'.
    Iteração 4 (j = 9): O caractere argv[1][9] é 'l'. O programa imprime 'l'.
    Iteração 5 (j = 10):O caractere argv[1][10] é 'd'. O programa imprime 'd'.

O programa imprime uma nova linha: write(1, "\n", 1);

Saída esperada:  world



Outro exemplo:

Entrada: ./a.out "42 is the answer"

    Verificação de argumentos:

        O programa começa a verificar se o número de argumentos é igual a 2 (argc == 2). Isso é verdade, já que passamos o programa e a string "42 is the answer". Então, o código continua.

    Inicialização das variáveis: i = 0 e j = 0 são inicializados para controlar a iteração sobre os caracteres da string.

    Primeiro while: O primeiro while percorre a string argv[1], que contém "42 is the answer", caractere por caractere, para identificar o início da última palavra.

        Iterações detalhadas do primeiro while:

            Iteração 1 (i = 0): O caractere é '4' (ASCII 52). Não é um espaço, então o loop continua.
            Iteração 2 (i = 1): O caractere é '2' (ASCII 50). Não é um espaço, o loop continua.
            Iteração 3 (i = 2): O caractere é um espaço ' ' (ASCII 32) e o próximo caractere (argv[1][i + 1], que é 'i' com ASCII 105) é maior ou igual a 33, o que indica o início de uma nova palavra.

            Atualiza j = i + 1 = 3 para marcar o início da palavra "is".

            Iteração 4 (i = 3): O caractere é 'i' (ASCII 105). Não é um espaço, o loop continua.
            Iteração 5 (i = 4): O caractere é 's' (ASCII 115). Não é um espaço, o loop continua.
            Iteração 6 (i = 5): O caractere é um espaço ' ' (ASCII 32). O próximo caractere (argv[1][i + 1], que é 't' com ASCII 116) é maior ou igual a 33.

            Atualiza j = i + 1 = 6 para marcar o início da palavra "the".

            Iteração 7 (i = 6): O caractere é 't' (ASCII 116). Não é um espaço, o loop continua.
            Iteração 8 (i = 7): O caractere é 'h' (ASCII 104). Não é um espaço, o loop continua.
            Iteração 9 (i = 8): O caractere é 'e' (ASCII 101). Não é um espaço, o loop continua.
            Iteração 10 (i = 9):O caractere é um espaço ' ' (ASCII 32). O próximo caractere (argv[1][i + 1], que é 'a' com ASCII 97) é maior ou igual a 33.
            
            Atualiza j = i + 1 = 10 para marcar o início da palavra "answer".

            Iterações 11 a 17: O loop continua até o final da string, mas o valor de j não é mais alterado, pois já encontramos o início da última palavra.

    Segundo while: Após o primeiro loop, j agora aponta para o índice 10, que é o início da palavra "answer".

        O segundo while é responsável por imprimir a palavra a partir da posição j = 10.

        Iterações detalhadas do segundo while:

            Iteração 1 (j = 10): O caractere é 'a'. O programa imprime 'a'.
            Iteração 2 (j = 11): O caractere é 'n'. O programa imprime 'n'.
            Iteração 3 (j = 12): O caractere é 's'. O programa imprime 's'.
            Iteração 4 (j = 13): O caractere é 'w'. O programa imprime 'w'.
            Iteração 5 (j = 14): O caractere é 'e'. O programa imprime 'e'.
            Iteração 6 (j = 15): O caractere é 'r'. O programa imprime 'r'.
            Iteração 7 (j = 16): O caractere é o terminador nulo ('\0'), o que faz o loop parar.

    Impressão da nova linha: Após imprimir a palavra "answer", o programa executa: write(1, "\n", 1);

    Isso imprime uma nova linha no final da saída.

