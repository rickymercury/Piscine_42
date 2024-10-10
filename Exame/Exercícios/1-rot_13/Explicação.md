1 - Função main:   int	main(int argc, char **argv)

    Esta é a função principal do programa, onde argc conta o número de argumentos passados ao programa e argv é um array de strings que contém esses argumentos.

    1.1 - Verificação do Número de Argumentos:  if (argc == 2)

          O programa verifica se exatamente dois argumentos foram fornecidos (o nome do programa e a string a ser convertida). Se não, o programa vai para o final e imprime apenas uma nova linha.
    1.2 - Loop para Processar a String:  while(argv[1][i] != '\0')

          O loop while é usado para percorrer cada caractere da string até encontrar o caractere nulo \0, que indica o final da string.

    1.3 - Condição para Substituir Caracteres:

          1.3.1 - Verifica se a letra está entre 'A' e 'M' ou 'a' e 'm':

                  if (argv[1][i] >= 'A' && argv[1][i] <= 'M' 
                     || argv[1][i] >= 'a' && argv[1][i] <= 'm')
                     argv[1][i] += 13;

                  Se a letra atual está na primeira metade do alfabeto (A-M ou a-m), é adicionado 13 ao seu valor ASCII, resultando na letra que está 13 posições à frente.

                  Por exemplo, 'A' torna se 'N' e 'a' torna se 'n'.

          1.3.2 - Verifica se a letra está entre 'N' e 'Z' ou 'n' e 'z':

                  else if (argv[1][i] >= 'N' && argv[1][i] <= 'Z' 
                          || argv[1][i] >= 'n' && argv[1][i] <= 'z')
                      argv[1][i] -= 13;

                   Se a letra atual está na segunda metade do alfabeto (N-Z ou n-z), subtraímos 13 do seu valor ASCII, resultando na letra que está 13 posições atrás.

                   Por exemplo, 'N' se torna 'A' e 'n' se torna 'a'.

    1.4 - Impressão do Caractere:  write(1, &argv[1][i], 1);

    A função write imprime o caractere atual (modificado ou não) na saída padrão.

    1.5 - Incremento do Índice:  i++;

    O índice i é incrementado para passar para o próximo caractere da string.

    1.6 - Impressão de uma Nova Linha:  write(1, "\n", 1);

    Após o loop, o programa imprime uma nova linha para garantir que a saída esteja formatada corretamente.