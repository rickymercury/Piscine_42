1 - Função get_num_len:   int get_num_len(int nbr)

    Esta função tem como objetivo calcular o número de dígitos necessários para representar o número nbr como uma string, tendo em consideração o sinal negativo (se aplicável).

    1.1 - Declaração das Variáveis:

          O parâmetro nbr é o número inteiro que estamos a converter.
    
          int len: vai armazenar o número de caracteres necessários para representar o número (nbr) como uma string, pois precisamos de saber quantos caracteres (dígitos e sinais) serão utilizados na conversão de um número inteiro para uma string, a fim de alocar a quantidade correta de memória.
                   Assim, len vai armazenar o comprimento da string final (incluindo o sinal negativo, se necessário).
                   A variável len é iniciaizada com o valor 0, pois vamos começar a contagem do comprimento a partir do zero e incrementar à medida que contamos os digitos do número.

    1.2 - Casos especiais:

          1.2.1 - Verificar se nbr é igual a 0: if (nbr == 0) - Se o número passado (nbr) for igual a 0, a função retorna imediatamente 1, já que, embora o número zero tenha e ocupe apenas um único dígito, o valor 0 nunca é reduzido pela divisão por 10, então o loop while (que divide o número) não funcionaria corretamente. 
                                                                Assim, para garantir que 0 seja representado corretamente, retornamos imediatamente 1, indicando que a string resultante terá apenas um caractere ('0').

          1.2.2 - Verificar se nbr é negativo: if (nbr < 0) - Se o número nbr for negativo, len é incrementado para contabilizar o sinal negativo, pois isso vai reservar espaço para o caractere de sinal negativo ('-').
                                                              Um número negativo precisa de um dígito extra para representar o sinal, então incrementamos len para garantir que ele seja contabilizado.
    
    1.3 - Loop para Contar os Dígitos: 

                        while (nbr != 0)
                        {
                            nbr /= 10;
                            len++;
                        }
    
          O loop é responsável por contar quantos dígitos o número nbr tem.

          A cada iteração, o número (nbr) é dividido por 10, o que remove o último dígito. Por exemplo, se nbr for 123, ele ficará 12, após a primeira divisão, e 1 , após a segunda, e 0, após a terceira.
          Cada vez que o número é dividido, incrementamos len para contabilizar o dígito que foi removido.
       
          Assim, o loop divide o número nbr por 10 até que ele seja 0. Esta ação vai contar quantos dígitos o número tem.

          O loop para quando nbr é 0, ou seja, quando todos os dígitos foram contados.

    1.4 - Retorno do Comprimento:  return (len)
    
          A função retorna o valor de len, que agora contém o número total de caracteres necessários para representar o número na forma de string (incluindo o sinal se for negativo).

          Exemplo:

          Para 123: O while itera 3 vezes, então len será 3 (porque há 3 dígitos).
                    Retorna 3.
    
          Para -123: O número é negativo, então len começa em 1 (por causa do sinal).
                     O while itera 3 vezes, então len será 4 (3 dígitos + 1 para o sinal).
                     Retorna 4.
    
          Para 0: O if (nbr == 0) trata o 0 como caso especial e retorna 1, porque 0 ocupa apenas um dígito.


2 - Função ft_itoa:   char *ft_itoa(int nbr)

    2.1 - Declaração das Variáveis: 

          int nbr: é o argumento/parâmetro da função, que representa o número inteiro que será convertido numa string.

           long num: é utilizada para armazenar o valor de nbr (num = nbr).
                    Converte o número nbr para o tipo long (num = nbr) para que possamos lidar corretamente com números negativos, especiamente o caso de INT_MIN.

                    O tipo long é utilizado aqui para lidar com o valor mínimo possível de um inteiro em C (-2147483648 para int de 32 bits). 
                    Quando tentamos fazer a conversão de INT_MIN para um valor positivo diretamente, poderíamos acabar com um valor que não pode ser representado num int, resultando num comportamento indefinido.
                    Isso ocorre porque, ao lidar com o mínimo valor de int, não podemos simplesmente converter diretamente para positivo utilizando nbr = -nbr, já que -2147483648 não pode ser representado como positivo num int comum (teríamos um overflow da capacidade). 
                    
                    Assim, ao utilizar o long, garantimos que podemos armazenar valores negativos e convertêlos corretamente.
                    Ao copiar nbr para num, podemos operar sobre a variável num sem modificar o valor original de nbr.
                    Isso é útil quando queremos modificar (manipular) num, para torná-lo positivo se for negativo, sem afetar o valor original que foi passado para a função.
                    Assim, convertemos nbr para num para garantir que podemos manipular corretamente tanto os números positivos quanto os negativos.

          int len: representa o comprimento da string que será necessária para armazenar o número, incluindo o sinal de negativo se o número for negativo.

                   O valor de len é obtido ao chamarmos a função get_num_len (len = get_num_len(nbr)), que calcula quantos caracteres serão necessários para representar o número numa string (string resultante), incluindo o espaço para um possível sinal negativo mais o caractere nulo ('\0').
                   O valor de len é essencial para sabermos quanto espaço temos de alocar de memória, com a função malloc. 
                   Sem essa informação, não poderíamos garantir que a string resultante tivesse espaço suficiente para armazenar todos os dígitos do número, além do caractere nulo.

          char *result: é um ponteiro para o array de caracteres (string) que será alocado dinamicamente (result = (char *)malloc(sizeof(char) * (len + 1))) - a função malloc é utilizada para alocar dinamicamente um bloco de memória suficiente para armazenar len caracteres mais o caractere nulo '\0' (ou seja, para armazenar a string resultante, que terá len + 1 caracteres), que termina a string.
                        O result armazena, assim, a string que representa o número convertido e que será retornada pela função, no final.

    2.2 - if (!result) return (NULL): verifica se a alocação de memória falhou. Se result for NULL, a função retorna NULL.

          Assim, se malloc falhar, não poderemos continuar a função, pois não teremos um local válido na memória para armazenar a string resultante. 
          Portanto, é crucial verificar se a alocação foi bem-sucedida antes de prosseguir.
          
          Retornar NULL permite que a função que chamou saiba que ocorreu um erro e que não foi possível criar a string, permitindo que a lógica de tratamento do erro seja aplicada na parte do código que chama ft_itoa.

    2.3 - result[len] = '\0': definimos o último caractere da string com o caractere nulo (\0).
                              Pois, em C, as strings são representadas como arrays de caracteres terminados em '\0'. 
                              Isso permite que funções que manipulam strings saibam onde a string termina. 
                              Sem este caractere, qualquer operação de string subsequente (como a impressão ou a comparação) poderia acessar memória fora do espaço alocado, resultando num comportamento indefinido.
                              
                              Assim, antes de adicionar os caracteres que representam o número, precisamos de garantir que a string é tratada como uma string C válida. 
                              Portanto, definimos result[len] para \0 para indicar o fim da string.

    2.4 - if (num == 0): verificamos se o número num é zero.
                         Se for, ele define o primeiro caractere da string como '0' e retorna a string resultante:

                                     result[0] = '0';
                                     return (result);

                         Isto é necessário, pois o número zero é uma condição especial, pois apenas precisa de ser representado por um único caractere '0'. 
                         Se não tratássemos deste caso, o loop que vem a seguir não seria executado e a string não teria o valor correto.
                         Assim, se num for zero, não há necessidade de qualquer outra operação, e podemos retornar imediatamente a string com '0'.

    2.5 - if (num < 0): verifica se num é negativo. 
                        Se for, define o primeiro caractere da string com o caractere '-' e converte num para positivo:
                           
                                     result[0] = '-';
                                     num = -num;

                        Isto é necessário, pois para números negativos, precisamos de incluir um sinal de "menos" na string resultante. 
                        Portanto, colocamos '-' na primeira posição (result[0]).
                        Para facilitar a conversão dos dígitos, convertemos num para positivo (ou seja, multiplicamos por -1). 
                        Isso permite nos tratar todos os números da mesma maneira, independentemente de serem negativos ou positivos.
                       
    2.6 - while (num != 0): Este loop itera enquanto num não for zero, em que vamos extrair cada dígito do número e armazená-lo na string.

                                     while (num != 0)
                                     {
                                        result[--len] = (num % 10) + '0';
                                        num /= 10;
                                     }

           - result[--len] = (num % 10) + '0': Aqui, selecionamos o último dígito do número (num % 10), que é um inteiro entre 0 e 9. 
                                               Para convertê-lo num caractere, adicionamos '0', que tem um valor ASCII correspondente a 48. 
                                               Assim, se o dígito for 3, por exemplo, 3 + '0' resultará no caractere '3'.

           - num /= 10: Reduzimos num dividindo-o por 10, removendo o último dígito. 
                        Por exemplo, se num era 123, agora ficará 12, após essa operação.

        Isto é necessário pois este loop preenche a string result de trás para frente (do último dígito para o primeiro). 
        Istoo é feito porque já definimos o caractere nulo na última posição da string e precisamos de preencher a string a partir do final, conforme a extração dos dígitos.
        
        Este é o núcleo da lógica de conversão, onde realmente transformamos o número numa string, dígito a dígito.

    2.7 - return (result): retorna o ponteiro para a string resultante que foi alocada e preenchida.
                           O retorno da string é o objetivo da função ft_itoa. 
                           Isso permite que a chamada da função (na main) utilize a string resultante como desejar, seja para imprimir, armazenar ou manipular.
                           A string foi alocada dinamicamente, então a responsabilidade de libertar esta memória (free) recai sobre o a main da função. 
                           Isto é importante em C para evitar leaks de memória.
        


Exemplo: ft_itoa(-123)

1. O programa inicia e a função main é chamada. 
   O número -123 será passado para a função ft_itoa.

2. Chamada da Função ft_itoa: char *result = ft_itoa(-123);

   O número -123 é passado para a função ft_itoa.

3. Dentro da Função ft_itoa:

   - Conversão do Inteiro: num = nbr; // num agora é -123

      O valor de nbr (-123) é copiado para num.

   - Cálculo do Comprimento: len = get_num_len(nbr);

      Chama get_num_len(-123).

      Dentro da Função get_num_len:

        - Contagem de Dígitos:
           
           len é inicialmente 0.
           Como nbr é -123, len é incrementado (para o sinal negativo).
           O loop conta os dígitos: 1, 2, 3, totalizando 3.
         
         Retorna 4 (incluindo o sinal) para a função ft_itoa.

    - Alocação de Memória: result = (char *)malloc(sizeof(char) * (len + 1));

      Aloca espaço para 4 caracteres (3 dígitos + 1 terminador nulo).
    
     Se a alocação falhar, retorna NULL.

4. Definição do Terminador Nulo:  result[len] = '\0'; // result[4] = '\0'

5. Tratamento de Zero: Não se aplica neste caso, pois num é -123.

6. Tratamento de Números Negativos: result[0] = '-'; // result[0] = '-'
                                    num = -num; // num agora é 123

7. Conversão para String:  result[--len] = (num % 10) + '0'; // result[3] = '3'
                           num /= 10; // num agora é 12

        Itera:

            num = 123: result[2] = '2', num = 12.
            num = 12: result[1] = '1', num = 1.
            num = 1: result[0] = '1', num = 0.

        Após o loop, result contém "-123".

8. Retorno da Função:  return (result); // result contém "-123\0"

9. Impressão do Resultado: printf("ft_itoa(-123) = %s\n", result);

   Saída: ft_itoa(-123) = -123
