1 - Função main:  int main(int argc, char **argv)

   1.1 - Verificação do número de argumentos:  if (argc == 2)

    O programa verifica se argc é igual a 2. Isso indica que o usuário forneceu exatamente um argumento além do nome do programa. Se não for, nada acontece e o programa vai direto para a nova linha.


    1.2 - Ignorar espaços e tabulações:  while ((argv[1][i] == 32) || (argv[1][i] == 9))
                                            i++;

    O primeiro while percorre a string até encontrar o primeiro caractere que não seja um espaço (ASCII 32) ou uma tabulação (ASCII 9). O índice i é incrementado até que um caractere válido (não espaço ou tabulação) seja encontrado.

    Exemplo com a string "    Hello World":

    Valor inicial de i: 0.

    Iterações do loop:

        Iteração 1:
            argv[1][i] é ' ' (espaço).
            Como ' ' é igual a 32, i é incrementado para 1.
        Iteração 2:
            argv[1][i] é ' ' (espaço).
            i é incrementado para 2.
        Iteração 3:
            argv[1][i] é ' ' (espaço).
            i é incrementado para 3.
        Iteração 4:
            argv[1][i] é ' ' (espaço).
            i é incrementado para 4.
        Iteração 5:
            argv[1][i] é 'H' (primeira letra da palavra "Hello").
            Como 'H' não é igual a 32 e não é igual a 9, o loop termina.

Valor Final de i após o Primeiro Loop: i = 4


    1.3 - Impressão da primeira palavra:  while (argv[1][i] != '\0' && (argv[1][i] != 32) && (argv[1][i] != 9))
                                          {
                                                write(1, &argv[1][i], 1);
                                                i++;
                                          }

    O segundo while é responsável por imprimir a primeira palavra. Ele continua a imprimir caracteres enquanto não encontrar o final da string, um espaço ou uma tabulação.
    A função write(1, &argv[1][i], 1) escreve o caractere atual na saída padrão.

    Condições do loop:

        O loop continua enquanto:
            argv[1][i] não é igual a '\0' (ou seja, não chegamos ao final da string).
            argv[1][i] não é igual a 32 (espaço).
            argv[1][i] não é igual a 9 (tabulação).

     Iterações do loop:

        Iteração 1:
            argv[1][i] é 'H' (primeira letra da palavra "Hello").
            Condições: argv[1][i] != '\0' é verdadeiro, argv[1][i] != 32 é verdadeiro, e argv[1][i] != 9 é verdadeiro.
            O programa executa write(1, &argv[1][i], 1);, imprimindo 'H'.
            i é incrementado para 5.

        Iteração 2:
            argv[1][i] é 'e'.
            Condições: todas são verdadeiras.
            O programa imprime 'e'.
            i é incrementado para 6.

        Iteração 3:
            argv[1][i] é 'l'.
            Condições: todas são verdadeiras.
            O programa imprime 'l'.
            i é incrementado para 7.

        Iteração 4:
            argv[1][i] é 'l'.
            Condições: todas são verdadeiras.
            O programa imprime 'l'.
            i é incrementado para 8.

        Iteração 5:
            argv[1][i] é 'o'.
            Condições: todas são verdadeiras.
            O programa imprime 'o'.
            i é incrementado para 9.

        Iteração 6:
            argv[1][i] é um espaço (' ').
            A condição argv[1][i] != 32 não é mais verdadeira.
            O loop termina.

No final do segundo loop, as seguintes ações ocorreram:

    Os caracteres 'H', 'e', 'l', 'l', e 'o' foram impressos, formando a palavra "Hello".
    O valor final de i ao sair do loop é 9, que é o índice do espaço que segue a palavra "Hello".

    
    1.4 - Nova linha após a palavra: write(1, "\n", 1);

    Após imprimir a primeira palavra, o programa escreve uma nova linha na saída padrão usando write(1, "\n", 1).

    1.5 - Finalização: O programa termina com return (0), indicando que a execução foi bem-sucedida.


    
FLUXOGRAMA


+-------------------------------------------------+
|                  Início do Programa              |
+-------------------------------------------------+
                     |
                     v
+-------------------------------------------------+
|         Recebe argumentos argc e argv            |
+-------------------------------------------------+
                     |
                     v
+-------------------------------------------------+
|            Verifica se argc == 2 ?               |
+-------------------------------------------------+
            |                    |
            |                    |
           Sim                  Não
            |                    |
            |                    v
            |        +----------------------------------+
            |        |   Imprime uma nova linha         |
            |        +----------------------------------+
            |                    |
            |                    v
            |        +----------------------------------+
            |        |   Fim do Programa                |
            |        +----------------------------------+
            |
            v
+-------------------------------------------------+
|   Inicializa i = 0                               |
+-------------------------------------------------+
                     |
                     v
+-------------------------------------------------+
|   Ignora espaços (ASCII 32) e tabulações        |
|   (ASCII 9) enquanto forem espaços ou tabulações|
|   Incrementa i até encontrar um caractere válido|
+-------------------------------------------------+
                     |
                     v
+-------------------------------------------------+
|  Verifica se o próximo caractere é nulo ?       |
+-------------------------------------------------+
            |                    |
            |                    |
           Sim                  Não
            |                    |
            |                    v
            |        +----------------------------------+
            |        | Imprime caracteres da primeira   |
            |        |  palavra até ao espaço ou fim    |
            |        +----------------------------------+
            |                    |
            |                    v
            |         +------------------------------+
            |         |     Imprime uma nova linha   |
            |         +------------------------------+
            |                    |
            |                    v
            |         +------------------------------+
            |         |          Fim do Programa     |
            |         +------------------------------+
            |
            v
+-------------------------------------------------+
|            Imprime uma nova linha               |
+-------------------------------------------------+
            |
            |
            v
+-------------------------------------------------+
|               Fim do Programa                   |
+-------------------------------------------------+



Início do Programa: O programa inicia sua execução.

Recebe argumentos: O programa obtém os parâmetros de entrada, argc e argv.

Verificação de Argumentos:

    O programa verifica se o número de argumentos (argc) é igual a 2.
        Se Sim, o programa continua.
        Se Não, o programa termina imediatamente.

Inicialização: A variável i é inicializada com 0, usada como índice para percorrer a string.

Ignorar Espaços e Tabulações:

    O programa entra num loop para ignorar todos os caracteres que são espaços (ASCII 32) ou tabulações (ASCII 9), incrementando i até que um caractere válido (não espaço ou tabulação) seja encontrado.

Verificação do Caractere Atual:

    O programa verifica se o caractere atual não é o final da string ('\0').
        Se Sim, o programa entra em um loop para imprimir a primeira palavra, que consiste em caracteres até encontrar um espaço ou tabulação.
        Se Não, o programa vai diretamente para a impressão da nova linha.

Impressão da Primeira Palavra:

    O programa imprime os caracteres da primeira palavra na saída padrão.

Impressão de Nova Linha: O programa escreve uma nova linha na saída.

Fim do Programa: O programa termina sua execução.