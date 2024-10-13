1 - Função main:  int main(int argc, char **argv)

    argc (argument count) é o número de argumentos passados para o programa, incluindo o nome do programa.

    argv (argument vector) é um array de strings que contém os argumentos passados para o programa.
    
2 - Verificação do Número de Argumentos:   if (argc == 2)

    Verifica se o número de argumentos é 2: O programa só prossegue se o utilizador passar exatamente um argumento, além do nome do programa. 
    Caso contrário, não faz nada a não ser imprimir uma nova linha.

3 - Declaração e Inicialização das Variáveis: 
    
    As variáveis left e right são utilizadas como índices para percorrer a string fornecida pelo utilizador (armazenada em argv[1]) e verificar se ela é um palíndromo. 

    int left: representa o índice do caractere que está a ser examinado a partir do início da string. 
    Ou, ela começa a partir do primeiro caractere da string e avança em direção ao centro da string à medida que a verificação avança.
    É inicializada com 0, que corresponde à posição do primeiro caractere da string.

    int right: representa o índice do caractere que está a ser examinado a partir do final da string. 
    Ela começa no último caractere válido da string (antes do caractere nulo '\0') e retrocede em direção ao centro da string à medida que a verificação avança.
    Inicialmente, ela é definida com 0, mas é ajustada logo após o cálculo do comprimento da string.

    Como vão ser tratadas as varíaveis ao longo do programa?
    
       - Comparação Simétrica: O programa utiliza as varíaveis left e right para comparar os caracteres nas extremidades da string.
                               No primeiro passo do loop de verificação, argv[1][left] (primeiro caractere) é comparado com argv[1][right] (último caractere).
                               Se eles forem iguais, left é incrementado (avança para o próximo caractere) e right é decrementado (retrocede para o caractere anterior).

        - Verificação até o Centro: O loop continua a comparar até que left seja menor que right. 
                                    Isso significa que a comparação é feita até que todos os caracteres tenham sido examinados, ou até que uma discrepância seja encontrada.
                                    Se em qualquer ponto os caracteres não coincidirem, o programa conclui que a string não é um palíndromo e imprime uma nova linha.

4 - Cálculo do Comprimento da String: 

                while (argv[1][right] != '\0')
                right++;

    Este loop é responsável por calcular o comprimento da string que foi passada como argumento ao programa. 

    Este loop continua a executar enquanto o caractere na posição right da string argv[1] não for o caractere nulo ('\0'), ou seja, quando não chegar ao fim.

    O loop vai verificar cada caractere da string, a começar a partir da posição right (inicialmente 0) e vai avançando uma posição de cada vez, até encontrar o caractere nulo.

    Ele determina o índice do último caractere da string (excluindo o caractere nulo que indica o final da string).

    Assim, right passa a ser o índice do último caractere da string.

    De seguida, right é incrementado a cada iteração. 
    Isso significa que right irá percorrer todos os índices da string, começando do 0 até chegar ao índice do caractere nulo.

    Por exemplo, se argv[1] contiver a string "hello", as iterações seriam assim:

    1ª iteração: right = 0 (caractere 'h')
    2ª iteração: right = 1 (caractere 'e')
    3ª iteração: right = 2 (caractere 'l')
    4ª iteração: right = 3 (caractere 'l')
    5ª iteração: right = 4 (caractere 'o')
    6ª iteração: right = 5 (caractere nulo '\0')

    Resultado: Quando right atinge 5, o loop para, porque argv[1][5] é '\0'.

5 - Ajuste do Indice right: right--

    Após o loop, right é decrementado. 
    Isso é feito porque, no final do loop, right está a apontar para o caractere nulo ('\0'), que não devemos contar como parte do comprimento da string.

    No exemplo da string "hello", após o right++, right seria 5. Após o right--, right vai ficar 4, que é o índice do caractere 'o'.

6 - Verificação do Palíndromo:  A partir daqui, vamos verificar se a string argv[1] é um palíndromo. 
                                Um palíndromo é uma sequência que é lida da mesma forma de frente para trás e de trás para frente. 
                                A ideia é comparar os caracteres da string de forma simétrica, ou seja, o primeiro caractere com o último, o segundo com o penúltimo, e assim por diante.

    - while (left < right): O loop continua enquanto left (que começa do início da string) for menor que right (que começa do final da string). 
                            Este loop compara os caracteres da string a partir das extremidades em direção ao centro da mesma. 
                            Isto vai garantir que o loop percorre a string até que todos os pares de caracteres correspondentes tenham sido comparados. 
                            Se left for igual a right, significa que todos os caracteres foram verificados e, se chegamos a este ponto sem encontrar discrepâncias, a string é um palíndromo.

     - if (argv[1][left] != argv[1][right]): Aqui, o código compara o caractere na posição left com o caractere na posição right.
     O que acontece:

        - Se os caracteres não forem iguais, isso significa que a string não é um palíndromo.
        Neste caso, a função escreve uma nova linha ("\n") e retorna 0, o que indica que a string não é um palíndromo.

     - left++: Após a comparação, left é incrementado, movendo-se para o próximo caractere à direita.
    - right--: Simultaneamente, right é decrementado, movendo-se para o próximo caractere à esquerda.

7 - Impressão da String:
    
              int i = 0;
              while (argv[1][i] != '\0')
              {
                  write(1, &argv[1][i], 1);
                  i++;
              }
    
    Esse bloco é responsável por imprimir a string argv[1] caractere por caractere na saída padrão. 
    A ideia é que, se a string for um palíndromo, cada um de seus caracteres deve ser exibido.

    Inicialização do Índice i: A variável i é inicializada com 0. Essa variável será usada como um índice para acessar os caracteres da string argv[1], começando no primeiro (i = 0).

    - while (argv[1][i] != '\0'): O loop vai continuar enquanto o caractere na posição i da string argv[1] não for o caractere nulo ('\0'), Isso significa que, quando argv[1][i] for igual a '\0', o loop deixa de iterar, pois todos os caracteres da string foram processados.

    - write(1, &argv[1][i], 1): a função write é utilizada para escrever um caracter de cada vez.

    - i++ : Após imprimir o caractere, i é incrementado.
            Isso faz com que, na próxima iteração do loop, acessemos o próximo caractere da string.

8 - Em Caso de Não ser um Palíndromo: 

                   {
                        write(1, "\n", 1);
                        return (0);
                   }

    Se os caracteres não forem iguais, o programa imprime uma nova linha e sai com return (0).



Exemplo:

Suponha que o utilizador executa o programa da seguinte forma:   ./is_palindrome "racecar"

    argc será 2 (porque temos o nome do programa e a string).
    argv[1] será "racecar".

Verificamos o Número de Argumentos: O programa verifica se argc == 2. Como isso é verdade, o fluxo continua.

Inicializamos as Variáveis:

    left = 0;
    right = 0;

Calculamos o Comprimento da String: O programa entra no primeiro while para calcular o comprimento da string:  while (argv[1][right] != '\0')
                                                                                                                    right++;
    Iteração 1: right torna se 1 (caractere 'r').
    Iteração 2: right torna se 2 (caractere 'a').
    Iteração 3: right torna se 3 (caractere 'c').
    Iteração 4: right torna se 4 (caractere 'e').
    Iteração 5: right torna se 5 (caractere 'c').
    Iteração 6: right torna se 6 (caractere 'a').
    Iteração 7: right torna se 7 (caractere 'r').
    Iteração 8: right torna se 8 (caractere '\0'), e o loop termina.

Então, right é decrementado para ficar 6 (que é o índice do último caractere 'r').

Verifica se É um Palíndromo:  O programa entra no segundo while para verificar se a string é um palíndromo:

                           while (left < right)
                           {
                                if (argv[1][left] != argv[1][right])
                                {
                                    write(1, "\n", 1);
                                    return (0);
                                }
                                left++;
                                right--;
                            }

    Iteração 1:
        left = 0, right = 6: Compara 'r' com 'r' (iguais).
        Incrementa left para 1 e decrementa right para 5.

    Iteração 2:
        left = 1, right = 5: Compara 'a' com 'a' (iguais).
        Incrementa left para 2 e decrementa right para 4.

    Iteração 3:
        left = 2, right = 4: Compara 'c' com 'c' (iguais).
        Incrementa left para 3 e decrementa right para 3.

    Agora left é igual a right (ambos são 3), então o loop termina.

Como todos os caracteres correspondem, a string é um palíndromo.

Impressão da String: O programa entra no próximo while para imprimir a string:

                        int i = 0;
                        while (argv[1][i] != '\0')
                        {
                            write(1, &argv[1][i], 1);
                            i++;
                        }

    Iteração 1: Imprime 'r'.
    Iteração 2: Imprime 'a'.
    Iteração 3: Imprime 'c'.
    Iteração 4: Imprime 'e'.
    Iteração 5: Imprime 'c'.
    Iteração 6: Imprime 'a'.
    Iteração 7: Imprime 'r'.
    Iteração 8: Encontra '\0', termina o loop.

Adicionamos uma Nova Linha: Depois de imprimir a string, o programa executa:  write(1, "\n", 1);

O resultado final exibido no terminal será:  racecar

