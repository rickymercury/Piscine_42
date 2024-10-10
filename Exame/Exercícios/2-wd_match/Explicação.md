1 - Função main : int main(int argc, char **argv)

    Esta é a função principal do programa, que será executada quando rodarmos o programa. 
    Ela aceita dois parâmetros:

        argc: O número de argumentos passados para o programa, incluindo o próprio nome do programa.

        argv: Um array de strings (vetor de ponteiros para caracteres) que contém os argumentos passados na linha de comando. argv[0] é o nome do programa, argv[1] é o primeiro argumento, e assim por diante.

    1.1 - Declaração das variáveis: int i; int j;

          Aqui, são declaradas duas variáveis inteiras, i e j, que serão usadas como índices para percorrer as strings argv[1] e argv[2], respectivamente.

    1.2 - Verificar o Número de Argumentos: if(argc == 3)

          Este if verifica se o número de argumentos passados para o programa é exatamente 3 (ou seja, argc == 3). 
          Isso ocorre porque o programa espera que forneçamos dois argumentos na linha de comando, além do nome do programa.

          Se houver exatamente 3 argumentos (o nome do programa + 2 strings), o programa continua.
        
          Caso contrário, ele ignora a parte dentro do if e simplesmente imprime uma nova linha (no final do programa).

    1.3 - Percorrer as duas strings:   while(argv[1][i] != '\0' && argv[2][j] != '\0')

         Este laço while percorre as duas strings (a primeira string argv[1] e a segunda string argv[2]) até que chegue ao final de uma delas.

         O laço continua a ser executado enquanto o caractere atual de argv[1] (indexado por i) e o caractere atual de argv[2] (indexado por j) não forem o caractere nulo (\0), o que indica o fim duma string em C.

         Ou seja, o laço vai parar quando argv[1][i] ou argv[2][j] forem igual a \0 (final da string).

    1.4 - Encontrar a Sequência: if(argv[1][i] == argv[2][j])

          Dentro do loop, este if compara o caractere atual de argv[1] (primeira string) com o caractere atual de argv[2] (segunda string).
        
          Se os dois caracteres forem iguais, significa que o caractere atual de argv[1] foi encontrado em argv[2], então a variável i é incrementada (i++) para avançar para o próximo caractere de argv[1].
        
          j++ é sempre incrementado, independentemente dos caracteres coincidirem ou não, movendo o índice da segunda string para frente.

          O objetivo deste laço: Ele tenta encontrar a sequência completa de argv[1] dentro de argv[2], mas não exige que os caracteres estejam consecutivos em argv[2]. Se os caracteres de argv[1] aparecerem na mesma ordem em argv[2], mesmo que haja outros caracteres pelo meio, o laço avança i até o final de argv[1].

    1.5 - Verifica Se o Chegou ao Fim:  if(argv[1][i] == '\0')

          Após o término do laço while, este if verifica se a variável i chegou ao fim da string argv[1].
          Isso significa que todos os caracteres de argv[1] foram encontrados na string argv[2] (na ordem correta, mas possivelmente com outros caracteres pelo meio).

          Se esta condição for verdadeira, o programa executa o próximo bloco de código para imprimir a primeira string.

    1.6 - Novo laço:  while(argv[1][i] != '\0')

          Se todos os caracteres de argv[1] foram encontrados em argv[2], este laço while percorre a string argv[1] novamente, mas agora para imprimi-la - write(1, &argv[1][i], 1);
          
          Após escrever o caractere atual de argv[1], i é incrementado para avançar para o próximo caractere da string.
        
          O laço continua até que o caractere atual de argv[1][i] seja o caractere nulo (\0).

          Resultado: A string argv[1] será impressa na saída padrão se ela foi encontrada em argv[2].

    1.7 - IMpressão da Nova LInha:  write(1, "\n", 1);

          No final do programa, independentemente das strings terem sido comparadas ou não, o programa escreve uma nova linha (\n) na saída padrão.



Cenário 1: Ambos os argumentos contêm a string 

Entrada: ./program abc abcdabc

    Argumentos:

        argv[1] = "abc"
        argv[2] = "abcdabc"

Passo a Passo:

    O programa verifica se há exatamente 3 argumentos (argc == 3). Isso é verdade, então o programa continua.
    Inicializa i = 0 e j = 0 para começar a percorrer as duas strings.

    No primeiro laço while:

        Compara argv[1][0] (a) com argv[2][0] (a) e encontra uma correspondência, então incrementa i para 1.
        j também é incrementado para 1.
        Continua a comparar argv[1][1] (b) com argv[2][1] (b) e encontra outra correspondência, então incrementa i para 2.
        j também é incrementado para 2.
        Compara argv[1][2] (c) com argv[2][2] (c), encontra outra correspondência e incrementa i para 3.

    Agora, argv[1][3] == '\0' (final da string abc), então o programa sabe que encontrou toda a string argv[1] dentro de argv[2].

    Entra no segundo while para imprimir a string argv[1]. Ele imprime:
        "a"
        "b"
        "c"
    Após imprimir "abc", o programa escreve uma nova linha (\n).

Saída:  abc



Cenário 2: Os caracteres estão na ordem correta, mas não consecutivos

Entrada:  ./program abc aebfc

    Argumentos:

        argv[1] = "abc"
        argv[2] = "aebfc"

Passo a Passo:

    O programa verifica se há exatamente 3 argumentos (argc == 3).
    Inicializa i = 0 e j = 0.

    No primeiro laço while:

        Compara argv[1][0] (a) com argv[2][0] (a) e encontra uma correspondência, incrementando i para 1.
        j também é incrementado para 1.
        Compara argv[1][1] (b) com argv[2][1] (e) e não encontra correspondência, mas apenas incrementa j para 2.
        Compara argv[1][1] (b) com argv[2][2] (b) e encontra correspondência, incrementando i para 2.
        Continua o processo até encontrar todos os caracteres a, b, e c na ordem correta.

    O laço while termina, e o programa entra no segundo laço para imprimir "abc".
    Após imprimir "abc", ele escreve uma nova linha.

Saída: abc


