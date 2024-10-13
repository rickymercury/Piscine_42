Este código tem o propósito de exibir o número de argumentos passados ao programa na linha de comando, excluindo o nome do programa.

1 - ft_putchar(char c): Esta função é uma função auxiliar que serve para imprimir um único caractere na saída.

2 - ft_putnbr(int n): Esta função imprime um número inteiro (n) na saída padrão, convertendo-o para uma sequência de caracteres.

    Se o número n for maior ou igual a 10, a função chama se recursivamente, primeiro para dividir o número por 10 (o que obtém o "dígito da esquerda") e depois para calcular o resto da divisão por 10 (o "dígito da direita").

    Quando n for menor que 10 (um dígito), ele converte o número para o caractere correspondente utilizando n + '0' (pois '0' tem valor ASCII 48) e imprime esse caractere com ft_putchar.

Exemplo: Se n for 123, a função segue estes passos:

    n = 123 -> Chama ft_putnbr(12) (imprime o dígito da esquerda).
    n = 12 -> Chama ft_putnbr(1) (imprime o dígito da esquerda).
    n = 1 -> Imprime '1'.
    n = 12 % 10 = 2 -> Imprime '2'.
    n = 123 % 10 = 3 -> Imprime '3'.

Resultado final: imprime 123.

3 - FUnção Principal:  int main(int argc, char **argv)

    Os parâmetros são:

    argc: o número de argumentos passados ao programa, incluindo o nome do programa.
    argv: um vetor de strings contendo os argumentos passados.

    3.1 - (void)argv: Esta linha é usada para indicar que o parâmetro argv não será utilizado no código. 
                      Isso evita warnings do compilador sobre uma variável não usada.

    3.2 - ft_putnbr(argc - 1): A função ft_putnbr é chamada para imprimir o número de argumentos que foram passados ao programa, excluindo o nome do programa (por isso subtrai 1 de argc). 
                               Se o programa foi chamado com três argumentos, argc será 4 (nome do programa + 3 argumentos), então argc - 1 será 3, e ft_putnbr(3) imprimirá 3.
   
    3.3 - ft_putchar('\n'): Depois de imprimir o número de argumentos, vamos chamar ft_putchar('\n') para imprimir uma nova linha no final.

    3.4 - return (0): A função principal retorna 0, indicando que o programa foi executado com sucesso.
        