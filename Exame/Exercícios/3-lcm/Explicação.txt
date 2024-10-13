1 - Declaração da Função:  unsigned int lcm(unsigned int a, unsigned int b)

    A função recebe dois parâmetros: a e b, são ambos números inteiros não negativos para os quais queremos calcular o MMC (LCM).
    A escolha de unsigned int para essas variáveis é feita para garantir que os números sejam sempre não negativos. 
    Isso é importante porque o conceito de múltiplos (e, portanto, o MMC) não é definido para números negativos.
    Usar unsigned int também permite um maior intervalo positivo de valores comparado a um int padrão, já que não precisamos reservar espaço para representar valores negativos.
    
    O tipo de retorno da função também é unsigned int.

2 - Variável Local:  unsigned int n;

    n é uma variável auxiliar que armazena o valor atual que é testado para verificar se é um múltiplo comum de a e b.

    Inicialmente, n é definido como o maior dos dois números (a ou b), pois o MMC deve ser, no mínimo, igual ao maior desses números.

    Assim como a e b, n é definido como unsigned int para garantir que só trabalhemos com números não negativos.
    Além disso, ao incrementá-lo num laço (com ++n), estamos sempre a lidar com números que fazem sentido dentro do contexto do MMC e evitamos resultados inesperados ao lidar com números negativos.

3 - Verificação Inicial:

            if (a == 0 || b == 0)
                return (0);

    Verifica se pelo menos uma das variáveis a ou b é igual a zero.
       
       - Definição de Múltiplo Comum: O mínimo múltiplo comum de dois números é o menor número que é um múltiplo de ambos. Se um dos números é zero, não há múltiplos definidos, já que qualquer número multiplicado por zero resulta em zero, e não há um "mínimo" múltiplo comum que faça sentido.

    Se a condição do if for verdadeira (ou seja, se a ou b for 0), a função retorna 0 imediatamente.
    Retornar 0 neste contexto significa que o MMC de um número e zero não é definido e, portanto, é considerado zero.

4 - Inicialização de n:

            if (a > b)
                n = a; // a procura pelo MMC começará a partir do maior número (a)
            else
                n = b;

    - Encontrar o MMC: O objetivo desta parte do código é garantir que a procura pelo mínimo múltiplo comum (MMC) comece a partir do maior dos dois números.
      Temos, assim, de determinar o ponto de partida para procurarmos o MMC. 
      O mínimo múltiplo comum de dois números não pode ser menor que o maior deles. Portanto, é lógico começar a prcurar a partir do maior dos dois números.

    Exemplo: Se a = 4 e b = 6, o MMC deve ser maior ou igual a 6, já que 6 é um múltiplo de 6 e 12 é o próximo múltiplo comum. 
             Se começássemos a procurar a partir de 4, teríamos que iterar por números menores até chegar a 6, o que não é eficiente. 
    
    Assim: 

    Se o valor de a for maior do que o de b, significa que n começará a partir do maior dos dois números, neste caso o a.

    Caso contrário, se a condição a > b não for verdadeira (ou seja, a é menor ou igual a b) n é definido como b, ou seja, n será o maior número entre a e b.

    A variável n é inicializada com o maior valor entre a e b. 
    Isso é feito porque o MMC de dois números deve ser, no mínimo, igual ao maior deles.

5 - Laço Infinito:  while (1)

    Um laço while infinito é iniciado. O código dentro desse laço será executado repetidamente até que uma condição de saída seja encontrada.

    A expressão 1 é sempre verdadeira, o que significa que este é um loop infinito. 
    O loop continuará a executar até que uma condição de retorno ocorra.

    Essa abordagem é comum quando não se sabe o número exato de iterações necessárias para alcançar um resultado, mas sabe se que o loop deve continuar até que uma condição seja satisfeita.

6 - Verificação de Múltiplos:

            if (n % a == 0 && n % b == 0)
                return (n);

    Dentro do loop, vamos verificar se n é um múltiplo tanto de a quanto de b.
    O operador % (módulo) retorna o resto da divisão de n por a e b.
    A condição verifica se n é um múltiplo de ambos a e b. 

    Se n % a == 0, isso significa que n é divisível por a (ou seja, não tem resto na divisão).
    Da mesma forma, se n % b == 0, significa que n é divisível por b.

    Se a condição for verdadeira (ou seja, n é um múltiplo de a e b), a função retorna n como o mínimo múltiplo comum (MMC) de a e b.
    Ou seja, se n for divisível por ambos (ou seja, o resto é 0), então n é o MMC, e a função retorna n.
    
    O uso do return encerra a função e retorna o valor de n para a função.

7 - Incremento de n: ++n;

    Se n não for um múltiplo de a e b, esta linha incrementa n em 1.
    Isso move n para o próximo número inteiro, permitindo que a condição de múltiplo seja verificada na próxima iteração do loop.




Exemplo: lcm(4, 6)

    Chamada da Função: A função lcm é chamada com a = 4 e b = 6.

    Verificação Inicial: A função verifica se a ou b são zero. 
                         Neste caso, ambos são diferentes de zero, então a função continua.

Definição do Valor Inicial de n: Como b (6) é maior que a (4), n é inicializado como 6.

Início do Loop Infinito:  while (1)

    Um loop infinito começa. A função tentará encontrar o mínimo múltiplo comum.

Primeira Iteração:  n = 6  -  if (n % a == 0 && n % b == 0)

    Verifica se 6 % 4 == 0 (não é) e 6 % 6 == 0 (é).
    Como não é um múltiplo de 4, a condição não é satisfeita.

++n:  n é incrementado para 7.

Segunda Iteração:  n = 7;

    Verifica 7 % 4 (não é 0) e 7 % 6 (não é 0).
    Não é um múltiplo comum.
    n é incrementado para 8.

Terceira Iteração:  n = 8;

    Verifica 8 % 4 == 0 (é 0) e 8 % 6 (não é 0).
    Não é um múltiplo comum.
    n é incrementado para 9.

Quarta Iteração:  n = 9;

    Verifica 9 % 4 (não é 0) e 9 % 6 (não é 0).
    Não é um múltiplo comum.
    n é incrementado para 10.

Quinta Iteração: n = 10;

    Verifica 10 % 4 (não é 0) e 10 % 6 (não é 0).
    Não é um múltiplo comum.
    n é incrementado para 11.

Sexta Iteração:  n = 11;

    Verifica 11 % 4 (não é 0) e 11 % 6 (não é 0).
    Não é um múltiplo comum.
    n é incrementado para 12.

Sétima Iteração: n = 12;
    
    Verifica 12 % 4 == 0 (é 0) e 12 % 6 == 0 (é 0).
    Ambas as condições são satisfeitas.

return (n): O valor 12 é retornado como o mínimo múltiplo comum de 4 e 6.
