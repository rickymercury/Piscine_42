/*
Assignment name  : count_words
Expected files   : count_words.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva uma função que conte o número de palavras em uma string.

Esta função percorre a string fornecida e conta o número de palavras presentes. 

Uma palavra é definida como uma sequência de caracteres não vazios que são delimitados por espaços. 

A função ignora múltiplos espaços consecutivos e espaços no início ou no final da string.

Se a string estiver vazia ou contiver apenas espaços, a função retornará 0.

Retorna o total de palavras na string, que é um inteiro não negativo.

*/

int count_words(char *str)
{
    int i;
    int in_word;
    int count;

    i = 0;
    in_word = 1; // Inicializa como 1, assumindo que estamos fora de uma palavra
    count = 0;
    while (str[i])
    {
        if (str[i] == ' ' && in_word == 0)
            in_word = 1; // Se encontramos um espaço, estamos agora fora da palavra
        else if (str[i] != ' ' && in_word)
        {
            in_word = 0; // Encontramos uma letra, agora estamos dentro de uma palavra
            count++;
        }
        i++;
    }
    return (count);
}