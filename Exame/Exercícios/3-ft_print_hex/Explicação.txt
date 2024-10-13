1 - Função ft_putchar: Esta função recebe um caractere c como argumento e o imprime na saída padrão utilizando a função write. 

2 - Função ft_atoi: A função ft_atoi converte uma string de caracteres (um array de chars) que representa um número decimal num valor inteiro (int).

    Inicialmente, result é definido como 0.
    O loop percorre cada caractere da string até encontrar o caractere nulo (\0), que indica o fim da string.
    Para cada caractere numérico ('0' a '9'), o valor do caractere é convertido para o valor numérico correspondente (subtraindo '0') e multiplicado por 10 a cada passo para construir o número inteiro.

Por exemplo, para a string "123", o resultado será construído assim:

    result = 1
    result = 1 * 10 + 2 = 12
    result = 12 * 10 + 3 = 123

No final, a função retorna o valor inteiro obtido.

3 - Função ft_puthex: A função ft_puthex converte um número inteiro para sua representação hexadecimal e imprime o resultado.

    hex_digits é uma string que contém todos os dígitos e letras hexadecimais (0-9 e a-f).
    O número é dividido recursivamente por 16 ao chamar recursivamente ft_puthex(n / 16), até que n seja menor que 16.
    Quando n é menor que 16, a função imprime o caractere correspondente na string hex_digits para o valor de n % 16, que dá o dígito hexadecimal.

    Por exemplo:

    Se n for 254, a sequência de chamadas será: ft_puthex(254 / 16) → ft_puthex(15) e então ft_puthex(254 % 16) → ft_puthex(14).
    O resultado será 'fe' (254 em hexadecimal).

4 - Função main:  int	main(int argc, char **argv)

    A função recebe os argumentos da linha de comando argc (número de argumentos) e argv (array de strings que contém os argumentos).

    Verifica se o número de argumentos (argc) é 2, ou seja, se foi fornecido apenas um argumento além do nome do programa.

    Se a condição for verdadeira, o programa converte o argumento para um número inteiro utilizando o ft_atoi e depois imprime a representação hexadecimal desse número utilizando ft_puthex.

    Por fim, imprime uma nova linha ('\n') e retorna 0 que indica que o programa terminou com sucesso.


Exemplo de fluxo:

Se o programa for executado com o argumento 255:

    ft_atoi("255") converte "255" para o número 255.
    ft_puthex(255) imprime a representação hexadecimal de 255, que é ff.
    O programa imprime ff seguido de uma nova linha.

Se for executado com o argumento 10:

    ft_atoi("10") converte "10" para o número 10.
    ft_puthex(10) imprime a (hexadecimal de 10).
    O programa imprime a seguido de uma nova linha.

