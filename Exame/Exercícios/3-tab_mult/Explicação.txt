Este código em C tem como objetivo imprimir a tabuada de um número fornecido como argumento ao programa.


1 - Função ft_putnbr(int n): Esta função serve para imprimir um número inteiro (n), na saída padrão, como uma sequência de caracteres.

    A função utiliza a recursão para separar cada digito do número para depois convertê-los, com fim de escrevê-los um por um.

    1.1 - Verifica se n é maior ou igual a 10:

                    if (n >= 10)
                        ft_putnbr(n / 10);

           Esta parte do código serve para dividir o número nos seus respetivos dígitos. 
           Se o número é maior ou igual a 10, ele possui mais do que um dígito, então a função chama se a si mesma (recursão) com n / 10 (que remove o último dígito do número).
    
    1.2 -  Converte o último dígito para caractere:   c = n % 10 + '0';

           No final da recursão, o último dígito (calculado por n % 10) é convertido para o caractere correspondente.
           Para convertê-lo num caractere válido, soma-se '0', o valor ASCII do caractere '0' (48). 
           Isso transforma o valor numérico do dígito no seu equivalente, em formato de caractere.
           POr fim, é escrito na saída padrão ao utilizar a função write.

           Exemplo 1: ft_putnbr(123)

           A função é chamada com n = 123.

           Primeira chamada: n = 123, a condição n >= 10 é verdadeira, então ft_putnbr(123 / 10) é chamada, ou seja, ft_putnbr(12).

           Segunda chamada: n = 12, a condição n >= 10 ainda é verdadeira, então ft_putnbr(12 / 10) é chamada, ou seja, ft_putnbr(1).

           Terceira chamada: n = 1, agora n < 10, a condição n >= 10 é falsa, então a recursão para aqui. O último dígito é 1, que é convertido para o caractere '1' e escrito.

            Após a terceira chamada terminar, a segunda chamada continua: n = 12, agora o último dígito (12 % 10 = 2) é convertido para o caractere '2' e escrito.

            Finalmente, a primeira chamada continua: n = 123, agora o último dígito (123 % 10 = 3) é convertido para o caractere '3' e escrito.

            Resultado final: O número 123 é impresso como '1', '2', '3'.


2 - Função ft_atoi:   int	ft_atoi(char *str)

    Esta função converte uma string numérica num valor inteiro.

    2.1 - Percorrer a String: 

                   while (str[i] != '\0')
                   {
                       result = result * 10 + str[i] - '0';
                       i++;
                   }

          A função percorre a string caractere por caractere e converte cada um no seu valor numérico correspondente até ao fim da string (quando encontra o caractere nulo '\0').

          COmo sabemos, cada caractere numérico é armazenado no formato ASCII. 
          
          Por exemplo, o caractere '0' tem o valor ASCII 48, '1' tem o valor 49, e assim por diante.

          Para convertermos o caractere para um número, subtraimos '0' ao caractere (que é o mesmo que subtrair 48), e, assim, obtemos o valor numérico correspondente. 
          
          Por exemplo, '3' - '0' resulta em 3.

          Para atualizarmos o valor de result, a cada iteração, multiplicamos o valor atual do resultado por 10 (para deslocar os digitos anteriores uma casa para a esquerda) e adicionamos o novo dígito (que convertemos) no final do inteiro.
          No fim de cada iteração, incrementamos o indice (i++) para passarmos para o próximo caractere da string.

          Ao terminarmos o loop (quando todos os caracteres da string foram processados e, assim, a string ter chegado ao fim), a função retorna o valor final de result, que contém o número inteiro correspondente à string.

          Esta lógica é, assim, utilizada para criar o valor inteiro completo.


          Exemplo 1: ft_atoi("123")

          Inicialmente: result = 0, i = 0.

          Iteração 1: str[i] = '1', então result = result * 10 + ('1' - '0') = 0 * 10 + 1 = 1. Incrementa i para 1.
          
          Iteração 2: str[i] = '2', então result = result * 10 + ('2' - '0') = 1 * 10 + 2 = 12. Incrementa i para 2.
    
          Iteração 3: str[i] = '3', então result = result * 10 + ('3' - '0') = 12 * 10 + 3 = 123. Incrementa i para 3.

          str[i] = '\0', o laço termina, e o valor final de result = 123 é retornado.


3 - FUnção Main:  int main(int argc, char **argv)

    argc e argv:

        argc é o número de argumentos passados para o programa (incluindo o nome do programa).
        argv é um array de strings, onde cada elemento é um argumento passado.

    Se o número de argumentos for exatamente 2 (argc == 2), ou seja, se o programa foi executado com um argumento, ele vai calcular e imprimir a tabuada desse número.

    Condição if (argc == 2): O programa só funciona corretamente se houver exatamente 2 argumentos, o que significa que o utilizador forneceu um número (além do nome do programa).

    3.1 - Conversão do argumento para inteiro:

                        i = 1;
		                n = ft_atoi(argv[1]);
          
          Inicializamos a variável i com o valor 1, que será usada como fator de multiplicação inicial (1, 2, 3, ..., até 9).

          A função ft_atoi(argv[1]) é utilizada para converter o argumento da string (o primeiro argumento da linha de comando - que é passado como string argv[1]) para um número inteiro e armazená-lo na variável n.

          Por exemplo, se executarmos o programa com ./programa 5, o valor de argv[1] será "5", e após a conversão, n será 5 (um número inteiro).

    3.2 - Loop de 1 a 9:  while (i <= 9)

          A variável i começa em 1 e o loop continua enquanto i <= 9, o que significa que ele vai calcular a multiplicação de n por 1 até 9, o que vai criar a tabuada da multiplicação.

    3.3 - No interior do Loop:

            O programa imprime a operação i x n = resultado, onde:
        
                - i é o multiplicador.
                - n é o número dado pelo usuário.
        
            E o resultado é i * n.

            3.3.1 - ft_putnbr(i): Vai exibir o valor atual de i. 
                                  Esse é o número que será multiplicado pelo valor de n.
    
            Exemplo: Se i = 1, ele exibe 1.

            3.3.2 - write(1, " x ", 3): Escreve a string " x " para criar o formato de uma operação de multiplicação.
    
            Exemplo: Exibe " x " logo após o valor de i.

            3.3.3 - ft_putnbr(n): Exibe o valor de n, que é o número recebido como argumento. Esse número será multiplicado por i.
    
            Exemplo: Se n = 5, ele exibe 5.

            3.3.4 - write(1, " = ", 3): Escreve o string " = " para criar o formato da igualdade.
    
            Exemplo: Exibe " = " logo após a multiplicação.

            3.3.5 - ft_putnbr(i * n): Calcula i * n, o produto da multiplicação, e exibe o resultado.
    
            Exemplo: Se i = 1 e n = 5, ele exibe 5 (pois 1 * 5 = 5).

            3.3.6 - write(1, "\n", 1): Escreve uma nova linha (\n) para separar cada linha da tabuada.

          No fim de cada iteração, incrementamos i para passar à próxima multiplicação.

    3.3 - Saída do loop:

          O programa utiliza a função write para imprimir cada parte da tabuada.
    
          ft_putnbr(i) imprime o valor de i, ft_putnbr(n) imprime o valor de n, e ft_putnbr(i * n) imprime o resultado da multiplicação.