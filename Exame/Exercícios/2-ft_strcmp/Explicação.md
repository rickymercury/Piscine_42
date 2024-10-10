A função ft_strcmp é utilizada para comparar duas strings (ou arrays de caracteres) e determinar se elas são iguais ou, caso contrário, qual delas é "maior", numa ordem lexicográfica. 
O resultado da comparação é um inteiro que representa a diferença entre os caracteres na posição onde as strings diferem.


1 - Inicialização:  int i = 0

    Inicia o índice i em 0, que será usado para percorrer as strings.

2 - Laço While:     while (s1[i] && s2[i] && s2[i] == s1[i])

    Este laço continua enquanto ambos os caracteres nas posições i de s1 e s2 são diferentes de '\0' (o que indica que não chegaram ao final das strings) e os caracteres nas mesmas posições são iguais.

        Se todas as comparações forem verdadeiras, o índice i é incrementado para comparar o próximo par de caracteres.

3 - Retorno:      return (s1[i] - s2[i]);

        Após sair do laço, este comando retorna a diferença entre os caracteres s1[i] e s2[i].

        Se s1[i] for maior que s2[i], o resultado será positivo.
        Se s1[i] for menor que s2[i], o resultado será negativo.
        Se ambos forem iguais e ambos chegaram ao final da string, o resultado será 0.



Exemplo;

Vamos comparar as strings str1 = "benfica" e str2 = "benfas".

    Início da Função:

        Chamamos ft_strcmp("benfica", "benfas").

    Inicialização:

        i = 0 (inicializa o índice).

    Comparação:

        Iniciamos o laço while (s1[i] && s2[i] && s2[i] == s1[i]).

        Iteração 1:

            i = 0:
                s1[0] = 'b' e s2[0] = 'b' (iguais).
                Avançamos: i = 1.

        Iteração 2:

            i = 1:
                s1[1] = 'e' e s2[1] = 'e' (iguais).
                Avançamos: i = 2.

        Iteração 3:

            i = 2:
                s1[2] = 'n' e s2[2] = 'n' (iguais).
                Avançamos: i = 3.

        Iteração 4:

            i = 3:
                s1[3] = 'f' e s2[3] = 'f' (iguais).
                Avançamos: i = 4.

        Iteração 5:

            i = 4:
                s1[4] = 'i' e s2[4] = 'a' (diferentes).
                O laço termina aqui.

    Retorno:
    
        Agora retornamos a diferença: return (s1[i] - s2[i]);
        Temos s1[4] = 'i' e s2[4] = 'a'.
        Cálculo: 'i' - 'a' = 105 - 97 = 8.
        A função retorna 8.