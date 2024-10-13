1 - Função main:  int main(int argc, char **argv)

    argc: é um contador que representa o número de argumentos passados na linha de comando, incluindo o nome do programa.

    argv: é um array de strings que contém os argumentos passados, onde argv[0] é o nome do programa e argv[1] é o primeiro argumento.

2 - Verificação do Número de Argumentos:  if (argc == 2)


    Este bloco verifica se o número de argumentos (argc) é exatamente 2. 
    
    Se for, o programa entra no bloco de código.
    
    Caso contrário, imprime uma nova linha (\n) e encerra a execução com return 0. Isso significa que, se o utilizador não passar exatamente um argumento, o programa apenas imprimirá uma nova linha.

3 - Percorrer a String:  while (argv[1][i] != '\0')

    O loop continua enquanto o caractere atual na string argv[1] (o primeiro argumento do programa) não for o caractere nulo ('\0'), que indica o final da string.
    POrtanto, o loop vai percorrer cada caractere da string, um por um, até alcançar o final.

4 - Escrever o Caractere Atual:  write(1, &argv[1][i], 1);

    A função write é usada para imprimir o caractere atual (o caractere na posição i da string) na saída padrão.

5 - Verificar se Não é o Último Caractere:

                    if (argv[1][i + 1] != '\0')
                        write(1, "   ", 3);

    Aqui, o código verifica se o próximo caractere (argv[1][i + 1]) não é o caractere nulo. 
    Isso é feito para garantir que os três espaços em branco (" ") só sejam adicionados entre os caracteres, e não após o último.

    Se o próximo caractere não for '\0', a função write imprime três espaços (" ").

6 - Incremento do Índice:  i++;

    A variável i é incrementada, para que na próxima iteração do loop o código examine o próximo caractere da string argv[1].
    Passa assim para o próximo caractere.

7 - Nova Linha ao Final:  write(1, "\n", 1);

    Após imprimir todos os caracteres e os espaços, o programa imprime uma nova linha no final. 
    Isso garante que o prompt de comando do terminal apareça numa nova linha após a execução do programa.

8 - Retorno da Função:  return (0);

    O programa retorna 0 para indicar que a execução foi bem-sucedida.



Suponha que o argumento passado para o programa seja "abc".

    Iteração 1:

        i = 0: argv[1][0] é 'a'.
        O loop imprime 'a' e verifica se argv[1][1] (que é 'b') não é '\0', então imprime três espaços.
        i é incrementado para 1.

    Iteração 2:

        i = 1: argv[1][1] é 'b'.
        O loop imprime 'b' e verifica se argv[1][2] (que é 'c') não é '\0', então imprime três espaços.
        i é incrementado para 2.

    Iteração 3:

        i = 2: argv[1][2] é 'c'.
        O loop imprime 'c' e verifica se argv[1][3] (que é '\0') não é '\0', então não imprime os espaços.
        i é incrementado para 3.

    Iteração 4:

        i = 3: argv[1][3] é '\0'.
        O loop termina, pois a condição argv[1][i] != '\0' não é mais verdadeira.

Resultado Final: No final do loop, a saída no terminal será: a   b   c

E depois disso, o código imprime uma nova linha.




