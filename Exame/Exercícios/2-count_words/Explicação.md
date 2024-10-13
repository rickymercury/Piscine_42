1 - Função:  int count_words(char *str)

    A função é declarada para retornar um inteiro (int), que será o número de palavras na string str. O parâmetro char *str é um ponteiro para o primeiro caractere de uma string.

2 - Declaração das Variáveis:

int i: é utilizada como índice para percorrer a string (str).
       Cada posição da string (str[i]) é verificada uma a uma no loop while.
       Começa em 0 para verificar o primeiro caractere da string.

int in_word: é um indicador (flag) da palavra, que verifica se o código está dentro ou fora de uma palavra.
            Valores Possíveis: 
                               0 - significa que o programa está dentro de uma palavra. Isso ocorre quando um caractere que não é um espaço (' ') foi encontrado.
                               1 - significa que o programa não está dentro de uma palavra. Esse valor é definido quando um espaço é encontrado, ou no início da execução, indicando que o código está pronto para identificar o início de uma nova palavra.
            Inicialmente, in_word é definido como 1, assumindo que no início da string o código não está dentro de uma palavra (anteriormente, não houve letras).
            Quando um espaço (' ') é encontrado, in_word muda para 1, o que indica que não estamos dentro de uma palavra.
            Quando um caractere que não é um espaço é encontrado e in_word é 1, isso indica o início de uma nova palavra. Nesse momento, o count é incrementado, e in_word muda para 0 (entramos numa palavra).

int count: é um contador que vai armazenar o número total de palavras encontradas na string.
          É, assim, utilizada para contar o número de palavras na string.
          Inicialmente, count é definido como 0, pois ainda não identificamos nenhuma palavra.
          Sempre que o código encontra o início de uma nova palavra (ou seja, quando um caractere diferente do espaço é encontrado e in_word está em 1), o count é incrementado.
          No final do loop, count vai conter o número total de palavras identificadas na string.

3 - Loop Principal - Percorrer a String:  while (str[i] != '\0')

    Este loop continua enquanto o caractere na posição i não for o caractere nulo ('\0'). 
    O loop percorre todos os caracteres da string até atingir o fim.

4 - COndição para os Espaços: 

                if (str[i] == ' ' && in_word == 0)
                    in_word = 1;

    Esta parte do código identifica quando é que estamos a sair duma palavra e encontramos um espaço. 

      - in_word == 0: Verifica se estávamos dentro de uma palavra. 
                      Se in_word for 0, isso significa que o código ainda se encontrava numa palavra antes desse espaço.

    Se ambas as condições forem verdadeiras (estávamos numa palavra e agora encontramos um espaço), o estado da variável in_word é ajustado para indicar que o código deixa de estar dentro de uma palavra.
    Assim, se o caractere atual for um espaço (' ') e in_word for 0, significa que estamos fora de uma palavra. 
    Portanto, o código define in_word como 1, o que significa que agora estamos fora de uma palavra, prontos para encontrar o início da próxima palavra.

    Exemplo:

    Se estamos a processar a string "Hello World" e, quando o código encontra o espaço entre "Hello" e "World", é definido in_word = 1, indicando que agora estamos fora de uma palavra e vai procurar quando é o ínicio da próxima palavra (Word).

5 - COndição para os Caracteres Não-Espaço:  

                else if (str[i] != ' ' && in_word)
                {
                    in_word = 0;
                    count++;
                }

    Esta parte do código identifica quando encontramos o início de uma nova palavra e, assim, incrementa o contador de palavras.

    Se o caractere atual não for um espaço (ou seja, se encontrarmos um caractere que faz parte de uma palavra) e in_word for 1 (se estávamos fora de uma palavra, ou seja, in_word == 1), isso significa que acabamos de sair de um espaço e encontramos o início de uma nova palavra.

    Se ambas as condições forem verdadeiras (se estavamos fora de uma palavra e encontramos um caractere da palavra seguinte), o código executa dois passos importantes:

      - in_word = 0: Indica que agora estamos dentro de uma palavra. Isso impede que a contagem seja incrementada novamente para os próximos caracteres da mesma palavra.

      - count++: Incrementa o contador de palavras, pois acabamos de encontrar o início de uma nova palavra.

      Exemplo:

        Considerando que encontramos o caractere 'W' na string "Hello World", logo após o espaço.
        Nesta altura, in_word == 1 e str[i] == 'W' (um caractere da palavra), então o código:
        
            Define in_word = 0 (estamos agora dentro da palavra "World").
            Incrementa count, pois acabamos de encontrar uma nova palavra.


6 - Incremento do Índice: O índice i é incrementado para passar para o próximo caractere da string.
                          Este comando é executado a cada iteração do while, movendo o índice para o próximo caractere da string. A função continua a processar a string, caractere por caractere, até atingir o fim.   

7 - Retorno do Contador: Após percorrer toda a string, a função retorna o valor do contador count, que representa o número total de palavras encontradas.





String de Exemplo:  "  Hello   World  "

Estado Inicial

    String: " Hello World "
    Índice (i): 0 (começamos no primeiro caractere)
    in_word: 1 (assumimos que, no ínicio, estamos fora de uma palavra)
    count: 0 (ainda não foi contada nenhuma palavra)

1. Caractere na posição i = 0 (espaço ' '):

    Condição: str[i] == ' ' e in_word == 0 não se aplicam porque in_word == 1 (estamos fora de uma palavra).
    Resultado: Continuamos fora de uma palavra, in_word permanece 1, nenhum incremento em count.
    Próximo: i = 1.

2. Caractere na posição i = 1 (espaço ' '):

    Condição: str[i] == ' ' e in_word == 0 não se aplicam porque in_word == 1.
    Resultado: Continuamos fora de uma palavra, in_word permanece 1, nenhum incremento em count.
    Próximo: i = 2.

3. Caractere na posição i = 2 (letra 'H'):

    Condição: str[i] != ' ' e in_word == 1 aplicam se.
    Resultado: Encontramos o início de uma palavra. in_word é definido para 0.
               count é incrementado: count = 1.
    Próximo: i = 3.

4. Caractere na posição i = 3 (letra 'e'):

    Condição: Nenhuma condição se aplica porque in_word == 0 (já estamos dentro de uma palavra).
    Resultado: Continuamos na palavra "Hello", nenhum incremento em count.
    Próximo: i = 4.

5. Caractere na posição i = 4 (letra 'l'):

    Condição: Nenhuma condição se aplica porque in_word == 0.
    Resultado: Continuamos na palavra "Hello", nenhum incremento em count.
    Próximo: i = 5.

6. Caractere na posição i = 5 (letra 'l'):

    Condição: Nenhuma condição se aplica porque in_word == 0.
    Resultado: Continuamos na palavra "Hello", nenhum incremento em count.
    Próximo: i = 6.

7. Caractere na posição i = 6 (letra 'o'):

    Condição: Nenhuma condição se aplica porque in_word == 0.
    Resultado: Continuamos na palavra "Hello", nenhum incremento em count.
    Próximo: i = 7.

8. Caractere na posição i = 7 (espaço ' '):

    Condição: str[i] == ' ' e in_word == 0 se aplicam.
    Resultado:
        Saímos da palavra "Hello". in_word é definido para 1.
        Count não incrementa.
    Próximo: i = 8.

9. Caractere na posição i = 8 (espaço ' '):

    Condição: Nenhuma condição se aplica porque in_word == 1.
    Resultado: Continuamos fora de uma palavra, in_word permanece 1.
    Próximo: i = 9.

10. Caractere na posição i = 9 (espaço ' '):

    Condição: Nenhuma condição se aplica porque in_word == 1.
    Resultado: Continuamos fora de uma palavra, in_word permanece 1.
    Próximo: i = 10.

11. Caractere na posição i = 10 (letra 'W'):

    Condição: str[i] != ' ' e in_word == 1 se aplicam.
    Resultado: Encontramos o início de uma nova palavra. in_word é definido para 0.
        count é incrementado: count = 2.
    Próximo: i = 11.

12. Caractere na posição i = 11 (letra 'o'):

    Condição: Nenhuma condição se aplica porque in_word == 0.
    Resultado: Continuamos na palavra "World", nenhum incremento em count.
    Próximo: i = 12.

13. Caractere na posição i = 12 (letra 'r'):

    Condição: Nenhuma condição se aplica porque in_word == 0.
    Resultado: Continuamos na palavra "World", nenhum incremento em count.
    Próximo: i = 13.

14. Caractere na posição i = 13 (letra 'l'):

    Condição: Nenhuma condição se aplica porque in_word == 0.
    Resultado: Continuamos na palavra "World", nenhum incremento em count.
    Próximo: i = 14.

15. Caractere na posição i = 14 (letra 'd'):

    Condição: Nenhuma condição se aplica porque in_word == 0.
    Resultado: Continuamos na palavra "World", nenhum incremento em count.
    Próximo: i = 15.

16. Caractere na posição i = 15 (espaço ' '):

    Condição: str[i] == ' ' e in_word == 0 se aplicam.
    Resultado: Saímos da palavra "World". in_word é definido para 1.
               Count não incrementa.
    Próximo: i = 16.

17. Caractere na posição i = 16 (espaço ' '):

    Condição: Nenhuma condição se aplica porque in_word == 1.
    Resultado: Continuamos fora de uma palavra, in_word permanece 1.
    Próximo: i = 17.

18. Caractere na posição i = 17 (fim da string \0): O loop termina, já que chegamos ao final da string.

Resultado Final: count = 2 - A string contém 2 palavras: "Hello" e "World".

A função retorna o valor 2.