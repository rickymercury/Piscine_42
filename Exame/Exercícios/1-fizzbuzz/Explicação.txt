1 - Definição da Função ft_put_nbr:    ft_put_nbr(int n)

    Esta função recebe um número inteiro n e o imprime como uma sequência de caracteres:

        Se n for maior que 9 (if (n > 9)), a função chama a si mesma recursivamente para imprimir os dígitos mais significativos (à esquerda) - ft_put_nbr(n / 10).
        
        O último dígito é obtido utilizando o módulo (n % 10) para ficarmos com o digito menos significativo (à direita) e convertermos ele para o caractere correspondente (... + '0') e, por fim, será impresso com write (write(1, &c, 1)).

2 - Função Principal main:  main(void)

    Inicializa uma variável i com 1.
    
    2.1 - Inicia um loop que continua enquanto i é menor ou igual a 100 while(i <= 100).

    2.2 - Verificações e Impressões no Loop:

    Para cada valor de i:

        - Múltiplo de 3 e 5 - if ((i % 3 == 0) && (i % 5 == 0)): 
          
          Se i for um múltiplo de 3 e 5, imprime "fizzbuzz" (write(1, "fizzbuzz", 8)).
        
        - Múltiplo de 5 - else if (i % 5 == 0):
         
          Se i for um múltiplo de 5, imprime "buzz" (write(1, "buzz", 4)).

        - Múltiplo de 3 - else if (i % 3 == 0):
         
          Se i for um múltiplo de 3, imprime "fizz" (write(1, "fizz", 4)).

        Caso contrário - else :
        
        Se i não for um múltiplo de 3 ou 5, a função ft_put_nbr é chamada para imprimir o número i (ft_put_nbr(i)). 
        Ou seja, se i não satisfaz as condições anteriores que imprimem "fizz", "buzz" ou "fizzbuzz", é impresso o próprio número (i).

        O que vai acontecer aqui é o seguinte - chamada da função ft_putnbr(i) para imprimir o número atual i:

        - Recursão para Números Maiores que 9 - if (n > 9):
        
          Se i for maior que 9, a função chama a si mesma recursivamente para dividir o número em dígitos individuais. 
          Por exemplo, se i for 42, a função fará duas chamadas: uma para 4 e outra para 2.

        - Impressão do Último Dígito: 
        
          Após a recursão, o último dígito é convertido em caractere (por meio de c = n % 10 + '0') e impresso usando a função write. 
          Isso garante que os dígitos sejam impressos na ordem correta.

          Exemplo de Chamada: Se i for 7, a função imprimirá diretamente 7. Se i for 23, a função imprimirá 2 (da primeira chamada) e depois 3 (da segunda chamada).

        - Incremento de i:

          Vai preparar para a próxima iteração do loop.

          Esse incremento é crucial para que o loop eventualmente termine, pois evita que i fique preso num valor fixo.
    
        - Nova Linha:

          Isso é importante para que cada saída (seja um número ou uma string como "fizz", "buzz" ou "fizzbuzz") seja exibida numa linha separada.
         
          O uso do write para imprimir uma nova linha é consistente com o estilo de saída do resto do programa.
  