1 - Declaração da função e variáveis:    int     *ft_rrange(int start, int end)

    A função ft_rrange aceita dois parâmetros: start e end, que representam o intervalo de valores a ser preenchido.

    Ela retorna um ponteiro para um array de inteiros, alocado dinamicamente, contendo os números entre start e end.

2 - Declaração das variáveis:

                        int i;
                        int len;
                        int *res;

    i: é usada como índice para percorrer o array que está a ser preenchido.
       COntrola qual a posição do array res está a ser preenchida a cada iteração.
    len: armazena o número de elementos no intervalo entre start e end.
         Ou seja, vai armazenar o valor absoluto de end - start que garante que o comprimento seja positivo, independentemente da ordem dos valores.
         É, assim, o comprimento do intervalo, ou seja, quantos números existirão entre start e end (inclusivos).
    res: é um ponteiro que aponta para o bloco de memória alocado dinamicamente, onde o array de inteiros será armazenado.
         O tamanho da memória alocada é proporcional ao número de elementos no intervalo, que é dado por len.
         A função malloc aloca a memória e, se tudo correr bem, o ponteiro res armazena o endereço do início dessa memória.

3 - Cálculo do comprimento do intervalo (len):    len = abs(end - start) + 1;

    Objetivo: Determinar o tamanho do intervalo de números que será criado e armazenado no array.

        - abs(end - start): A função abs (absoluto) retorna o valor absoluto da diferença entre end e start (ou seja, a distância entre os dois valores), ignorando o sinal.
                            Isso garante que o resultado seja sempre positivo, independentemente de start ser maior ou menor que end.
        
        Por exemplo, se end = 8 e start = 3, então abs(8 - 3) = 5.
        Se end = 3 e start = 8, então abs(3 - 8) = 5.
        
        - +1: O +1 é necessário porque o intervalo entre start e end é inclusivo, ou seja, os dois limites (start e end) são incluídos no array.

        No exemplo start = 3 e end = 8, o intervalo contém os números 3, 4, 5, 6, 7 e 8, ou seja, 6 números, por isso adicionamos 1 ao valor de abs(end - start).

4 - Alocação de memória:     res = (int *)malloc(sizeof(int) * len);
    
    Objetivo: Alocar dinamicamente um bloco de memória suficiente para armazenar o número de elementos calculados (que está em len).

        - malloc: A função malloc é usada para alocar memória dinamicamente. Ela recebe o número de bytes que queremos alocar.
    
        - sizeof(int): A função sizeof retorna o tamanho, em bytes, de um tipo de dado. 
                       No caso, sizeof(int) retorna o número de bytes necessários para armazenar um número inteiro.
                       Geralmente, um int ocupa 4 bytes em sistemas modernos.
    
        - sizeof(int) * len: calcula a quantidade total de memória necessária para armazenar len números inteiros.
        
        Exemplo: se len = 6 e sizeof(int) = 4, então a quantidade de memória necessária é 4 * 6 = 24 bytes.

        - Casting para (int *): O malloc retorna um ponteiro genérico (void *), que precisa de ser convertido para o tipo de dado apropriado, neste caso, um ponteiro para int (int *).
                                O int *res significa que res é um ponteiro que aponta para o primeiro elemento de um array de inteiros alocado na memória.

        Exemplo: Suponha que start = 3 e end = 8. Calculamos que len = 6, então a função malloc aloca sizeof(int) * 6 bytes, ou seja, 24 bytes (supondo que int seja 4 bytes). 
        O ponteiro res agora aponta para o bloco de memória alocado para armazenar os 6 inteiros.
  
        O ponteiro res agora aponta para o início dessa área de memória alocada.

5 - Verificação de erro na alocação:

                        if (res == NULL)
                            return NULL;

    Se a alocação de memória falhar, a função malloc retorna NULL.
    Esta verificação garante que, caso a alocação falhe, a função retorne NULL e não tente acessar memória não alocada.

6 - Preenchimento do array (while loop):

                        while(i < len)
                        {
                            if (start < end)
                                res[i] = end--;
                            else
                                res[i] = end++;
                            i++;
                        }

    Este laço while é responsável por percorrer a totalidade do array alocado dinamicamente (res), preenchendo-o com os números entre start e end, mas em ordem inversa (do end até ao start).
    
    6.1 - 1. while (i < len): O loop continua a executar enquanto i (que é o índice do array) for menor que len (o número total de elementos no intervalo).
                              len foi calculado anteriormente em abs(end - start) + 1, representando o tamanho do intervalo (quantos números existem entre start e end, incluindo ambos).
    Exemplo: Suponhamos que start = 3 e end = 8. Então len = 6 (porque há 6 números entre 3 e 8, incluindo 3 e 8).

    O loop vai executar até i alcançar 6 (ou seja, enquanto i for de 0 a 5).

    6.2 - if (start < end): a condição verifica se start é menor que end. 
                            Isso indica que queremos preencher o array com os números de forma decrescente (do maior para o menor), começando de end e diminuindo até start.

    Por exemplo, se start = 3 e end = 8, o array conterá [8, 7, 6, 5, 4, 3].
        
           6.2.1 - res[i] = end--: Se start < end, isto significa que o intervalo será preenchido de forma decrescente, do valor de end para start.
           O valor atual de end é atribuído ao índice i do array res, e então end é decrementado (--) para o próximo número.

           Explicação do fluxo:

           No primeiro ciclo do loop, i = 0 e end = 8, então: 

                O valor 8 é armazenado em res[0].
                Após isso, end-- faz com que end se torne 7.
    
           No próximo ciclo, i = 1 e end = 7:
           
                O valor 7 é armazenado em res[1].
                Após isso, end-- faz com que end se torne 6.
    
           Isto continua até que end seja igual a start.

           Exemplo completo (quando start = 3 e end = 8):

           1º ciclo: res[0] = 8, end-- torna end = 7.
           2º ciclo: res[1] = 7, end-- torna end = 6.
           3º ciclo: res[2] = 6, end-- torna end = 5.
           4º ciclo: res[3] = 5, end-- torna end = 4.
           5º ciclo: res[4] = 4, end-- torna end = 3.
           6º ciclo: res[5] = 3, end-- torna end = 2.
           
    6.3 - else (se start >= end): Se start for maior ou igual a end, oqueremos preencher o array em ordem crescente, do end até ao start.
    
    Por exemplo, se start = 8 e end = 3, o array conterá [3, 4, 5, 6, 7, 8].

          6.3.1 - res[i] = end++: Caso start >= end, o valor de end é atribuído a res[i] e então end é incrementado (++) para o próximo número.

          Explicação do fluxo: O fluxo é semelhante ao caso anterior, mas agora o valor de end é aumentado em vez de ser diminuído.

          Exemplo (quando start = 8 e end = 3):

          1º ciclo: res[0] = 3, end++ torna end = 4.
          2º ciclo: res[1] = 4, end++ torna end = 5.
          3º ciclo: res[2] = 5, end++ torna end = 6.
          4º ciclo: res[3] = 6, end++ torna end = 7.
          5º ciclo: res[4] = 7, end++ torna end = 8.
          6º ciclo: res[5] = 8, end++ torna end = 9.

    6.4- i++: Incrementa o índice i para preencher a próxima posição do array res.

7 - Retorno do array preenchido:   return (res);

    Depois que o loop termina, ou seja, após o preenchimento completo do array, o array res estará preenchido com os números o intervalo inverso de end até start, e a função retorna o ponteiro res, que contém os números preenchidos e que aponta para o bloco de memória que contém os valores do intervalo.



Exemplo 1: start = 3, end = 8

    Inicialização:

        start = 3
        end = 8
        len = abs(8 - 3) + 1 = 6
        res será um array de tamanho 6 alocado dinamicamente.

    Loop: No início do loop, i = 0 e end = 8.

        Iterações do while:

            i = 0: start < end, então res[0] = 8, end-- torna se 7.
            i = 1: res[1] = 7, end-- torna se 6.
            i = 2: res[2] = 6, end-- torna se 5.
            i = 3: res[3] = 5, end-- torna se 4.
            i = 4: res[4] = 4, end-- torna se 3.
            i = 5: res[5] = 3, end-- torna se 2.

    Resultado: O array res terá os valores: [8, 7, 6, 5, 4, 3].

Exemplo 2: start = 8, end = 3

    Inicialização:

        start = 8
        end = 3
        len = abs(3 - 8) + 1 = 6
        res será um array de tamanho 6 alocado dinamicamente.

    Loop: No início do loop, i = 0 e end = 3.

        Iterações do while:

            i = 0: start >= end, então res[0] = 3, end++ torna se 4.
            i = 1: res[1] = 4, end++ torna se 5.
            i = 2: res[2] = 5, end++ torna se 6.
            i = 3: res[3] = 6, end++ torna se 7.
            i = 4: res[4] = 7, end++ torna se 8.
            i = 5: res[5] = 8, end++ torna se 9.

    Resultado: O array res terá os valores: [3, 4, 5, 6, 7, 8].

Exemplo 3: start = 5, end = 5

    Inicialização:

        start = 5
        end = 5
        len = abs(5 - 5) + 1 = 1
        res será um array de tamanho 1 alocado dinamicamente.

    Loop: No início do loop, i = 0 e end = 5.

        Iterações do while:
            
            i = 0: start >= end, então res[0] = 5, end++ torna se 6.

    Resultado: O array res terá o valor: [5].

