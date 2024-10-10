1 - Cabeçalho da Função:  int *ft_range(int start, int end)

    A função ft_range recebe dois parâmetros: start e end, ambos do tipo int.

    start: representa o valor inicial da sequência que desejamos criar.
           Por exemplo, se start for 3, a sequência começará a partir de 3.
    end: representa o valor final da sequência.
         Se end for 8, a sequência terminará em 8. A sequência gerada será entre start e end, incluindo ambos os valores.

    A função retorna um ponteiro para um array de inteiros alocados dinamicamente contendo os números do intervalo entre start e end.

2 - Declaração de Variáveis:

    int i: usada para percorrer os indices do array que está a ser preenchido.
           Indica a posição atual onde o valor deve ser armazenado no array res.
    int len: armazena o número total de elementos que serão alocados e preenchidos no array. É calculada como abs(end - start) + 1, o que garante que o número total de elementos incluirá tanto start quanto end.
             Assim, guarda o número de elementos do intervalo, ou seja, o tamanho do array a ser alocado.
    int *res: é um ponteiro que armazena o endereço do bloco de memória alocado para armazenar a sequência de inteiros. 
              O uso do asterisco (*) indica que res é um ponteiro que aponta para um array de inteiros. 
              Após a alocação de memória, res poderá ser usado para acessar e modificar os elementos do array.

    Ponteiro para o array de inteiros onde os números do intervalo serão armazenados. Este array será alocado dinamicamente.

3 - Cálculo do Tamanho do Array:  len = abs(end - start) + 1;

    Calcula a quantidade de números no intervalo de start a end, incluindo ambos. 
    
    A função abs retorna o valor absoluto da diferença, o que garante que tanto intervalos crescentes (como 3 a 8) quanto decrescentes (como 8 a 3) tenham o tamanho correto.
    O +1 é necessário para incluir ambos os limites start e end. 

4 - Alocação de Memória:  res = (int *)malloc(sizeof(int) * len);

    A função malloc aloca dinamicamente memória para len inteiros e retorna o ponteiro para o início dessa memória. 
    O tipo do ponteiro é convertido para int * com o cast (int *).
    
    Se start = 3 e end = 8, por exemplo, serão alocados 6 inteiros (para 3, 4, 5, 6, 7, 8).

5 - Verificação de Sucesso da Alocação:

                   if (!res)
                       return (NULL);

    Verifica se a alocação de memória falhou. 
    Se malloc retornar NULL, a função retorna NULL para indicar um erro.

6 - 6. Preenchimento do Array:

                while (i < len)
                {
                   if (start <= end)
                       res[i] = start++;
                   else
                       res[i] = start--;
                   i++;
                }

    while (i < len): Este loop percorre o array de índice 0 até len - 1 (todos os índices válidos).

    if (start <= end): Se start for menor ou igual a end, preenche o array de forma crescente. 
                       O valor atual de start é atribuído a res[i], e depois start é incrementado (start++).
    
    else: Se start for maior que end, o array será preenchido de forma decrescente, com start sendo decrementado (start--) a cada iteração.
    
    Incremento de i: A cada iteração, a variável i é incrementada para passar para o próximo índice do array.

7 - Retorno do Array:   return (res);

    Após preencher o array, a função retorna o ponteiro res que aponta para o início do array alocado, contendo os valores de start até end.





Vamos usar o exemplo em que start = 8 e end = 3, que resulta num array preenchido de forma decrescente.

Entradas:  start = 8
           end = 3

Chamada da Função:  int *result = ft_range(8, 3);

Cálculo do Tamanho do Array:  len = abs(end - start) + 1; // len = abs(3 - 8) + 1 = 6

    O tamanho do array (len) é calculado como 6.

Alocação de Memória: res = (int *)malloc(sizeof(int) * len);

  - sizeof(int): retorna o tamanho em bytes que um int ocupa na memória.
                 Em sistemas comuns, um int geralmente ocupa 4 bytes.

  - Cálculo Total: A expressão sizeof(int) * len resulta em 4 * 6, ou seja, 24 bytes de memória que serão alocados.
                   Quando chamamos malloc(24), o sistema reserva 24 bytes de memória para o programa e retorna um ponteiro para o início desse bloco de memória. 
                   Esse ponteiro é armazenado na variável res.

   Podemos então usar esse bloco de memória para armazenar 6 inteiros consecutivos, pelo o que aloca memória para 6 inteiros.

Verificação da Alocação:

if (!res)
    return (NULL); // Verifica se a alocação foi bem-sucedida

    Se a alocação falhar, a função retornaria NULL. 
    Neste caso, a alocação é bem-sucedida.

Preenchimento do Array:  

O loop começa com i = 0:

while (i < len) // i < 6

1- Primeira Iteração (i = 0):

if (start <= end) // 8 <= 3 é falso
    res[i] = start++; // Não executa
else
    res[i] = start--; // Executa

    res[0] = 8;
    start é decrementado para 7.
    i é incrementado para 1.

2- Segunda Iteração (i = 1):

if (start <= end) // 7 <= 3 é falso
    res[i] = start--; // Executa

    res[1] = 7;
    start é decrementado para 6.
    i é incrementado para 2.

3- Terceira Iteração (i = 2):

if (start <= end) // 6 <= 3 é falso
    res[i] = start--; // Executa

    res[2] = 6;
    start é decrementado para 5.
    i é incrementado para 3.

4- Quarta Iteração (i = 3):

if (start <= end) // 5 <= 3 é falso
    res[i] = start--; // Executa

    res[3] = 5;
    start é decrementado para 4.
    i é incrementado para 4.

5- Quinta Iteração (i = 4):

if (start <= end) // 4 <= 3 é falso
    res[i] = start--; // Executa

    res[4] = 4;
    start é decrementado para 3.
    i é incrementado para 5.

6- Sexta Iteração (i = 5):

if (start <= end) // 3 <= 3 é verdadeiro
        res[i] = start++; // Executa

        res[5] = 3;
        start é incrementado para 4.
        i é incrementado para 6.

Fim do Loop: O loop termina quando i se torna 6, que é igual a len.

Retorno do Array: return (res); // Retorna o ponteiro para o array

                  O ponteiro res, que agora contém os valores [8, 7, 6, 5, 4, 3], é retornado.

Saída: 8 7 6 5 4 3