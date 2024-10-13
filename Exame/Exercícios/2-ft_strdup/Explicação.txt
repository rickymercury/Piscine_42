ESta função tem como objetivo duplicar uma string. Ela função aloca dinamicamente memória para uma nova string e copia o conteúdo de uma string de origem (src) para essa nova string (dest).


1 - Declaração de variáveis :

    dest: Ponteiro que irá armazenar a nova string duplicada.
    len: Variável para armazenar o comprimento da string de origem.
    i: Variável de controle para iteração.

2 - Cálculo do Comprimento da String:

              len = 0;
              while (src[len])
                 len++;

    A variável len é inicializada com 0.
    Um laço while percorre a string src até encontrar o caractere nulo ('\0'), contando o número de caracteres (comprimento da string) e armazenando esse valor na len.

    Exemplo:

    Se src for a string "abc":

    Na primeira iteração: len = 0, src[0] é 'a' (diferente de '\0'), então len é incrementado para 1.
    Na segunda iteração: len = 1, src[1] é 'b', então len é incrementado para 2.
    Na terceira iteração: len = 2, src[2] é 'c', então len é incrementado para 3.
    Na quarta iteração: len = 3, src[3] é '\0' (o final da string), então o loop para.
    No final deste loop, len terá o valor 3, que é o comprimento da string "abc".


3 - Alocação de Memória:    dest = malloc(sizeof(*dest) * len + 1);

    A função malloc é chamada para alocar memória suficiente para a nova string dest.

    3.1 - Cálculo do Tamanho da Memória a Ser Alocada:

          A expressão sizeof(*dest) retorna o tamanho em bytes do tipo que dest aponta, que é char. Em sistemas típicos, isso geralmente será 1 byte.

          A expressão sizeof(*dest) * len calcula a quantidade de memória necessária para armazenar len caracteres.

    3.2 - Adicionando Espaço para o Caractere Nulo:

          O + 1 é adicionado para alocar espaço para o caractere nulo ('\0'), que é necessário para terminar a string corretamente. Portanto, a memória alocada é suficiente para armazenar todos os caracteres da string original mais o caractere nulo.
    
Alocação de Memória com malloc:

    A função malloc é chamada com o tamanho calculado. Se a alocação for bem-sucedida, malloc retorna um ponteiro para a memória alocada, que é então atribuído a dest.

    Se malloc não puder alocar a memória solicitada (por exemplo, se não houver memória suficiente disponível), ele retornará NULL.
    
    

4 - Cópia da String : 

                       i = 0;
                       while(src[i])
                       {
                           dest[i] = src[i];
                           i++;
                       }

    4.1 - Inicialização do Índice i:     i = 0;

          Aqui, o índice i é inicializado com 0. Esse índice será usado para percorrer os caracteres da string src (original) e também para preencher a string dest (duplicada).

    4.2 - Loop de Cópia:      while(src[i])

          Este while verifica se o caractere na posição i da string src é diferente de \0 (terminador nulo).

          A condição src[i] é uma maneira comum de verificar se a string ainda tem caracteres. Quando o caractere é \0, a condição se torna falsa, e o loop para.

    4.3 - Copia o Caractere:  dest[i] = src[i];

          Dentro do loop, o caractere atual da string src (na posição i) é copiado para a mesma posição na string dest.
          Isso é feito para cada caractere da string original até que o terminador nulo seja encontrado.
    4.4 - Incrementa o Índice:   i++;

          Após copiar o caractere, o índice i é incrementado para que o próximo caractere possa ser acessado na próxima iteração do loop.

Assim, o laço while é usado para copiar cada caractere da src para dest.

Para cada iteração, o caractere src[i] é atribuído a dest[i], e i é incrementado até que o caractere nulo ('\0') seja encontrado.

5 - Adiciona o Terminador Nulo:    dest[i] = '\0'; 

    Após o loop, quando todos os caracteres da string src foram copiados, é necessário adicionar o terminador nulo (\0) à string dest.
    Isso é crucial porque em C, as strings são representadas como arrays de caracteres terminados por um caractere nulo. 
    Sem o terminador nulo, as funções que manipulam strings (como printf) não saberiam onde a string termina, resultando num comportamento indefinido.

6 - Retorno:  return (dest)

    A função retorna o ponteiro dest, que agora contém uma cópia duplicada da string src.



Fluxo de Execução:

    Entrada: A string original é: "Hello, world!".

    Execução:

        A função ft_strdup é chamada com a string "Hello, world!".
        O código calcula o comprimento da string original (13 caracteres, sem contar o terminador nulo \0).
        Em seguida, aloca memória suficiente para a nova string (14 bytes, incluindo o espaço para o terminador nulo).
        O código copia cada caractere da string original para a nova string, caractere por caractere.
        Após copiar todos os caracteres, adiciona o terminador nulo \0 à nova string.
        A função retorna o ponteiro para a nova string duplicada.

    Saída:
    
        O programa imprime:

        String original: Hello, world!
        String duplicada: Hello, world!

    Free da Memória: A memória alocada para a string duplicada é libertada ao utilizar o free(duplicate).

