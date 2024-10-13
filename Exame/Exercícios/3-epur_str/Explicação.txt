Este código tem como objetivo imprimir uma string, removendo espaços extras no início e entre as palavras. 
Ele garante que apenas um espaço seja impresso entre as palavras e remove todos os outros espaços extras (incluindo as quebras de linha, tabulações, etc.). 


1 - ft_putchar: Esta função imprime um único caractere no terminal.
                Ela usa a função write para escrever o caractere c para o arquivo de saída padrão.

2 - ft_isspace: 

                          int ft_isspace(char c)
                          {
                             if (c <= 32)
                                return (1);
                             return (0);
                          }

    Esta função verifica se um caractere é um espaço ou um caractere de controlo.
    A função retorna 1 se o caractere for um espaço (ou um caractere de controlo com valor ASCII menor ou igual a 32, como espaço, tabulação, ou nova linha) e 0 caso contrário.

3 - Função Principal:   int	main(int argc, char **argv)

    As variáveis i e space são inicializadas. i será usado para iterar pela string, e space será usado para controlar se deve imprimir um espaço entre as palavras.

    argc == 2: O código só continua se houver exatamente um argumento de entrada (além do nome do programa).

    3.1 - Ignorar os Espaços no Início :  while (ft_isspace(argv[1][i]))
                                             i++;

          A função ft_isspace é chamada no loop para ignorar todos os caracteres de espaço (ou tabulações, novas linhas, etc.) no início da string.   

    3.2 - Percorrer a string:

                                while (argv[1][i])
                                {
                                    if (ft_isspace(argv[1][i]))
                                        space = 1;
                                    if (!ft_isspace(argv[1][i]))
                                    {
                                       if (space == 1)
                                           ft_putchar(' ');
                                       space = 0;
                                       ft_putchar(argv[1][i]);
                                    }
                                    i++;
                                }
    
          Este while percorre toda a string de entrada (argv[1]) caractere por caractere. 
          A condição argv[1][i] significa "enquanto o caractere atual não for o final da string" (o caractere nulo '\0' marca o fim da string). 
          O valor de i é o índice que percorre os caracteres da string.

          3.2.1 - Verificação de espaço:  if (ft_isspace(argv[1][i]))
                                              space = 1;

                 A função ft_isspace(argv[1][i]) verifica se o caractere atual (em argv[1][i]) é um espaço ou um caractere de controlo (espaço, tabulação, nova linha, etc.).

                 Se o caractere for um espaço, a variável space é marcada como 1. 
                 Isso indica que o próximo caractere não-espaço deve ser precedido por um único espaço (caso haja múltiplos espaços entre as palavras, eles serão condensados em apenas um).

          3.2.2 - Verificação de não-espaço:

                            if (!ft_isspace(argv[1][i]))
                            {          
                                if (space == 1)
                                    ft_putchar(' ');
                                space = 0;
                                ft_putchar(argv[1][i]);
                            }

                  Se o caractere atual não for um espaço, o código entra neste bloco. 
                  Isso significa que o caractere atual faz parte de uma palavra.
    
                  Se a variável space estiver marcada como 1 (ou seja, houve um ou mais espaços antes desse caractere), o código imprime um único espaço (ft_putchar(' ')) para separar as palavras. 
                  Isso garante que apenas um espaço seja exibido entre as palavras, independentemente de quantos espaços estavam na string original.

                  Em seguida, space é redefinida para 0, indicando que o próximo caractere, se for parte da mesma palavra, não precisa ser precedido por um espaço.
    
                  Depois, o caractere atual da palavra é impresso ao utilizar a função ft_putchar(argv[1][i]).


            3.2.3 - Incremento: O índice i é incrementado para passar para o próximo caractere da string. 
                    O loop continua até que todos os caracteres da string tenham sido processados.




Entrada:  $> ./a.out "    Hello      World   !     "


Passo a passo detalhado:

    Ignorar espaços iniciais:

        O programa começa no índice i = 0 e encontra vários espaços (' ') no início da string.
        A função ft_isspace(argv[1][i]) retorna 1 para cada espaço, então o programa continua a incrementar i até encontrar o primeiro caractere não-espaço.

    Processamento da palavra "Hello":

        Quando o índice chega ao caractere 'H' (argv[1][i] = 'H'), ft_isspace(argv[1][i]) retorna 0.
        O programa entra no segundo if e, como space == 0, ele imprime o caractere 'H'.
        O índice continua a avançar: 'e', 'l', 'l', 'o' são processados e impressos da mesma forma.

    Encontrando espaços entre palavras:

        Após a palavra "Hello", o programa encontra espaços (argv[1][i] = ' ').
        space é definido como 1, mas nenhum espaço é impresso ainda.

    Processamento da palavra "World":

        Quando o índice encontra o caractere 'W' (argv[1][i] = 'W'), o programa entra no segundo if novamente.
        Como space == 1, o programa imprime um único espaço antes de imprimir o caractere 'W'.
        Em seguida, ele imprime os caracteres 'o', 'r', 'l', e 'd'.

    Processamento do caractere "!":

        Após "World", o programa encontra mais espaços, mas eles são ignorados até encontrar o caractere '!'.
        Como space == 1, o programa imprime um único espaço antes de imprimir '!'.

    Ignorando espaços finais:

        Após o caractere '!', o programa encontra mais espaços, mas eles são ignorados até que o caractere nulo '\0' seja encontrado, terminando o loop.

    Impressão da nova linha: O programa imprime uma nova linha ('\n') ao final.

Saída final:  Hello World !