Esta função converte uma string que representa um número inteiro num valor inteiro.


1 - Declaração e Inicialização das Variáveis

int i = 0
int result = 0
int sign = 1

    i: utilizada como um índice para percorrer a string.
       é inicializado como 0 para começar a ler a string a partir do primeiro caractere.

    result: armazena o resultado final da conversão do número.
            é inicializado como 0 porque ainda não houve conversão de nenhum caractere.

    sign: indica se o número é positivo ou negativo. Inicialmente é definido como 1 (positivo).
          é inicializado como 1, assumindo que o número é positivo por padrão.


2 - Ignorar Espaços em Branco

                while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
                     i++;

    Este loop avança o índice i enquanto encontra espaços em branco (' ') ou caracteres de controlo (como tabulações e novas linhas).

    Os caracteres de controlo são verificados pelo seu código ASCII (9 a 13).


3 - Verificar Sinal do Número

                 if (str[i] == '-' || str[i] == '+')
                 {
                      if (str[i] == '-')
                          sign = -1;
                      i++;
                 } 

    Verifica se o caractere atual é um sinal ('-' ou '+').
    Se o caractere é '-', o sign é definido como -1, indicando que o número será negativo.

    O índice i é incrementado para passar o caractere de sinal.

4 - Converter a Parte Numérica

                    while (str[i] >= '0' && str[i] <= '9')
                    {
                        result = result * 10 + str[i] - '0';
                        i++;
                    }

    Este loop continua enquanto o caractere atual for um dígito numérico (de '0' a '9').

    A conversão ocorre ao multiplicar o result por 10 e adicionar o valor do dígito atual:

        str[i] - '0' converte o caractere em seu valor inteiro correspondente (por exemplo, '3' se torna 3).

    O índice i é incrementado para continuar a conversão para o próximo dígito.

5 - Retornar o Resultado Final:   return (sign * result);

    A função retorna o valor final multiplicando o result pelo sign. Isso garante que o número resultante tenha o sinal correto (positivo ou negativo).




Exemplo: "   -42"

    Início da Função:

        i = 0, result = 0, sign = 1

    Ignorar Espaços:

        i++ até encontrar '-', i = 3.

    Verificar Sinal:

        sign torna se -1, i++ → i = 4.

    Converter Parte Numérica:

        str[i] é '4':

            result = 0 * 10 + 4 = 4
            i++ → i = 5

        str[i] é '2':

            result = 4 * 10 + 2 = 42
            i++ → i = 6

        str[i] é '\0', loop termina.

    Resultado Final: Retorna sign * result = -1 * 42 = -42

    Saída: -42



    Exemplo 3: "4193 with words"

    Início da Função:

        i = 0, result = 0, sign = 1

    Ignorar Espaços:

        Não há espaços, i permanece 0.

    Verificar Sinal:

        Não há sinal, sign permanece 1.

    Converter Parte Numérica:

        str[i] é '4':

            result = 0 * 10 + 4 = 4
            i++ → i = 1

        str[i] é '1':

            result = 4 * 10 + 1 = 41
            i++ → i = 2

        str[i] é '9':

            result = 41 * 10 + 9 = 419
            i++ → i = 3

        str[i] é '3':

            result = 419 * 10 + 3 = 4193
            i++ → i = 4

        str[i] é ' ': loop termina.

    Resultado Final: Retorna sign * result = 1 * 4193 = 4193

    Saída: 4193