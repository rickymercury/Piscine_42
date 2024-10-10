Este programa recebe três argumentos na linha de comando e substitui todas as ocorrências do segundo caractere (passado como argumento) pelo terceiro caractere na string do primeiro argumento.


1 - Função main:   int	main(int argc, char **argv)

    A função principal recebe dois parâmetros:

        argc: o número de argumentos passados na linha de comando.
        argv: um array de strings que contém os argumentos.

    1.1 - Verificação de Condições Iniciais:  if (argc == 4 && (!argv[2][1]) && (!argv[3][1]))

           É uma condição que garante que o programa só será executado corretamente se o número de argumentos e as características dos argumentos forem adequados.

           O programa verifica três condições:

           - argc == 4: verifica se o número de argumentos é 4, ou seja, verifica se o número de argumentos passados ao programa é exatamente 4.

           argc é uma variável que contém o número de argumentos fornecidos ao programa. Isso inclui:
        
                argv[0]: o nome do programa.
        
                argv[1]: a primeira string passada como argumento, que é a string em que faremos a substituição. É a string original.
        
                argv[2]: o segundo argumento, que é o caractere que desejamos substituir na string. É o caracter a ser substituído.
        
                argv[3]: o terceiro argumento, que é o caractere que irá substituir o caractere encontrado. É o novo caractere.
           
           Exemplo:

           Se o programa for executado assim: ./programa "hello world" "o" "a", o argc será igual a 4.

           Se o argc não for 4, o programa simplesmente imprimirá uma nova linha sem executar mais nada.
           
           
           - (!argv[2][1]): verifica se o segundo argumento (argv[2]) é um caractere único. 

            COmo sabemos, argv[2][1] representa o segundo caractere da string argv[2].

            Se argv[2][1] for igual a '\0' (o caractere nulo), isso significa que a string argv[2] contém apenas um único caractere.
    
            O operador ! inverte o valor lógico, ou seja, (!argv[2][1]) será verdadeiro se argv[2][1] for '\0' (indicando que a string tem apenas um caractere).

            Exemplo:

            Se o segundo argumento for "o", então argv[2][1] será '\0', pois a string "o" contém apenas um caractere. A condição (!argv[2][1]) será verdadeira.
    
            Se o segundo argumento for "ab", então argv[2][1] será 'b', e a condição (!argv[2][1]) será falsa, pois há mais de um caractere na string.
           

            - (!argv[3][1]): verifica se o terceiro argumento (argv[3]) também é um caractere único, da mesma forma que argv[2].

            Exemplo:

            Se o terceiro argumento for "a", então argv[3][1] será '\0', indicando que a string contém apenas um caractere, e a condição será verdadeira.
    
            Se o terceiro argumento for "ab", então argv[3][1] será 'b', e a condição será falsa.

    Estas verificações garantem que o programa seja executado apenas se houver exatamente 3 argumentos e se o segundo e o terceiro argumentos forem caracteres únicos.


    1.2 - Inicialização do Índice i:   int i = 0;

          O índice i é inicializado com 0 para percorrer a string fornecida no primeiro argumento (argv[1]).

    1.3 - Loop while para Percorrer a String:   while (argv[1][i] != '\0')

          O loop while percorre cada caractere da string argv[1] até encontrar o caractere nulo ('\0'), que indica o fim da string.

    1.4 - Verificação de Substituição:  if (argv[1][i] == argv[2][0])
                                            argv[1][i] = argv[3][0];

          Esta parte do código é responsável por percorrer a string fornecida como primeiro argumento (argv[1]) e substituir os caracteres que coincidem com o caractere fornecido como segundo argumento (argv[2]) pelo caractere fornecido como terceiro argumento (argv[3]).

          - if (argv[1][i] == argv[2][0])

          Objetivo: Verifica se o caractere atual da string argv[1] é igual ao caractere de substituição fornecido no argv[2].

          argv[1][i]: Refere-se ao caractere na posição i da string argv[1].
        
          argv[2][0]: Refere-se ao primeiro (e único) caractere da string argv[2].

          O que acontece:

          O programa compara o caractere atual de argv[1] com o caractere fornecido em argv[2]. Se forem iguais, isso significa que o caractere precisa ser substituído.

          Exemplo:

          Se a string argv[1] for "hello", o caractere argv[2] for "o" e o caractere argv[3] for "a", quando i chegar à posição do "o" em "hello", a condição será verdadeira.

          - argv[1][i] = argv[3][0];

          Objetivo: Substitui o caractere na posição i de argv[1] pelo caractere fornecido em argv[3].

          argv[3][0]: Refere-se ao primeiro (e único) caractere da string argv[3], que será usado como o caractere substituto.

          O que acontece:
        
          Se a condição do if for verdadeira (ou seja, o caractere de argv[1] corresponde ao caractere de argv[2]), o caractere atual em argv[1][i] é substituído pelo caractere de argv[3][0].

          Exemplo:
        
          Continuando o exemplo anterior, quando i chegar à posição do "o" em "hello", o caractere "o" será substituído por "a", e a string passará a ser "hella".

    EM SUMA: Para cada caractere da string, o programa verifica se ele é igual ao caractere que deve ser substituído (argv[2][0]).

    Se for igual, ele substitui esse caractere pelo novo caractere (argv[3][0]).


    1.5 - Impressão do Caractere:   write(1, &argv[1][i], 1);

          Após a verificação e possível substituição, o programa imprime o caractere (modificado ou não) na saída padrão, utilizando a função write.

          O caractere, seja ele substituído ou não, será impresso no terminal.

          Exemplo:
        
          Se o caractere de argv[1] não for o que precisa ser substituído, ele é escrito como está. 
          
          Se for o caractere a ser substituído, o caractere substituto será escrito.


    1.6 - Incremento do Índice:   i++;

           O índice i é incrementado para avançar para o próximo caractere da string argv[1].

           O loop continua para o próximo caractere da string, repetindo o processo de verificação, substituição (se necessário), e escrita no terminal.

    1.7 - Impressão de uma Nova Linha:  write(1, "\n", 1);

          Quando o loop termina (ou se a condição inicial não for satisfeita), o programa imprime uma nova linha (\n) para finalizar a saída.     