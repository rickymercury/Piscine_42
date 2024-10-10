Esta função é usada para converter uma string, que representa um número, numa base específica (de 2 a 16) para um inteiro, na base 10.

1 - Definição da FUnção:  int ft_atoi_base(const char *str, int str_base)

    Define a função ft_atoi_base que aceita dois parâmetros:

        const char *str: A string que representa o número a ser convertido.
        int str_base: A base do número na string (de 2 a 16).

2 - Declaração das Variáveis :

int i: Usada como um índice para percorrer a string.
       Inicialmente, i é definido como 0, o que significa que começamos no primeiro caractere da string. 
int sign: Usada para armazenar o sinal do número que está a ser convertido (positivo ou negativo).
          Inicialmente, sign é definido como 1, assumindo que o número é positivo. 
          Se a função encontrar um caractere '-' no início da string, sign é definido como -1. 
          No final da função, o resultado é multiplicado por sign para garantir que o valor final seja negativo, se necessário.
int result: Armazena o valor numérico resultante (acumulado) do número que está a ser convertido a partir da string.
            É assim, o resultado final da conversão da string num inteiro na base 10.
            Inicialmente, result é definido como 0. 
            Durante o loop while, cada dígito convertido é adicionado ao result, que é multiplicado pela base (str_base) em cada iteração para deslocar o valor atual para a esquerda (ou seja, para a próxima posição de valor mais significativo). 
            Isso permite que a função construa o número inteiro corretamente a partir dos dígitos lidos.
int digit: Usada para armazenar o valor numérico correspondente ao caractere atual que está a ser processado na string.
           A cada iteração do loop, digit é reinicializado para 0 e, dependendo do caractere atual (se é um dígito, uma letra maiúscula ou uma letra minúscula), digit é calculado com o valor numérico apropriado. 
           Por exemplo, se o caractere for '0', digit será 0; se for 'A', digit será 10; se for 'a', digit também será 10. Esse valor é então usado para atualizar result.

3 - Verificação da Base: 

              if (str_base < 2 || str_base > 16) 
                  return (0);
    
    Condições da Verificação:

       - str_base < 2: Esta condição verifica se a base fornecida é menor que 2. 
                       Em sistemas numéricos, a base mínima válida é 2 (que representa o sistema binário). 
                       Se a base for menor que 2, não faz sentido, pois não é possível representar números numa base menor que 2.
       - str_base > 16: Esta condição verifica se a base fornecida é maior que 16. 
                        As bases numéricas geralmente usadas e suportadas são de 2 a 16 (binário, octal, decimal, hexadecimal). 
                        Bases acima de 16 não são comuns e podem complicar a lógica de conversão, especialmente porque a função se baseia em caracteres alfanuméricos (0-9 e A-F para 10-15).

    return (0): Se a condição for verdadeira (ou seja, a base não está num intervalo aceitável), a função retorna 0. 
    Este retorno indica que houve um erro na entrada, pois a base não é válida para a conversão.
    
4 - Verificação do Sinal:

                if (str[i] == '-') 
                {
                    sign = -1;
                    i++;
                }

    Esta verificação é responsável por identificar se o primeiro caractere da string (str) é um sinal negativo (-).
   
    Se for, o código altera o valor da variável sign para -1. 
    Isso significa que o número final será multiplicado por -1 no retorno, transformando-o num número negativo.

    Após identificar a presença de um sinal negativo, a função incrementa i para passar para o próximo caractere da string. 
    Isso é importante para garantir que o próximo dígito (ou caractere) que será processado não seja o sinal, mas sim o primeiro número a ser convertido.

    Sem este incremento, a função ficaria presa no caractere '-', resultando num loop infinito ou num processamento incorreto.

5 - Percorre a string:   while (str[i] != '\0')

    Esta condição verifica se o caractere atual (str[i]) não é o caractere nulo ('\0'), que indica o final da string.

    Enquanto houver caracteres na string (ou seja, até que str[i] seja igual a '\0'), o loop continuará a executar.

6 - Verificação e conversão de Caracteres : 

                  if (str[i] >= '0' && str[i] <= '9')
                      digit = str[i] - '0';
                  else if (str[i] >= 'A' && str[i] <= 'F')
                      digit = str[i] - 'A' + 10;
                  else if (str[i] >= 'a' && str[i] <= 'f')
                      digit = str[i] - 'a' + 10;
                  else
                      return (0);

    Esse loop é responsável por percorrer cada caractere da string str, convertendo cada um deles num valor numérico correspondente à base especificada (str_base).

    6.1 - Identificação do Caractere: As três verificações seguintes identificam o tipo de caractere atual e calculam seu valor numérico:
     
          6.1.1 - if (str[i] >= '0' && str[i] <= '9'):

                  Esta condição verifica se o caractere atual é um dígito (entre '0' e '9').
                  Se for, digit é calculado como str[i] - '0'. 
                  Isso converte o caractere no seu valor numérico correspondente. 
                  
                  Por exemplo, para o caractere '3', o cálculo seria 3 = '3' - '0'.

           6.1.2 - else if (str[i] >= 'A' && str[i] <= 'F'):

                   Esta condição verifica se o caractere é uma letra maiúscula entre 'A' e 'F'.
                   Se for, digit é calculado como str[i] - 'A' + 10. 
                   Isso atribui valores numéricos de 10 a 15 para 'A' a 'F'. 
                   
                   Por exemplo, para 'B', o cálculo seria B = 1 + 10 = 11.

            6.1.3 - else if (str[i] >= 'a' && str[i] <= 'f'):

                    Esta condição verifica se o caractere é uma letra minúscula entre 'a' e 'f'.
    
                     O cálculo para digit é semelhante ao anterior: digit = str[i] - 'a' + 10. Assim, 'a' será 10 e 'f' será 15.
         
        6.2 - else return (0): Se o caractere atual não se enquadrar em nenhuma das categorias acima (ou seja, não for um dígito ou uma letra válida), a função retorna 0. 
                               Isso indica que a string contém um caractere inválido para a base.

7 - Verificação do Valor do Dígito:  if (digit >= str_base) 
                                        return (0);

    Esta condição verifica se o valor numérico obtido (digit) é maior ou igual à base fornecida (str_base).
    Se for, a função retorna 0. 
    Isso indica que o caractere atual não é válido para a base especificada. 
    
    Por exemplo, em uma base 5, os únicos caracteres válidos são 0, 1, 2, 3 e 4. Portanto, um caractere '5' retornaria 0.

8 - Atualização do Resultado:

                    result = result * str_base + digit;
                    i++;
    
    Aqui, o valor de result é atualizado. 
    O resultado atual é multiplicado pela base (str_base), que "desloca" o valor atual para a esquerda (equivalente a adicionar um novo dígito à direita). 
    Em seguida, digit é adicionado ao result.
I
    sso constrói gradualmente o número final na base 10. 
    
    Por exemplo, se result era 12 e o próximo dígito (digamos que digit é 3), a operação result = result * str_base + digit atualiza result para 12 * 10 + 3 = 123.

    Após processar o caractere atual, i é incrementado para passar para o próximo caractere da string. Isso garante que o loop continue a processar todos os caracteres da string.

9 - Retorno do Resultado Final:  return (result * sign);

    Após processar todos os caracteres, a função retorna o result multiplicado pelo sign (para considerar o sinal negativo, se necessário).




Suponha que a função é chamada com a string "1A3" e a base 16 (hexadecimal). 
O objetivo é converter essa string de hexadecimal para um número inteiro decimal.

Chamada da Função:  int result = ft_atoi_base("1A3", 16);

Passo a Passo do Fluxo de Execução:

    Inicialização:

        i = 0 (para começar a percorrer a string).
        sign = 1 (número é inicialmente considerado positivo, já que não há um sinal negativo).
        result = 0 (onde o número convertido será armazenado).
        digit é uma variável temporária que será usada para armazenar o valor de cada caractere.

    Verificação da Base:

        if (str_base < 2 || str_base > 16):
            A base fornecida é 16, o que está dentro do intervalo permitido (2 a 16). A execução continua.

    Verificação do Sinal:

        if (str[i] == '-'):
            O primeiro caractere de "1A3" é '1', então o sinal não é um -. O código ignora este bloco e sign continua sendo 1.

    Primeira Iteração do Loop (Processando o caractere '1'):

        str[i] != '\0': O caractere atual é '1', que não é o caractere nulo '\0'. A execução entra no loop.
        digit = 0: Inicializamos digit para 0.

        if (str[i] >= '0' && str[i] <= '9'): '1' é um dígito numérico, então digit = '1' - '0' = 1.
        if (digit >= str_base): Como digit = 1 e a base é 16, essa condição é falsa (1 é menor que 16), então a execução continua.
        result = result * str_base + digit: O valor atual de result é 0. A expressão torna se: result = 0 * 16 + 1 = 1.

        i++: O índice i é incrementado para processar o próximo caractere.

    Segunda Iteração do Loop (Processando o caractere 'A'):

        str[i] != '\0': O próximo caractere é 'A'. A execução continua no loop.
        digit = 0: Inicializamos digit para 0.

        if (str[i] >= 'A' && str[i] <= 'F'): O caractere 'A' está no intervalo de 'A' a 'F'. O cálculo é: digit = 'A' - 'A' + 10 = 10.
        if (digit >= str_base): Como digit = 10 e a base é 16, essa condição é falsa, então a execução continua.
        result = result * str_base + digit: O valor atual de result é 1. A expressão torna se: result = 1 * 16 + 10 = 26.

        i++: O índice i é incrementado para processar o próximo caractere.

    Terceira Iteração do Loop (Processando o caractere '3'):

        str[i] != '\0': O próximo caractere é '3'. A execução continua no loop.
        digit = 0: Inicializamos digit para 0.

        if (str[i] >= '0' && str[i] <= '9'): O caractere '3' é um dígito numérico, então digit = '3' - '0' = 3.
        if (digit >= str_base): Como digit = 3 e a base é 16, essa condição é falsa, então a execução continua.
        result = result * str_base + digit: O valor atual de result é 26. A expressão torna se: result = 26 * 16 + 3 = 419.
        i++: O índice i é incrementado para processar o próximo caractere.

    Finalização:

        str[i] != '\0': Agora i aponta para o caractere nulo '\0', o que encerra o loop.
        return (result * sign): Como sign é 1 (o número não era negativo), a função retorna 419.

Resultado: No final do fluxo, a string "1A3" na base 16 foi convertida para o número decimal 419. Portanto, o valor retornado pela função é:  result = 419;