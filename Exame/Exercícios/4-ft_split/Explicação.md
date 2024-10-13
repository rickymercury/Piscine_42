1 - FUnção ft_isspace:   int ft_isspace(char c)

    Esta função verifica se um caractere é um espaço, uma tabulação (\t) ou uma nova linha (\n), que são utilizados como separadores das palavras na string.

    Entrada: Um caractere c.
    Saída: Retorna 1 (verdadeiro) se o caractere for um espaço, tabulação ou nova linha, caso contrário, retorna 0 (falso).

2 - Função ft_strncpy:   char	*ft_strncpy(char *s1, char *s2, int n)

    2.1 - Declaração das Variáveis: 

          2.1.1 - char *s1: Este ponteiro aponta para a string de destino, onde os caracteres de s2 serão copiados. Após a execução da função, s1 vai conter uma cópia dos primeiros n caracteres de s2, seguidos de um caractere nulo ('\0').

          2.1.2 - char *s2: Este ponteiro aponta para a string de origem da qual os caracteres serão copiados. A função irá copiar caracteres de s2 para s1, até que atinja o caractere nulo ou copie n caracteres.

          2.1.3 - int n: Este inteiro define o número máximo de caracteres a serem copiados de s2 para s1. Ele é usado para garantir que não mais do que n caracteres sejam copiados, o que previne a sobreposição de memória ou acessos a locais inválidos.

          2.1.4 - int i: é utilizado para percorrer as strings s1 e s2.
                         Começa em 0 e é incrementado a cada iteração do loop, permitindo que a função acesse cada caractere de s2 e copie-o para s1. 
                         O valor de i também é usado para verificar se a cópia deve parar (ou seja, se já foram copiados n caracteres ou se s2 atingiu o caractere nulo).
                        
    2.2 - Loop Principal:  while (s2[i] && i < n): 
    
          Verifica se o caractere atual na string de origem s2 não é o caractere nulo ('\0') - caso s2[i] seja '\0', isso indica que chegamos ao fim da string de origem e não há mais caracteres a serem copiados - e garante que o índice i não ultrapassa o número máximo de caracteres a serem copiado (n).                          
          Se i for igual a n, o loop termina, evitando cópias excessivas e possíveis acessos fora dos limites.

    Assim, o loop continuará enquanto houver caracteres válidos em s2 e enquanto não tiver atingido o limite de n caracteres.

           2.2.1 - Cópia dos Caracteres de s2 para s1:  s1[i] = s2[i]

                   Dentro do loop, cada caractere na posição i da string de origem s2 é copiado para a posição correspondente i da string de destino s1.
                   Isso é feito para todos os caracteres que atendem à condição do loop. 

           2.2.2 - Incremento de índice :  i++

                   A cada iteração do loop, a varíavel i incrementa. 
                   Isso permite que a função passe para o próximo caractere em s2 e, simultaneamente, na mesma posição de s1, na próxima iteração.
                
    2.3 - Após o Loop :

          2.3.1 - s1[i] = '\0':
        
                  Adicionamos o caractere nulo ('\0') na posição i de s1. 
                  Isso é crucial porque em C, uma string é definida como uma sequência de caracteres terminada por um caractere nulo. 
                  Sem este caractere, qualquer função que tente utilizar o s1 como uma string pode causar um comportamento indefinido, já que não saberá onde a string termina.

          2.3.2 - Retorno da Função:  return (s1);
        
                  Por fim, a função retorna o ponteiro s1, que agora contém uma cópia dos primeiros n caracteres de s2 (ou contém menos, caso s2 tenha um terminador nulo antes de n).

3 - Função ft_split:   char **ft_split(char *str)
    
    A função ft_split tem o objetivo de dividir uma string em "palavras" e retornar essas palavras como um array de strings (um array de ponteiros para char), onde cada elemento é uma palavra da string original. 
    
    As palavras são delimitadas por caracteres de espaço, tabulação ou nova linha (ou seja, qualquer caractere considerado "espaço em branco").
    Na função, uma "palavra" é uma sequência contínua de caracteres que não são espaços em branco (' ', '\n', '\t'). 
    Tudo o que estiver entre esses caracteres de espaço é considerado uma palavra. 

    3.1 - Declaração das Variáveis: 

          3.1.1 - int i: é utilizada como um índice para percorrer a string str.      
                         Inicialmente, é definida como 0, o que representa o início da string. 
                         
          3.1.2 - int j: é utilizada para armazenar a posição inicial de uma palavra que será copiada para o array result.
                         O índice j serve para "marcar" o ínicio da palavra atual que está a ser processada.
                         O valor de j é definido no momento em que uma nova palavra é encontrada e será usada para calcular o comprimento da palavra ao alocar espaço no array de strings.

          3.1.3 - int k: é um índice para rastrear quantas palavras foram armazenadas no array result. 
                         Cada vez que uma nova palavra é adicionada ao array, k é incrementado. 
                         Isso garante que as palavras sejam armazenadas nas posições corretas do array.

          3.1.4 - int word_count: é utilizada para contar quantas palavras existem na string str. 
                                  É inicializada como 0 e é incrementada sempre que uma nova palavra é detectada durante a primeira iteração da string. 
                                  Essa contagem é necessária para alocar espaço adequado ao array result.

          3.1.5 - char **result: é um ponteiro para um array de ponteiros de caracteres (ou seja, um array de strings). 
                                 Este array vai armazenar as palavras extraídas da string str. 
                                 A alocação de memória para result é feita após a contagem das palavras, garantindo que haja espaço suficiente para armazenar todas as palavras mais o caractere nulo, para indicar o final do array.

    3.2 - Contar o Número de Palavras e Alocação de Memória: 

                        while (str[i] != '\0') 
                        {
                            while (str[i] && ft_isspace(str[i]))
                                i++;
                            if (str[i])
                                word_count++;
                            while (str[i] && !ft_isspace(str[i]))
                                i++;
                        }
                        result = (char **)malloc(sizeof(char *) * (word_count + 1));
   

          Este bloco tem como objetivo contar quantas palavras existem na string de entrada(str) e alocar espaço suficiente para armazenar essas palavras. 
          Ele utiliza a variável i como índice para percorrer cada caractere da string. 
          As palavras são definidas como sequências de caracteres que não são espaços, tabulações ou novas linhas. 

          3.2.1 - while (str[i] != '\0'): 
          
                  O loop continua enquanto str[i] não for o caractere nulo ('\0'), que indica o final da string, o que permite que o código percorra todos os caracteres da string.

          3.2.2 - while (str[i] && ft_isspace(str[i])):

                  Este laço ignora todos os caracteres que são espaços (' '), tabulações ('\t') ou novas linhas ('\n').

                  O índice i é incrementado, avançando para o próximo caractere até que um caractere não espaço seja encontrado.

                  Exemplo: Se a string for " hello world", no começo o i vai ignorar os dois primeiros espaços em branco e parar no h da palavra "hello".

          3.2.3 - if (str[i] != '\0'):

                  Após ignorar os espaços, verificamos se o caractere atual não é nulo ('\0').
                  Se str[i] != '\0' for verdadeiro (ou seja, se não for o caractere nulo), isso significa que encontramos o início de uma nova palavra e incrementamos a variável word_count (que conta o número total de palavras).

                  Exemplo: Quando i parar em h (ou qualquer outro caractere que não seja um espaço), esta condição será verdadeira e word_count será incrementado, indicando que uma nova palavra foi encontrada.

          3.2.4 - while (str[i] && !ft_isspace(str[i])):

                  De seguida, vamos avançar o índice i ao longo dos restantes caracteres da palavra, enquanto eles não forem espaços.
                  Ou seja, movemos o indice i até encontrar o próximo espaço ou fim da string.
                  
                  A condição é verdadeira enquanto o caractere atual não for um espaço, tabulação ou nova linha.
                  Isso significa que o loop vai continuar até que o final da palavra seja atingido, fazendo com que a variável i avançe até o próximo espaço ou até o final da string.

                  Enquanto os caracteres fizerem parte da palavra (não forem espaços), ele continua a avançar..

                  Exemplo: Se i estiver em h de "hello", o laço vai percorrer h, e, l, l, o, e vai parar quando encontrar o espaço após "hello".
        
        O laço externo repete todo o processo, encontrando a próxima palavra, até que o final da string ('\0') seja alcançado.

        Exemplo: Para a string " hello world", o fluxo seria o seguinte:

        Inicialmente: i = 0 (apontando para o primeiro espaço em branco).
        Primeiro laço ft_isspace: O i avança até 2 (parando em 'h').
        Incrementa word_count = 1.
        Segundo laço: O i avança até 7 (parando no próximo espaço em branco depois de  "hello").
        Repete para "world", e no final temos word_count = 2.


          3.2.5 - Alocação de Memória:  result = (char **)malloc(sizeof(char *) * (word_count + 1));  

                  Aqui, vamos alocar memória suficiente para armazenar os ponteiros que vão apontar para as palavras que serão extraídas da string.
                  
                  O tipo alocado é char *, que significa "ponteiro para uma string" (ou seja, cada palavra será armazenada como uma string).
                  
                  A quantidade de memória que vamos alocar no array result é word_count + 1, em que word_count representa o número de palavras que foram contadas na string original (str) e +1 para incluir um espaço extra no final do array, que será usado para armazenar um ponteiro nulo (NULL), marcando o fim do array de strings.

          A função malloc é utilizada para alocar um bloco de memória no heap, que é uma área de memória utilizada para o fim de alocação dinâmica.

          Exemplo:

          Se word_count = 2 (como no exemplo da string " hello world"), o malloc vai alocar memória suficiente para 3 ponteiros (word_count + 1), ou seja:
             
             2 ponteiros que vão apontar para "hello" e "world".
             1 ponteiro extra que será NULL, para indicar o fim do array de strings.

          Graficamente, o result será algo como:

             result[0] -> (ponteiro para "hello")
             result[1] -> (ponteiro para "world")
             result[2] -> NULL

          if (!result):

          Após tentar alocar memória, o código verifica se o malloc foi bem-sucedido.
          Se malloc falhar, ele retorna NULL, e o código também retorna NULL para indicar o erro.

    3.4 - Loop Externo: 

                   i = 0;
	               while (str[i] != '\0')
	               {
		                while (str[i] && ft_isspace(str[i]))
			                i++;
		                j = i;
		                while (str[i] && !ft_isspace(str[i]))
			                i++;
		                if (j < i)
		                {
			                result[k] = (char *)malloc(sizeof(char) * (i - j + 1));
                            if (!result[k])
                                return (NULL);
			                ft_strncpy(result[k], &str[j], i - j);
			                k++;
		                }
                   }

           Este loop tem como objetivo principal percorrer a string str a fim de separá-la em palavras e armazená-las no array de strings result, alocando dinamicamente memória necessária para cada palavra.

          3.4.1 - Ignorar Espaços em Branco:  while (str[i] && ft_isspace(str[i]))

                  Aqui, estamos a utilizar a função ft_isspace para ignorar todos os caracteres que são espaços (' '), tabulações ('\t') ou novas linhas ('\n'). 
                  O loop incrementa i enquanto o caractere atual for um espaço em branco.
                  Isso garante que o código ignore os espaços entre as palavras e não os considere como parte delas.

          3.4.2 - Marcar o início da palavra:  j = i

                  Depois de ignorar os espaços em branco, a variável i estará a apontar para o primeiro caractere de uma palavra (ou para o final da string, se não houver mais palavras).
                  Então, armazenamos esse valor em j, e, assim, j vai ser utilizada para marcar o ínicio da palavra, sendo que ela vai passar a apontar para o primeiro caractere da próxima palavra.

                  Ou seja, depois de ignorarmos os espaços, "marcamos" o início da palavra. Para isso, atribuímos o valor de i a j (j = i), onde j vai guardar o valor de i no momento em que encontramos o primeiro caractere da palavra. 
                  Assim, j serve como índice que aponta para o início da palavra dentro da string.

                  Exemplo: Se a string for " hello world", j será igual a 2, pois i estará a apontar para o h de "hello".

          3.4.3 - Encontrar o fim da palavra:  while (str[i] && !ft_isspace(str[i]))

                  Este while vai percorrer os caracteres da palavra, ou seja, ele avança o índice i enquanto o caractere str[i] não for um espaço em branco (ou seja, enquanto estivermos dentro de uma palavra). 

                  Quando i encontrar um caractere que seja um espaço ou o fim da string, o loop para, e i estará a apontar para o primeiro caractere depois da palavra.

                  Exemplo: Na string " hello world", quando o i for incrementado, ele irá passar pelo h, e, l, l, o, e irá parar no espaço após "hello", então i = 7.

          3.4.4 - Verificar se encontramos uma palavra:   if (j < i)

                  COmo i corresponde ao indice que percorre a string e j marca o ínicio de uma palavra, vamos verificar se ocorreu alguma alteração no valor de i em relação ao valor de j.

                  Se j < i:
                  
                     - Significa que i foi incrementado no segundo while, ou seja, encontramos uma sequência de caracteres não-espaço (uma palavra) entre j e i, já que j foi definido no início da palavra e i avançou até ao fim dela. 
                     Neste caso, temos uma palavra válida, pois j marca o ínicio e i marca o fim.

                   Se j == i:

                     - Significa que não encontramos uma palavra entre os espaços. Isso poderia acontecer se tivermos espaços consecutivos ou se estivermos no final da string, onde não há mais palavras para processar.
                     Neste caso, a condição não será satisfeita e o bloco dentro do if será ignorado, ou seja, não haverá alocação de memória nem cópia de uma palavra.

                     Assim, se não encontrarmos nenhuma palavra, o loop ignora os espaços sem encontrar uma palavra e o loop externo continua.


                     Exemplo: Imagine a string: " hello world "

                     No início, i está em 0. O primeiro while ignora os dois primeiros espaços, então i = 2.
                     
                     A variável j é definida como 2 (j = 2), marcando o início da palavra "hello".
                     
                     O segundo while avança i até o final da palavra "hello", onde i = 7.
    
                     Agora temos j = 2 e i = 7. Como j < i, sabemos que encontramos uma palavra entre os índices 2 e 7.
    
                     O código entra no bloco do if e realiza a alocação de memória e a cópia da palavra.

                     Se não houvesse uma palavra (por exemplo, se houvesse vários espaços em sequência), i não avançaria no segundo while, e j seria igual a i. Nesse caso, j < i não seria verdade, e o bloco do if seria ignorado.

          3.4.5 - Alocar espaço para a palavra:  result[k] = (char *)malloc(sizeof(char) * (i - j + 1));

                  Agora que temos uma palavra (que acabamos de encontrar) delimitada entre j e i, vamos alocar espaço suficiente para armazená-la no array de strings result.

                  A diferença i - j dá-nos o tamanho da palavra (o número de caracteres entre i e j). 
                  Adicionamos +1 para incluir o caractere nulo ('\0'), que é necessário para terminar a string corretamente, em C.

                  Exemplo: Se j = 2 e i = 7, temos uma palavra com 5 caracteres ("hello"), então malloc irá alocar espaço para 6 caracteres (5 da palavra mais o '\0').

                  Se a alocação de memória falhar, a função retorna NULL.

          3.4.6 - Copiar a palavra para o array:  ft_strncpy(result[k], &str[j], i - j);

                  Utilizamos a função ft_strncpy para copiar a palavra encontrada da string original str (que começa em &str[j]) para o espaço de memória recém-alocado, result[k]. 
                  
                  Assim, a função copia exatamente i - j caracteres (a palavra) da posição &str[j] até result[k].

                  Exemplo: Se a palavra for "hello", ft_strncpy vai copiar os caracteres de str[2] a str[6] para result[k], formando a string "hello".

                  Depois de copiar a palavra, incrementamos k para que a próxima palavra seja armazenada na posição seguinte do array de strings result.
                  Ou seja, avançamos para o próximo índice no array result, onde a próxima palavra será armazenada.

                  Exemplo: Se k = 0 na primeira iteração, a palavra "hello" será armazenada em result[0], e k será incrementado para 1 para que a próxima palavra seja armazenada em result[1].
    
    3.5 - result[k] = NULL:

          Esta linha serve para "fechar" o array de strings com um ponteiro nulo (NULL). 
          Em C, arrays de strings (ou seja, arrays de ponteiros para char) geralmente são terminados com um ponteiro NULL para indicar o fim da lista de strings. Isso é uma convenção que facilita a iteração sobre o array, já que podemos usar um loop que continua até encontrar o NULL.

          Por exemplo, se result contém várias palavras, como "hello", "world", etc., o array seria algo assim na memória:

                                result[0] -> "hello"
                                result[1] -> "world"
                                result[2] -> NULL

          O NULL na última posição é essencial para que o programa saiba onde parar de ler as strings. Sem esse valor, o código que tenta percorrer o array de strings poderia continuar a aceder posições inválidas na memória, causando um comportamento inesperado ou até segmentation fault.

    3.6 - return (result):

          Esta linha retorna o array de strings (result) que foi criado ao longo da função. 
          O array contém todas as palavras que foram separadas a partir da string original str, e agora o código que chamou ft_split pode usar esse array para acessar as palavras.



Exemplo:

Entrada:  char *str = "hello world";
          char **result = ft_split(str);

Fluxo de Execução da Função ft_split:

    Inicialização das Variáveis:

        i = 0, j = 0, k = 0, word_count = 0
        result ainda não alocado.

    Primeiro while (str[i] != '\0') - Contar palavras:

        A string str = "hello world" será analisada:

           Primeira palavra ("hello"):
              
               i = 0: str[0] = 'h' (não é espaço), então o loop avança para contar a palavra.
               word_count incrementa para 1.
               O loop continua até encontrar um espaço ou final da string.
               i = 5: encontra o espaço após "hello".

           Segunda palavra ("world"):

               O loop ignora os espaços.
               i = 6: encontra str[6] = 'w', começa outra palavra.
               word_count incrementa para 2.
               O loop continua até encontrar o final da string.
               i = 11: final da string encontrado.

        Total de palavras: word_count = 2.

    Alocação de memória: 
    
    A linha result = (char **)malloc(sizeof(char *) * (word_count + 1)); aloca espaço para word_count + 1 ponteiros de string (2 palavras + NULL).
        
    Memória alocada: um array de 3 ponteiros (result[0], result[1], result[2] = NULL).

    Segundo while (str[i] != '\0') - Separar palavras:

            Primeira palavra ("hello"):

               i = 0: ignora os espaços iniciais (nenhum no início da string).
               j = 0: marca o início da palavra.
               Avança até i = 5 (fim da palavra "hello").
               malloc aloca espaço para "hello" (6 caracteres: "hello\0").
               ft_strncpy(result[0], &str[0], 5) copia "hello" para result[0].

            Segunda palavra ("world"):

               i = 6: ignora espaços.
               j = 6: marca o início da palavra "world".
               Avança até i = 11 (fim da string).
               malloc aloca espaço para "world" (6 caracteres: "world\0").
               ft_strncpy(result[1], &str[6], 5) copia "world" para result[1].

        Adicionar o NULL final:
        result[2] = NULL; marca o fim do array de strings.

Estado final de result:

result[0] -> "hello"
result[1] -> "world"
result[2] -> NULL


