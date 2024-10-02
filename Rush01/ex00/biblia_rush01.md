
Pistas de Visibilidade : 

> ./rush-01 "col1up col2up col3up col4up col1down col2down col3down col4down row1left row2left row3left row4left row1right row2right row3right row4right"

No contexto do puzzle Skyscraper, os termos como col1up, col1down, row1left, e row1right referem-se aos valores que indicam quantos prédios são visíveis a partir de cada lado do tabuleiro, com base nas regras do jogo.

    Colunas:

    - col1up corresponde ao valor para o ponto de vista da parte superior da coluna da esquerda.
      Corresponde, assim, ao número visível a partir da parte superior da coluna 1.
      
      Valores: Indica quantos edifícios (ou números) são visíveis ao olhar de cima para baixo na coluna 1.

        col1up: Pista de visibilidade da coluna 1 -> 4
        col2up: Pista de visibilidade da coluna 2 -> 3
        col3up: Pista de visibilidade da coluna 3 -> 2
        col4up: Pista de visibilidade da coluna 4 -> 1

    - coldown corresponde ao valor para o ponto de vista da parte inferior da coluna da esquerda.
      Corresponde, assim, ao número visível a partir da parte inferior da coluna 1.

      Valores: Indica quantos edifícios são visíveis ao olhar de baixo para cima na coluna 1.

        col1down: Pista de visibilidade da coluna 1 -> 1
        col2down: Pista de visibilidade da coluna 2 -> 2
        col3down: Pista de visibilidade da coluna 3 -> 2
        col4down: Pista de visibilidade da coluna 4 -> 2

    Linhas:

    - row1left corresponde ao número visível a partir da esquerda da linha 1.

      Valores: Indica quantos edifícios são visíveis ao olhar da esquerda para a direita na linha 1.

        row1left: Pista de visibilidade da linha 1 -> 4   
        row2left: Pista de visibilidade da linha 2 -> 3
        row3left: Pista de visibilidade da linha 3 -> 2
        row4left: Pista de visibilidade da linha 4 -> 1

    - row1right corresponde ao número visível a partir da direita da linha 1.

      Valores: Indica quantos edifícios são visíveis ao olhar da direita para a esquerda na linha 1.

        row1right: Pista de visibilidade da linha 1 -> 1
        row2right: Pista de visibilidade da linha 2 -> 2
        row3right: Pista de visibilidade da linha 3 -> 2
        row4right: Pista de visibilidade da linha 4 -> 2


> Valores Permitidos: Para cada um desses pontos de vista (ou "clues"), os valores devem estar entre 1 e 4, 
correspondendo ao número máximo de edifícios que podem ser vistos em um grid de 4x4.


>./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e
1 2 3 4$
2 3 4 1$
3 4 1 2$
4 1 2 3$


                   |  col1up (4)  |    col2up (3)  |   col3up (2)  |    col4up (1)   |
    -----------------------------------------------------------------------------------------------         
    row1left  (4)  |      1       |        2       |       3       |        4        |  row1right (1)
    -----------------------------------------------------------------------------------------------
    row2left  (3)  |      2       |        3       |       4       |        1        |  row2right (2)
    ------------------------------------------------------------------------------------------------
    row3left  (2)  |      3       |        4       |       1       |        2        |  row3right (2)
    ------------------------------------------------------------------------------------------------
    row4left  (1)  |      4       |        1       |       2       |        3        |  row4right (2)
    ------------------------------------------------------------------------------------------------
                   | col1down (1) |  col2down (2)  |  col3down (2) |  col4down (2)  |







                                        Como Funciona a Visibilidade?

    Cada pista indica quantos edifícios (ou números) podemos ver a partir de uma determinada direção.
    
    A regra da visibilidade no puzzle "Skyscraper" (arranha-céus) refere-se ao número de prédios que são visíveis de uma 
    certa perspectiva (de cima, de baixo, da esquerda ou da direita) numa linha ou coluna. 
    
    Cada prédio tem uma altura única, e a ideia é determinar quantos prédios são visíveis a partir de uma borda do tabuleiro, 
    levando em conta que prédios mais altos podem bloquear a visão dos prédios menores.

    Regra de Visibilidade:

    Visão de uma direção: Quando olhamos para uma linha ou coluna de uma direção (como da esquerda para a direita, de cima para baixo, etc.),
    conseguimos ver um certo número de prédios.
   
    Altura do prédio: O valor de cada posição no tabuleiro representa a altura de um prédio.
    
    Bloqueio de visão: Um prédio mais alto bloqueia a visão de qualquer prédio mais baixo atrás dele (em relação à direção da sua observação).

Exemplos:

Considere uma linha ou coluna com prédios, onde os números representam as alturas dos prédios:

    Se você olhar para a linha [1, 3, 4, 2] da esquerda para a direita, quantos prédios são visíveis?

        O prédio 1 é visível.
        O prédio 3 é mais alto que o prédio 1, então ele também é visível.
        O prédio 4 é mais alto que o prédio 3, então ele também é visível.
        O prédio 2 é mais baixo que o prédio 4, então ele não é visível porque está bloqueado pelo prédio 4.

    Resultado: 3 prédios visíveis da esquerda (1, 3, 4).

    Agora, olhando para a linha da direita para a esquerda:

        O prédio 2 é visível.
        O prédio 4 é mais alto que o prédio 2, então ele também é visível.
        O prédio 3 é mais baixo que o prédio 4, então ele não é visível.
        O prédio 1 é mais baixo que o prédio 4 e o 3, então ele não é visível.

    Resultado: 2 prédios visíveis da direita (2, 4).



                   |  col1up (4)  |    col2up (3)  |   col3up (2)  |    col4up (1)   |
    -----------------------------------------------------------------------------------------------         
    row1left  (4)  |      1       |        2       |       3       |        4        |  row1right (1)
    -----------------------------------------------------------------------------------------------
    row2left  (3)  |      2       |        3       |       4       |        1        |  row2right (2)
    ------------------------------------------------------------------------------------------------
    row3left  (2)  |      3       |        4       |       1       |        2        |  row3right (2)
    ------------------------------------------------------------------------------------------------
    row4left  (1)  |      4       |        1       |       2       |        3        |  row4right (2)
    ------------------------------------------------------------------------------------------------
                   | col1down (1) |  col2down (2)  |  col3down (2) |  col4down (2)  |

    
Sabendo que a posição na matriz (grid) é dada por grid[row][col] e :

  - No que diz respeito aos edifícios (ou números) que são visíveis :
    
  --------------------------------------------------------------------------------------------------------------------------------
    - Para a primeira coluna (col = 0) de cima para baixo, temos : grid[0][0] = 1  
                                                                   grid[1][0] = 2
                                                                   grid[2][0] = 3
                                                                   grid[3][0] = 4

    O que signigica que a primeira coluna conteria os prédios de alturas 1, 2, 3 e 4, dispostos de cima para baixo.

    Assim: O prédio 1 é visivel.
           O prédio 2 é mais alto do que o prédio 1, então ele tb é vísivel.
           O prédio 3 é mais alto do que o anterior, então ele tb é visivel.
           O prédio 4 é mais alto do que o anteiror, então ele tb é visivel.
    
    Resultado: 4 prédios visiveis de cima para baixo.

    - Para a primeira coluna (col = 0) de baixo para cima, temos : grid[3][0] = 4
                                                                   grid[2][0] = 3
                                                                   grid[1][0] = 2
                                                                   grid[0][0] = 1
                                                                
    O que signigica que a primeira coluna conteria os prédios de alturas 4, 3, 2, 1 dispostos de baixo para cima.

    Assim: O prédio 4 é visivel.
           Os outros prédios são todos inferiores ao prédio de altura 4.

    Resultado: 1 prédio visivel de baixo para cima.
----------------------------------------------------------------------------------------------------------------------------------

    - Para a segunda coluna (col = 1) de cima para baixo, temos : grid[0][1] = 2
                                                                  grid[1][1] = 3
                                                                  grid[2][1] = 4
                                                                  grid[3][1] = 1

    O que signigica que a segunda coluna conteria os prédios de alturas 2, 3, 4, 1 dispostos de cima para baixo.

    Assim: O prédio 2 é visivel.
           O prédio 3 é mais alto do que o prédio 2, então ele é visivel.
           O prédio 4 é mais alto do que o anterior, então ele tb é visivel.
           O prédio 1 é mais baixo do que o anteiror, então ele tb não é visivel.

    Resultado: 3 prédios visiveis de cima para baixo.

    - Para a segunda coluna (col = 1) de baixo para cima, temos : grid[3][1] = 1
                                                                  grid[2][1] = 4
                                                                  grid[1][1] = 3
                                                                  grid[0][1] = 2

    O que signigica que a segunda coluna conteria os prédios de alturas 1, 4, 3, 2 dispostos de baixo para cima.

    Assim: O prédio 1 é visivel.
           O prédio 4 é mais alto do que o prédio 1, então ele é visivel.
           O prédio 3 é mais baixo do que o anterior, então ele não é visivel.
           O prédio 2 é mais baixo do que o anteiror, então ele tb não é visivel.

    Resultado: 2 prédios visiveos de baixo para cima.

--------------------------------------------------------------------------------------------------------------------------------

     - Para a terceira coluna (col = 2) de cima para baixo, temos : grid[0][2] = 3
                                                                    grid[1][2] = 4
                                                                    grid[2][2] = 1
                                                                    grid[3][2] = 2

    O que signigica que a terceira coluna conteria os prédios de alturas 3, 4, 1, 2 dispostos de cima para baixo.

    Assim: O prédio 3 é visivel.
           O prédio 4 é mais alto do que o prédio 3, então ele é visivel.
           O prédio 1 é mais baixo do que o anterior, então ele não é visivel.
           O prédio 2 é mais baixo do que o prédio 4, que é o maior prédio observado até agora, então ele tb não é visivel.

    Resultado: 2 prédios visiveis de cima para baixo.


    - Para a terceira coluna (col = 2) de baixo para cima, temos :  grid[3][2] = 2
                                                                    grid[2][2] = 1
                                                                    grid[1][2] = 4
                                                                    grid[0][2] = 3

    O que signigica que a terceira coluna conteria os prédios de alturas 2, 1, 4, 3 dispostos de baixo para cima.

    Assim: O prédio 2 é visivel.
           O prédio 1 é mais baixo do que o prédio 2, então ele não é visivel.
           O prédio 4 é mais alto do que o prédio 2, então ele é visivel.
           O prédio 3 é mais baixo do que o prédio 4, que é o maior prédio observado até agora, então ele tb é visivel.

    Resultado: 2 prédios visiveis de cima para baixo.

-----------------------------------------------------------------------------------------------------------------------------
    - Para a quarta coluna (col = 3) de cima para baixo, temos :  grid[0][3] = 4
                                                                  grid[1][3] = 1
                                                                  grid[2][3] = 2
                                                                  grid[3][3] = 3

    O que signigica que a quarta coluna conteria os prédios de alturas 4, 1, 2, 3 dispostos de cima para baixo.

    Assim: O prédio 4 é visivel.
           Os restantes prédios não são visiveis, pois têm altura inferior a 4.

    Resultado: 1 prédio visive de cima para baixo
 
    
    - Para a quarta coluna (col = 3) de cima para baixo, temos :  grid[3][3] = 3
                                                                  grid[2][3] = 2
                                                                  grid[1][3] = 1
                                                                  grid[0][3] = 4

    O que signigica que a quarta coluna conteria os prédios de alturas 3, 2, 1, 4 dispostos de baixo para cima.

    Assim: O prédio 3 é visivel.
           O prédio 2 é mais baixo do que o prédio 3, então ele não é visivel.
           O prédio 1 é mais baixo do que o prédio 2, então ele não é visivel.
           O prédio 4 é mais alto do que o prédio 3, que é o maior prédio observado até agora, então ele é visivel.

    Resultado: 2 prédios visiveis de cima para baixo.

--------------------------------------------------------------------------------------------------------------------------

- Para a primeira linha (row = 0) da esquerda para a direita, temos : grid[0][0] = 1
                                                                      grid[0][1] = 2
                                                                      grid[0][2] = 3
                                                                      grid[0][3] = 4

O que signigica que a primeira linha conteria os prédios de alturas 1, 2, 3 e 4, dispostos da esquerda para a direita.

    Assim: O prédio 1 é visivel.
           O prédio 2 é mais alto do que o prédio 1, então ele tb é vísivel.
           O prédio 3 é mais alto do que o anterior, então ele tb é visivel.
           O prédio 4 é mais alto do que o anteiror, então ele tb é visivel.
    
    Resultado: 4 prédios visiveis da esquerda para a direita.

- Para a primeira linha (row = 0) da direita para a esquerda, temos: grid[0][3] = 4
                                                                     grid[0][2] = 3
                                                                     grid[0][1] = 2
                                                                     grid[0][0] = 1

O que signigica que a primeira linha conteria os prédios de alturas 4, 3, 2, 1 dispostos da direita para a esquerda.

    Assim: O prédio 4 é visivel.
           Os outros prédios são todos inferiores ao prédio de altura 4.

    Resultado: 1 prédio visivel da direita para a esquerda.

--------------------------------------------------------------------------------------------------------------------------

- Para a segunda linha (row = 1) da esquerda para a direita, temos :  grid[1][0] = 2
                                                                      grid[1][1] = 3
                                                                      grid[1][2] = 4
                                                                      grid[1][3] = 1

O que signigica que a segunda linha conteria os prédios de alturas 2, 3, 4, 1 dispostos da esquerda para a direita.

    Assim: O prédio 2 é visivel.
           O prédio 3 é mais alto do que o prédio 2, então ele é visivel.
           O prédio 4 é mais alto do que o anterior, então ele tb é visivel.
           O prédio 1 é mais baixo do que o anteiror, então ele tb não é visivel.

    Resultado: 3 prédios visiveis da esquerda para a direita.


- Para a segunda inha (row = 1) da direita para a esquerda temos : grid[1][3] = 1
                                                                   grid[1][2] = 4
                                                                   grid[1][1] = 3
                                                                   grid[1][0] = 2

O que signigica que a segunda linha conteria os prédios de alturas 1, 4, 3, 2 dispostos da esquerda para a direita.

    Assim: O prédio 1 é visivel.
           O prédio 4 é mais alto do que o prédio 1, então ele é visivel.
           O prédio 3 é mais baixo do que o anterior, então ele não é visivel.
           O prédio 2 é mais baixo do que o anteiror, então ele tb não é visivel.

    Resultado: 2 prédios visiveis da direita para a esquerda.

---------------------------------------------------------------------------------------------------------------------------

- Para a terceira linha (row = 2) da esquerda para a direita, temos : grid[2][0] = 3
                                                                      grid[2][1] = 4
                                                                      grid[2][2] = 1
                                                                      grid[2][3] = 2

    O que signigica que a terceira linha conteria os prédios de alturas 3, 4, 1, 2 dispostos da esquerda para a direita.

    Assim: O prédio 3 é visivel.
           O prédio 4 é mais alto do que o prédio 3, então ele é visivel.
           O prédio 1 é mais baixo do que o anterior, então ele não é visivel.
           O prédio 2 é mais baixo do que o prédio 4, que é o maior prédio observado até agora, então ele tb não é visivel.

    Resultado: 2 prédios visiveis da esquerda para a direita.


- Para a terceira linha (row = 2) da direita para a esquerda, temos :  grid[2][3] = 2
                                                                       grid[2][2] = 1
                                                                       grid[2][1] = 4
                                                                       grid[2][0] = 3

O que signigica que a terceira linha conteria os prédios de alturas 2, 1, 4, 3 dispostos da direita para a esquerda.

    Assim: O prédio 2 é visivel.
           O prédio 1 é mais baixo do que o prédio 2, então ele não é visivel.
           O prédio 4 é mais alto do que o prédio 2, então ele é visivel.
           O prédio 3 é mais baixo do que o prédio 4, que é o maior prédio observado até agora, então ele tb é visivel.

    Resultado: 2 prédios visiveis da direita para a esquerda.

--------------------------------------------------------------------------------------------------------------------------
    - Para a quarta linha (row = 3) da esquerda para a direita, temos :  grid[3][0] = 4
                                                                         grid[3][1] = 1
                                                                         grid[3][2] = 2
                                                                         grid[3][3] = 3

    O que signigica que a quarta linha conteria os prédios de alturas 4, 1, 2, 3 dispostos de cima para baixo.

    Assim: O prédio 4 é visivel.
           Os restantes prédios não são visiveis, pois têm altura inferior a 4.

    Resultado: 1 prédio visivel da esquerda para a direita.
 
    
    - Para a quarta linha (row = 3) da esquerda para a direita, temos :  grid[3][3] = 3
                                                                         grid[3][2] = 2
                                                                         grid[3][1] = 1
                                                                         grid[3][0] = 4

    O que signigica que a quarta linha conteria os prédios de alturas 3, 2, 1, 4 dispostos da direita para a esquerda.

    Assim: O prédio 3 é visivel.
           O prédio 2 é mais baixo do que o prédio 3, então ele não é visivel.
           O prédio 1 é mais baixo do que o prédio 2, então ele não é visivel.
           O prédio 4 é mais alto do que o prédio 3, que é o maior prédio observado até agora, então ele é visivel.

    Resultado: 2 prédios visiveis de cima para baixo.

---------------------------------------------------------------------------------------------------------------------------
                            
                            
                            Verificação das pistas - Número de prédios visíveis


---------------------------------------------------------------------------------------------------------------------------
                       COLUNA 1         COLUNA 2        COLUNA 3         COLUNA 4
                   |  col1up (4)  |    col2up (3)  |   col3up (2)  |    col4up (1)   |
    ----------------------------------------------------------------------------------------------- -        
L1  row1left  (4)  |      1       |        2       |       3       |        4        |  row1right (1)
    -------------------------------------------------------------------------------------------------
L2  row2left  (3)  |      2       |        3       |       4       |        1        |  row2right (2)
    -------------------------------------------------------------------------------------------------
L3  row3left  (2)  |      3       |        4       |       1       |        2        |  row3right (2)
    -------------------------------------------------------------------------------------------------
L4  row4left  (1)  |      4       |        1       |       2       |        3        |  row4right (2)
    -------------------------------------------------------------------------------------------------
                   | col1down (1) |  col2down (2)  |  col3down (2) |  col4down (2)  |



1. Visibilidade das Colunas (check_columns_view_top)

                          if ((row == n - 1 && clue[col] == count_view) ||
                              (row != n - 1 && clue[col] >= count_view))
                              return (1);
                          return (0);

Para cada coluna, precisamos verificar se o número de prédios visíveis de cima para baixo corresponde ao valor das pistas:

    Coluna 1 (clue[col] = 4):  Visibilidade: 1, 2, 3, 4 → Total: 4 prédios visíveis.
                               Condição: (row == n - 1 && clue[col] == count_view) → Sim, pois 4 == 4.

    Coluna 2 (clue[col] = 3):  Visibilidade: 2, 3, 4, 1 → Total: 3 prédios visíveis.
                               Condição: (row == n - 1 && clue[col] == count_view) → Sim, pois 3 == 3.

    Coluna 3 (clue[col] = 2):  Visibilidade: 3, 4 → Total: 2 prédios visíveis.
                               Condição: (row == n - 1 && clue[col] == count_view) → Sim, pois 2 == 2.

    Coluna 4 (clue[col] = 1):  Visibilidade: 4 → Total: 1 prédio visível.
                               Condição: (row == n - 1 && clue[col] == count_view) → Sim, pois 1 == 1.


2. Visibilidade das Colunas (check_columns_view_down)

                                 if (clue[col + n] == count_view)
                                    return (1);
                                 return (0);

Para cada coluna, precisamos verificar se o número de prédios visíveis de baixo para cima corresponde ao valor das pistas:

    Coluna 1 (clue[col + n] = 1):  Visibilidade: 4, 3, 2, 1 → Total: 1 prédios visíveis.
                                   Condição: (clue[col + n] == count_view) → Sim, pois 1 == 1.

    Coluna 2 (clue[col + n] = 2):  Visibilidade: 1, 4  → Total: 2 prédios visíveis.
                                   Condição: (clue[col] == count_view) → Sim, pois 2 == 2.

    Coluna 3 (clue[col + n] = 2):  Visibilidade: 2, 4 → Total: 2 prédios visíveis.
                                   Condição: (clue[col] == count_view) → Sim, pois 2 == 2.

    Coluna 4 (clue[col + n] = 2):  Visibilidade: 3, 4 → Total: 2 prédios visível.
                                   Condição: (clue[col] == count_view) → Sim, pois 2 == 2.


3. Visibilidade das linhas (check_rows_left_to_right)

                                 if ((col == n - 1 && clue[row + (n * 2)] == count_view) ||
                                     (col != n - 1 && clue[row + (n * 2)] >= count_view))
                                     return (1);
                                 return (0);

Para cada linha, precisamos verificar se o número de prédios visíveis da esquerda para a direita corresponde ao valor das pistas:

    Linha 1 (clue[row + (n * 2)] = 4):  Visibilidade: 1, 2, 3, 4 → Total: 4 prédios visíveis.
                                        Condição: (clue[row + (n * 2)] == count_view) → Sim, pois 4 == 4.

    Linha 2 (clue[row + (n * 2)] = 3):  Visibilidade: 2, 3, 4, 1 → Total: 3 prédios visíveis.
                                        Condição: (clue[row + (n * 2)] == count_view) → Sim, pois 3 == 3.

    LInha 3 (clue[row + (n * 2)] = 2):  Visibilidade: 3, 4 → Total: 2 prédios visíveis.
                                        Condição: (clue[row + (n * 2)] == count_view) → Sim, pois 2 == 2.

    LInha 4 (clue[row + (n * 2)] = 1):  Visibilidade: 4 → Total: 1 prédio visível.
                                        Condição: (clue[row + (n * 2)] == count_view) → Sim, pois 1 == 1.

4. Visibilidade das linhas (check_rows_right_to_left)

                                if (clue[row + (n * 3)] == count_view)
                                    return (1);
                                return (0);

    Para cada linha, precisamos verificar se o número de prédios visíveis da direita para a esquerda corresponde ao valor das pistas:

    Linha 1 (clue[row + (n * 3)] = 1):  Visibilidade: 4, 3, 2, 1 → Total: 1 prédios visíveis.
                                        Condição: (clue[row + (n * 3)] == count_view) → Sim, pois 1 == 1.

    Coluna 2 (clue[row + (n * 3)] = 2):  Visibilidade: 1, 4  → Total: 2 prédios visíveis.
                                         Condição: (clue[row + (n * 3)] == count_view) → Sim, pois 2 == 2.

    Coluna 3 (clue[row + (n * 3)] = 2):  Visibilidade: 2, 4 → Total: 2 prédios visíveis.
                                         Condição: (clue[row + (n * 3)] == count_view) → Sim, pois 2 == 2.

    Coluna 4 (clue[row + (n * 3)] = 2):  Visibilidade: 3, 4 → Total: 2 prédios visível.
                                         Condição: (clue[row + (n * 3)] == count_view) → Sim, pois 2 == 2.    
                                
---------------------------------------------------------------------------------------------------------------------------------------------

  
                          Fluxo do Programa

                              Início:
                               
    1- Função main:

    - Verifica se o número de argumentos (argc) está correto.
    - Conta os dígitos válidos na string de entrada.
    - Converte a string de entrada em um array de inteiros.
    - Chama a função rush01 para iniciar a resolução do puzzle.

        A função main é chamada quando o programa é executado.
        Ela valida a entrada e chama ft_count_valid_digits para garantir que a entrada é válida.

    2- Função ft_count_valid_digits:

    - Conta quantos dígitos válidos estão na string.
    - Verifica se o número total de dígitos é múltiplo de 4.
    
    Validação da Entrada:

        Se a entrada não é válida, o programa exibe uma mensagem de erro e termina.

    
                Conversão de String para Array:

    3 - Função ft_convert_str_to_tab:

    - Verifica se a string contém apenas dígitos e espaços.
    - Aloca memória para o array que representa o tabuleiro.
    - Converte a string em inteiros e preenche o array.
    - Chama ft_check_tab para validar os valores no array.

        ft_convert_str_to_tab converte a string de entrada em um array de inteiros. Se falhar,
        exibe uma mensagem de erro e termina.

                    Inicialização do Tabuleiro:

    4 - Função rush01:

    - Aloca memória para o tabuleiro (grid).
    - Inicializa todos os valores do tabuleiro como zero.
    - Chama ft_start para iniciar a busca pela solução.

        rush01 aloca a memória para o tabuleiro e chama ft_start para iniciar o processo de solução.

    5 - Função ft_start:

    - Inicializa a posição do tabuleiro.
    - Chama ft_find_solution para tentar preencher o tabuleiro.

                     Solução do puzzle:

    6 - Função ft_find_solution:

    - Verifica se todas as linhas do tabuleiro foram preenchidas.
    - Tenta colocar valores de 1 a n em cada posição do tabuleiro.
    - Para cada valor tentado, chama ft_is_valid para verificar se  o tabuleiro é válido.

        ft_find_solution tenta preencher o tabuleiro. Se uma solução válida for encontrada, 
        ft_print_solution é chamada.

                  Validação da Configuração:

    7 - Função ft_is_valid:

    - Chama as funções de verificação para garantir que as regras do quebra-cabeça sejam seguidas.

        Durante o preenchimento do tabuleiro, ft_is_valid chama as funções de verificação para garantir 
        que as visões estão corretas.
    
    8 - Funções de Verificação:

    - check_columns_view_top, check_columns_view_down, check_rows_left_to_right, e check_rows_right_to_left 
    realizam as verificações de visibilidade necessárias.

                       Finalização:

    9 - Função ft_print_solution:

    - Se uma solução válida for encontrada, imprime o tabuleiro.

    10 - Função ft_free:

    - Liberta a memória alocada para o tabuleiro e as dicas.

    11 - Função ft_error:

    - Exibe uma mensagem de erro se a entrada for inválida ou se não houver solução.

        Se uma solução não puder ser encontrada, uma mensagem de erro é exibida.



+--------------------------------+
|               main             |
|--------------------------------|
|  - Verifica argc               |
|  - Chama ft_count_valid_digits |
|  - Chama ft_convert_str_to_tab |
|  - Chama rush01                |
|--------------------------------|
               |
               v
+--------------------------------+
|     ft_count_valid_digits      |
|--------------------------------|
|  - Conta dígitos válidos       |
|  - Verifica se o total de      |
|    dígitos é múltiplo de 4     |
|--------------------------------|
               |
               v
+-----------------------------------+
|       ft_convert_str_to_tab       |
|-----------------------------------|
|  - Chama ft_check_digit_space     |
|  - Aloca memória para o tabuleiro |
|  - Converte string para tabuleiro |
|  - Chama ft_check_tab             |
|-----------------------------------|
               |
               v
+-----------------------------------------+
|            rush01                       |
|-----------------------------------------|
|  - Aloca memória para o grid (tabuleiro)|
|  - Inicializa grid com zeros            |
|  - Chama ft_start                       |
|-----------------------------------------|
               |
               v
+-----------------------------+
|           ft_start          |
|-----------------------------|
|  - Inicializa posição (0, 0)|
|  - Chama ft_find_solution   |
|-----------------------------|
               |
               v
+---------------------------------+
|        ft_find_solution         |
|---------------------------------|
|  - Verifica se todas as linhas  |
|    foram preenchidas            |
|  - Tenta valores de 1 a n para  |
|    a posição atual              |
|  - Chama ft_is_valid para cada  |
|    valor testado                |
|  - Chama ft_define_next_position|
|---------------------------------|
               |
               v
+---------------------------------+
|        ft_is_valid              |
|---------------------------------|
|  - Chama:                       |
|    - check_columns_view_top     |
|    - check_columns_view_down    |
|    - check_rows_left_to_right   |
|    - check_rows_right_to_left   |
|---------------------------------|
               |
               v
+-----------------------------+
|  check_columns_view_top     |
|-----------------------------|
|  - Verifica visibilidade de |
|    colunas (topo)           |
|-----------------------------|
               |
               v
+-----------------------------+
| check_columns_view_down     |
|-----------------------------|
|  - Verifica visibilidade de |
|    colunas (baixo)          |
|-----------------------------|
               |
               v
+-----------------------------------+
| check_rows_left_to_right          |
|-----------------------------------|
|  - Verifica visibilidade de       |
|    linhas (esquerda para direita) |
|-----------------------------------|
               |
               v
+-----------------------------------+
| check_rows_right_to_left          |
|-----------------------------------|
|  - Verifica visibilidade de       |
|    linhas (direita para esquerda) |
|-----------------------------------|
               |
               v
+-----------------------+
|   ft_print_solution   |
|-----------------------|
|  - Imprime a solução  |
|    encontrada         |
|-----------------------|
               |
               v
+-----------------------+
|      ft_free          |
|-----------------------|
|  - Liberta memória     |
|    do grid e clues    |
|-----------------------|
               |
               v
+-----------------------+
|      ft_error         |
|-----------------------|
|  - Exibe mensagem de  | 
|    erro caso haja     |
|    entrada inválida   |
+-----------------------+