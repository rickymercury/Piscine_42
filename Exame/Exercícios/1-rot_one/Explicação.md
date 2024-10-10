1 - Função Principal:  int main(int argc, char **argv)

    A função main recebe dois parâmetros: argc, que é o número de argumentos passados na linha de comando, e argv, que é um array de strings contendo esses argumentos.

    1.1 - Verificação do Número de Argumentos:  if (argc == 2)

          O programa verifica se o número de argumentos é igual a 2 (o nome do programa e a string de entrada).
    
          Se o número de argumentos não for 2, ele ignora o processamento da string e vai diretamente para a impressão de uma nova linha.

    1.2 - Iteração sobre os Caracteres da String:  while (argv[1][i])

          O loop continua enquanto o caractere atual (argv[1][i]) não for o caractere nulo ('\0'), que indica o fim da string.

    1.3 - Verificação e Substituição de Caracteres:

          O código contém duas verificações principais para modificar cada caractere da string:

          1.3.1. Para Caracteres de 'A' a 'Y' e 'a' a 'y':

                 if ((argv[1][i] >= 'A' && argv[1][i] <= 'Y') 
                    || (argv[1][i] >= 'a' && argv[1][i] <= 'y'))
                    argv[1][i] += 1;

                 Se o caractere atual estiver entre 'A' e 'Y' (ou entre 'a' e 'y'), ele é incrementado em 1, o que significa que a letra torna se a próxima letra no alfabeto (por exemplo, 'A' torna se 'B', 'y' se torna 'z').

           1.3.2 Para Caracteres 'Z' e 'z':

                 else if (argv[1][i] == 'z' || argv[1][i] == 'Z')
                    argv[1][i] -= 25;

                 Se o caractere atual for 'Z' ou 'z', ele é decrementado em 25. Isso transforma 'Z' em 'A' e 'z' em 'a', garantindo que a sequência alfabética seja circular.

    1.4 - Impressão do Caractere:  write(1, &argv[1][i], 1)

          A função write é utilizada para imprimir o caractere atual na saída padrão.

    1.5 - Incremento do Índice:  i++;

          Após imprimir o caractere, o índice i é incrementado para passar para o próximo caractere da string.

    1.6 - Impressão da Nova Linha:  write(1, "\n", 1);

          Após processar todos os caracteres da string, o programa imprime uma nova linha para garantir que a saída termine com uma linha em branco.



Exemplo de Funcionamento:

    Suponha que:

    ./rotone "abc"

Processamento:

    O programa verifica que argc é 2, então entra no loop.

    Para argv[1][0] ('a'):

        Incrementa para 'b' e imprime.

    Para argv[1][1] ('b'):

        Incrementa para 'c' e imprime.

    Para argv[1][2] ('c'):

        Incrementa para 'd' e imprime.

    O loop termina ao encontrar o caractere nulo.

Saída

    O resultado impresso é: bcd