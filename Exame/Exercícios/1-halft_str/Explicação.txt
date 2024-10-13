1 - FUnção main:  int main(int argc, char **argv)

      - argc (argument count) é o número de argumentos passados para o programa, incluindo o nome do programa.
      - argv (argument vector) é uma matriz de strings, onde cada elemento é um argumento. 
      Por exemplo, argv[0] é o nome do programa, e argv[1], argv[2], etc., são os argumentos fornecidos na linha de comando.

2 - Declaração e Inicialização das Variáveis:

    int i: é utilizada para percorrer os argumentos fornecidos na lonha de comando.
           é inicializada com o valor i = 1. 
           A razão para começar em 1 é que vamos começar a processar o primeiro argumento, sendo que o argumento argv[0] sempre contém o nome do programa, e nós queremos ignorar isso e trabalhar apenas com os argumentos fornecidos.
           A variável i controla o loop externo, que itera sobre os diferentes argumentos.
           A variável i vai assim percorrer os argumentos de argv[1] até argv[argc - 1].
    int j: é utilizada para percorrer os caracteres de cada argumento.
           é inicializado sempre com o valor j = 0 para começar pelo primeiro caractere de cada argumento.
           A variável j controla o loop interno, que itera sobre os caracteres de cada argumento individual.
           A variável j vai assim percorrer os caracteres dentro de cada argumento (de argv[i][0] até o caractere nulo '\0' que termina a string).

3 - Verificação do Número de Argumentos:   if (argc >= 2)

    Este if verifica se o número de argumentos fornecidos é maior ou igual a 2. 
    Isso é importante porque o primeiro argumento (argv[0]) é sempre o nome do programa, então o programa só faz algo útil se houver pelo menos um argumento extra (além do nome do programa).
    
    Se argc for menor que 2, o programa simplesmente não fará nada e terminará.

4 - Loop Externo - Percorrer cada um dos Argumentos:  while (i < argc)

    Este loop externo é responsável por percorrer cada um dos argumentos fornecidos ao programa.
    A variável i começa em 1, pois queremos ignorar o nome do programa (que está em argv[0]) e trabalhar apenas com os argumentos fornecidos.

    argc é o número total de argumentos passados ao programa, incluindo o nome do próprio programa. O loop vai de i = 1 até i < argc, processando cada argumento individualmente.

    Exemplo: Se o comando fosse ./programa "abc" "def", então:

    argc = 3 (um argumento corresponde ao nome do programa, e os outros dois às strings "abc" e "def").
    O loop vai executar duas vezes, uma para argv[1] ("abc") e outra para argv[2] ("def").

5 - Loop Interno - Percorrer cada Caractere de cada String: while (argv[i][j] != '\0')

    Este é o loop interno, responsável por percorrer os caracteres individuais de cada string (argv[i]).
    argv[i] é a string correspondente ao argumento atual.
    A string em C termina com um caractere nulo ('\0'), que marca o fim da string. 
    O loop continua enquanto argv[i][j] não for '\0', ou seja, enquanto não chegarmos ao final da string.

6 - if (j % 2 == 0): Aqui o código decide quais os caracteres da string que devem ser impressos.
                    A condição j % 2 == 0 verifica se o valor de j (a posição atual do caractere na string) é par. Isso é feito calculando o resto da divisão de j por 2.
                    Se o valor de j for par, o caractere será impresso.

    Exemplo:

    Para argv[i] = "abcdef":
           
        Quando j = 0, o caractere 'a' será impresso (posição par).
        Quando j = 1, o caractere 'b' será ignorado (posição ímpar).
        Quando j = 2, o caractere 'c' será impresso (posição par).
        
    E assim por diante.

7 - write(1, &argv[i][j], 1): A função write imprime o caractere da posição j se j for par.
    
8 - Incremento de j:   j++

    Incrementamos a variável j, fazendo com que o próximo caractere da string seja processado na próxima iteração do loop.
    É o que permite que o loop avance de caractere a caractere, dentro da string.

9 - 7. write(1, "\n", 1):  Quando todos os caracteres da string foram processados (quando o loop interno termina), o programa imprime uma quebra de linha (\n).
                           Isso faz com que cada argumento seja impresso numa linha separada.

10 - Incremento de i:   i++

     Depois de processar todos os caracteres de um argumento (argv[i]), o valor de i é incrementado, passando para o próximo argumento.

     Este incremento faz com que o loop externo processe a próxima string (o próximo argumento da linha de comando).



Comando de Execução:   ./a.out "abcdef" "123456" "hello"


1. Inicialização:

    argc = 4 (o nome do programa + 3 strings).
    argv[0] = "./a.out" (nome do programa).
    argv[1] = "abcdef", argv[2] = "123456", argv[3] = "hello".

2. Verificação de Argumentos:  A condição if (argc >= 2) é verdadeira, pois argc = 4.

3. Loop Externo (Percorrer os argumentos):

    Primeira iteração (i = 1):
        Argumento processado: argv[1] = "abcdef".

Loop Interno (Percorrer os caracteres da string "abcdef"):

    j = 0, argv[1][0] = 'a':
        j % 2 == 0, imprime 'a'.
    j = 1, argv[1][1] = 'b':
        j % 2 != 0, salta 'b'.
    j = 2, argv[1][2] = 'c':
        j % 2 == 0, imprime 'c'.
    j = 3, argv[1][3] = 'd':
        j % 2 != 0, salta 'd'.
    j = 4, argv[1][4] = 'e':
        j % 2 == 0, imprime 'e'.
    j = 5, argv[1][5] = 'f':
        j % 2 != 0, salta 'f'.

    Chegou ao final da string (argv[1][6] = '\0').
    Imprime uma nova linha (\n).

Saída até o momento: ace

    Segunda iteração (i = 2):  Argumento processado: argv[2] = "123456".

Loop Interno (Percorrer os caracteres da string "123456"):

    j = 0, argv[2][0] = '1':
        j % 2 == 0, imprime '1'.
    j = 1, argv[2][1] = '2':
        j % 2 != 0, salta '2'.
    j = 2, argv[2][2] = '3':
        j % 2 == 0, imprime '3'.
    j = 3, argv[2][3] = '4':
        j % 2 != 0, salta '4'.
    j = 4, argv[2][4] = '5':
        j % 2 == 0, imprime '5'.
    j = 5, argv[2][5] = '6':
        j % 2 != 0, salta '6'.
    
    Chegou ao final da string (argv[2][6] = '\0').
    Imprime uma nova linha (\n).

Saída até o momento:  ace
                      135

    Terceira iteração (i = 3):  Argumento processado: argv[3] = "hello".

Loop Interno (Percorrer os caracteres da string "hello"):

    j = 0, argv[3][0] = 'h':
        j % 2 == 0, imprime 'h'.
    j = 1, argv[3][1] = 'e':
        j % 2 != 0, salta 'e'.
    j = 2, argv[3][2] = 'l':
        j % 2 == 0, imprime 'l'.
    j = 3, argv[3][3] = 'l':
        j % 2 != 0, salta 'l'.
    j = 4, argv[3][4] = 'o':
        j % 2 == 0, imprime 'o'.

    Chegou ao final da string (argv[3][5] = '\0').
    Imprime uma nova linha (\n).

Saída final:  ace
              135
              hlo

