1 - Contagem do Comprimento da String:  while (str[i] != '\0')
                                            i++;

Este loop while percorre a string str, em que incrementa i enquanto o caractere atual (str[i]) não chegar ao fim ('\0').
No final desse loop, i conterá o número total de caracteres da string (excepto o '\0').

Explicação:

    Incremento:
        Dentro do loop, i é incrementado em 1 (i++), movendo para o próximo caractere da string.
        Esse processo é repetido até que o loop encontre o caractere nulo.

    Resultado:
        Quando o loop termina, i vai conter o número total de caracteres na string, excluindo o caractere nulo.
        Por exemplo, se a string for "Olá", i terá o valor 3 quando a execução do loop terminar, pois existem três caracteres antes do '\0'.

2 - Impressão da String de Trás para Frente:  while (--i >= 0)
                                                write(1, &str[i], 1);

Este loop while imprime os caracteres da string em ordem reversa:

    --i decrementa i antes da verificação da condição. Isso significa que, inicialmente, i apontará para o último caractere da string (i = i - 1).

    O loop continuará enquanto i for maior ou igual a 0. A cada iteração, o caractere correspondente a str[i] é impresso ao utilizar a função write.

    Explicação:

    Decremento:
        Antes de entrar no segundo loop, i é decrementado em 1 (--i), para que agora i aponte para o último caractere da string.
        Usando o exemplo anterior, onde i era 3, após o decremento, i se torna 2, que é o índice do último caractere ('á').

    Condição do Loop:
        O loop continuará enquanto i for maior ou igual a 0.
        Isso garante que todos os caracteres da string serão impressos, começando do último até o primeiro.

        O loop continuará até que i seja menor que 0. Assim, todos os caracteres são impressos em ordem reversa.
        Para a string "Olá", a saída será á, l, O, resultando na impressão da string na ordem reversa.

3 - Impressão de uma Nova Linha:  write(1, "\n", 1);

Após o loop que imprime os caracteres da string, write(1, "\n", 1) é chamado para imprimir uma nova linha. Isso ajuda a formatar a saída, especialmente se a função for chamada várias vezes em sequência.

Retorno da String Original:  return (str);

A função retorna o ponteiro original para a string str. Isso é útil se você precisar da string após a chamada da função, mantendo a função compatível com a convenção comum de funções que manipulam strings.  



Vamos ver um exemplo prático usando a string "Olá, mundo!".

    Contagem do Comprimento:
        Inicialmente, i = 0.
        A função percorre a string:
            i = 0: str[0] é 'O' → i++ (agora i = 1)
            i = 1: str[1] é 'l' → i++ (agora i = 2)
            i = 2: str[2] é 'á' → i++ (agora i = 3)
            i = 3: str[3] é ',' → i++ (agora i = 4)
            i = 4: str[4] é ' ' → i++ (agora i = 5)
            i = 5: str[5] é 'm' → i++ (agora i = 6)
            i = 6: str[6] é 'u' → i++ (agora i = 7)
            i = 7: str[7] é 'n' → i++ (agora i = 8)
            i = 8: str[8] é 'd' → i++ (agora i = 9)
            i = 9: str[9] é 'o' → i++ (agora i = 10)
            i = 10: str[10] é '!' → i++ (agora i = 11)
            i = 11: str[11] é '\0' → o loop para, e i agora é 11.

    Impressão Reversa:
        Antes de entrar no loop de impressão, i é decrementado:
            Agora i = 10 (último caractere '!').
        A função imprime:
            write(1, &str[10], 1) → imprime '!'
            i = 9 → imprime 'o'
            i = 8 → imprime 'd'
            i = 7 → imprime 'n'
            i = 6 → imprime 'u'
            i = 5 → imprime 'm'
            i = 4 → imprime ' '
            i = 3 → imprime ','
            i = 2 → imprime 'á'
            i = 1 → imprime 'l'
            i = 0 → imprime 'O'

    Nova Linha:
        Após imprimir todos os caracteres, a função imprime uma nova linha.