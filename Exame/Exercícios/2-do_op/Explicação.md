#include <stdio.h>   é utilizado para o printf.
#include <stdlib.h>  é utilizado para a função atoi, que converte as strings para inteiros.


Função main: int main(int argc, char **argv)

1 - Verificação do número de argumentos: if (argc == 4)

    Verificamos se há exatamente 4 argumentos (o nome do programa e três parâmetros: o número, o operador e o número).
    
    Se argc != 4, o programa apenas imprime uma nova linha e termina.

2 - Operações aritméticas

    2.1.1 - if (argv[2][0] == '+')

    COmo sabemos, argv é um array de strings que contém os argumentos passados para o programa.

        argv[0] é o nome do programa.
        argv[1] é o primeiro número (na forma de string).
        argv[2] é o operador aritmético (na forma de string, por exemplo, +, -, *, /, %).
        argv[3] é o segundo número (na forma de string).

    argv[2][0] acessa o primeiro caractere da string argv[2], que contém o operador.

        Por exemplo, se o operador for "+", argv[2][0] será '+'.

    O if está a verificar se o operador fornecido é '+', ou seja, se o utilizador deseja realizar uma soma.

    2.1.2 - printf("%d", (atoi(argv[1]) + atoi(argv[3])));

    atoi(argv[1]) : atoi (ASCII to Integer) é uma função da biblioteca stdlib.h que converte uma string (que representa um número) num valor do tipo int.

    Assim, atoi(argv[1]) converte a string do primeiro número (argv[1]) para um inteiro.

    Por exemplo:

    Se argv[1] for "123", atoi(argv[1]) retornará o número 123.

    Da mesma forma, atoi(argv[3]) converte o terceiro argumento (a string que representa o segundo número) num número inteiro.

    Por exemplo:

    Se argv[3] for "456", atoi(argv[3]) retornará o número 456.

    2.1.3 - Operação de soma

    Se o operador for '+', a expressão atoi(argv[1]) + atoi(argv[3]) realiza a soma dos dois números convertidos.

        Por exemplo, se argv[1] for "123" e argv[3] for "456", a soma será 123 + 456 = 579.

    2.1.4 - printf("%d", ...)

    printf é usado para exibir o resultado da soma.
    O formato %d indica que estamos a imprimir um valor inteiro.

    Por exemplo, se a soma for 579, a linha: printf("%d", 579) irá imprimir 579 na saída.
