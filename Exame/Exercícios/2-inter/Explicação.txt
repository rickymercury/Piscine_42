Este código imprime os caracteres que aparecem em ambas as strings de entrada, sem repetições. 

1 - Declaração das variáveis:

int i;
int j;
int tab[256] = {};

    i: Usado para percorrer a primeira string (argumento argv[1]).

    j: Usado para percorrer a segunda string (argumento argv[2]).

    tab[256]: Um array de inteiros de tamanho 256, usado para marcar quais os caracteres que já foram impressos. 
    Inicialmente, cada posição do array contém 0, ou seja, todos os elementos são 0 (indicando que nenhum caractere foi impresso).
    O indice de cada posição corresponde ao valor ASCII do caractere.

2 - Verificação do número de argumentos:   if (argc == 3)

    Verifica se o programa recebeu exatamente dois argumentos além do nome do programa. Se não forem passados dois argumentos, o código não faz nada além de imprimir uma nova linha no final.

3 -  Loop para percorrer a primeira string (argv[1]):   while(argv[1][i] != '\0')

     Este while percorre a primeira string (argv[1]) caractere por caractere até chegar ao final (\0).

     3.1 - Reinicialização de j:  j = 0

           Em cada iteração do loop externo (para cada caractere de argv[1]), a variável j é reinicializada para 0, para que o segundo loop (while(argv[2][j] != '\0')) possa percorrer a segunda string (argv[2]) do início até ao fim.

4 - Loop pela segunda string (argv[2]):    while(argv[2][j] != '\0')

    Para cada caractere de argv[1], este while percorre cada caractere da segunda string (argv[2]).
    A cada caractere de argv[1], ele compara com todos os caracteres de argv[2], à procura de um caractere igual ao atual.

5 - Comparação dos caracteres das strings:    if (argv[2][j] == argv[1][i])

    A cada caractere de argv[1], ele compara com todos os caracteres de argv[2], à procura de um caractere igual ao atual (argv[1][i]).

    Verifica se o caractere atual de argv[2] é igual ao caractere atual de argv[1].

6 - Verificação no array tab e impressão:

                  if (tab[(int)argv[1][i]] == 0)
                  {
              	        tab[(int)argv[1][i]] = 1;
	                    write(1, &argv[2][j], 1);
                  }

    COmo para cada caractere de argv[1], o loop interno verifica se ele é igual a algum caractere de argv[2]:
    
    - Se encontrar uma correspondência, o código verifica se esse caractere já foi antes impresso, utilizando o tab --> tab[(int)argv[1][i]] == 0: vai verificar se o caractere atual já foi impresso. 
    O índice no array tab corresponde ao valor ASCII do caractere. 

    O array tab[256] é utilizado para garantir que cada caractere seja impresso apenas uma vez. Ele tem 256 posições, correspondentes aos valores ASCII dos caracteres. 
    Se o caractere atual (representado pelo valor ASCII) ainda não tiver sido impresso (ou seja, tab[(int)argv[1][i]] == 0), ele será marcado como já impresso, e o caractere será enviado para a saída.
    
    Assim:

    - Se o valor no array for 0, significa que o caractere ainda não foi impresso.
      Se o caractere não foi impresso:

        - tab[(int)argv[1][i]] = 1: Marca o caractere no array como já impresso, alterando o valor de 0 para 1.
        
        Após verificar que o caractere ainda não foi impresso, ele é impresso na tela com a função write.

        - write(1, &argv[2][j], 1): Imprime o caractere na saída padrão.


7 - Incrementação dos índices:

    O loop interno incrementa j para continuar a percorrer a segunda string. 
    Depois de terminar de comparar todos os caracteres de argv[2] com o caractere atual de argv[1], o loop externo incrementa i para passar ao próximo caractere de argv[1].

8 - Impressão de uma nova linha:     write(1,"\n",1)

    Após processar todas as comparações, o código imprime uma nova linha para formatar a saída.



Exemplo de fluxo

Vamos supor que o programa seja executado com os argumentos "abc" e "bca":

    O primeiro caractere de argv[1] é 'a'. Ele é comparado com os caracteres de argv[2] ("bca"):
        'a' é encontrado no índice 2 de argv[2], e como ainda não foi impresso, é marcado e impresso.
        Saída parcial: "a"

    O segundo caractere de argv[1] é 'b'. Ele é comparado com os caracteres de argv[2]:
        'b' é encontrado no índice 0 de argv[2], e como ainda não foi impresso, é marcado e impresso.
        Saída parcial: "ab"

    O terceiro caractere de argv[1] é 'c'. Ele é comparado com os caracteres de argv[2]:
        'c' é encontrado no índice 1 de argv[2], e como ainda não foi impresso, é marcado e impresso.
        Saída parcial: "abc"

    No final, uma nova linha é impressa.
        Saída final: "abc\n"

Isso significa que o programa imprime os caracteres que aparecem em ambas as strings, sem repetições, e na ordem em que eles aparecem na primeira string (argv[1]).




Outro Exemplo:

Vamos supor que queremos executar o programa com as strings argv[1] = "abcabc" e argv[2] = "bcacba". 
A função deve imprimir os caracteres que aparecem em ambas as strings, sem repetições.

Fluxo de execução:

    1)Primeiro loop (argv[1][i]) começa com i = 0, então estamos a analisar o primeiro caractere de argv[1], que é 'a'.

        Segundo loop (argv[2][j]) começa com j = 0 e verifica o primeiro caractere de argv[2], que é 'b'. 
        Não é igual a 'a', então continua.
        Com j = 1, argv[2][j] é 'c'. 
        Não é igual a 'a', então continua.
        Com j = 2, argv[2][j] é 'a'. 
        É igual ao caractere de argv[1].
            Verifica se 'a' já foi impresso (checa tab[(int)'a'], que é tab[97]). 
            Como é 0, o caractere 'a' é marcado como impresso e é enviado para a saída.
        O segundo loop continua até ao final de argv[2], mas 'a' já foi impresso, então não será impresso novamente.

        Ou seja: 

        Quando o programa percorre os caracteres das duas strings argv[1] e argv[2], ele compara cada caractere de argv[1]
        com todos os caracteres de argv[2]. 
        A ideia é encontrar os caracteres que aparecem em ambas as strings e garantir que cada caractere só seja impresso uma vez.

        Como estamos a analisar o primeiro caractere de argv[1], que é 'a', e  averificar se ele também aparece em argv[2], temos:

           - Primeiro loop: argv[1][0] (ou seja, 'a') --> O primeiro caractere de argv[1] é 'a'.

           - Segundo loop: Vai percorrer argv[2] para encontrar 'a':

           - j = 0: O primeiro caractere de argv[2] é 'b'. Ele não é igual a 'a', então o loop continua.

           - j = 1: O segundo caractere de argv[2] é 'c'. Ele também não é igual a 'a', então o loop continua.

           - j = 2: O terceiro caractere de argv[2] é 'a'. COmo é Igual a 'a' de argv[1], então agora precisamos de verificar se 'a' já foi impresso antes.

           - Verificando se 'a' já foi impresso: O programa usa o array tab[256] para garantir que cada caractere só seja impresso uma vez.
             tab[(int)'a'] refere-se à posição no array tab que corresponde ao código ASCII do caractere 'a'. 
             Como o código ASCII de 'a' é 97, o programa está a verificar a posição tab[97].
             Se tab[97] for 0, isso significa que 'a' ainda não foi impresso.

           - Marcar 'a' como impresso: Como tab[97] == 0, o programa entende que 'a' ainda não foi impresso. Ele então, marca 'a' como impresso: tab[97] = 1.
             Vai utilizar a função write para imprimir o caractere 'a'.

            +--------------------------------------------------------------------------------------------+
            |  Primeiro caractere de argv[1]: 'a'                                                        |
            |                                                                                            |
            |   O código entra no loop para argv[1][0], que é 'a'.                                       |
            |   Ele percorre argv[2]:                                                                    |
            |   Em argv[2][2], ele encontra o primeiro 'a'.                                              |
            |   Como tab[97] (a posição do caractere 'a') ainda é 0, ele imprime 'a' e marca tab[97] = 1.|
            +--------------------------------------------------------------------------------------------+

                                            Saída parcial: "a"


    2)Incrementa i e o loop externo agora está no segundo caractere de argv[1], que é 'b'.

        O loop interno compara 'b' com os caracteres de argv[2] novamente.
        Com j = 0, argv[2][j] é 'b', que é igual a 'b'. 
        Como 'b' ainda não foi impresso (checa tab[(int)'b']), ele é impresso e marcado como já impresso.

            +--------------------------------------------------------------------------------------------+
            |  O código entra no loop para argv[1][1], que é 'b'.                                        |
            |  Ele percorre argv[2]:                                                                     |
            |                                                                                            |
            |  Em argv[2][0], ele encontra o primeiro 'b'.                                               |
            |  Como tab[98] (a posição do caractere 'b') ainda é 0, ele imprime 'b' e marca tab[98] = 1. |
            +--------------------------------------------------------------------------------------------+
        
                                            Saída parcial: "ab"

    3)Incrementa i para i = 2, agora estamos a analisar 'c' de argv[1].

        O loop interno encontra 'c' em argv[2] e o imprime, pois ainda não foi impresso.

            +--------------------------------------------------------------------------------------------+
            |   Terceiro caractere de argv[1]: 'c'                                                       |
            |                                                                                            |
            |   O código entra no loop para argv[1][2], que é 'c'.                                       |
            |   Ele percorre argv[2]:                                                                    |
            |   Em argv[2][1], ele encontra o primeiro 'c'.                                              |
            |   Como tab[99] (a posição do caractere 'c') ainda é 0, ele imprime 'c' e marca tab[99] = 1.|
            +--------------------------------------------------------------------------------------------+     

                                             Saída parcial: "abc"

    4)Continuação do loop:

    Restante de argv[1]: 'a', 'b', 'c'

    Para os próximos caracteres de argv[1] (ou seja, 'a', 'b', e 'c' novamente), o programa não imprime nada porque:

        Quando ele encontra 'a' de novo, tab[97] já é 1, então o programa sabe que já imprimiu 'a' e não o imprime novamente.
        O mesmo acontece com 'b' e 'c', já que tab[98] e tab[99] também já estão marcados como 1.

    Assim, o loop externo continua para os caracteres 'a', 'b', e 'c' de novo em argv[1], mas como eles já foram impressos, o array tab impede que sejam impressos novamente.

                                              Saída final: "abc"
