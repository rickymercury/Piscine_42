1 - Declaração das variáveis:

int i;
int len;
char swap;

i: Será usado como índice para percorrer a string do início até a metade.
   é inicializado com 0, pois vamos começar a percorrer a string desde o ínicio.
len: Vai armazenar o comprimento da string.
     começa com 0 e será usado para calcular o comprimento da string.
swap: Variável temporária usada para trocar os caracteres da string durante a inversão.
      é inicializado com 0, embora, no decorrer do processo de troca, vai sendo atualizado.

2 - Calcular o comprimento da string :

                              while (str[len])
	                            len++;

    Este loop percorre a string str até encontrar o nulo (\0), que indica o final da string.
    len é incrementado a cada iteração, então no final desse loop, len vai conter o comprimento total da string.

3 - Inversão da string

                       while (i < len / 2)
                       {
                        	swap = str[i];
	                        str[i] = str[len - 1 - i];
	                        str[len - 1 - i] = swap;
	                        i++;
                       }

    Este segundo loop é responsável pela inversão da string. Ele percorre a string desde o início (índice 0) até o meio dela (len / 2).

    swap = str[i]: Armazena o caractere na posição i da string na variável swap. 
                   Isso é feito para poder realizar a troca dos caracteres.

    str[i] = str[len - 1 - i]: O caractere da posição i é substituído pelo caractere correspondente no final da string, que está na posição len - 1 - i.

    str[len - 1 - i] = swap: O caractere original da posição i, que estava armazenado em swap, é colocado na posição len - 1 - i, concluindo a troca.

    i++: O índice i é incrementado para avançar na string.

Este loop vai continuar até i atingir a metade da string (len / 2). Quando isso acontece, todos os caracteres da primeira metade terão sido trocados com os da segunda metade, efetivamente invertendo a string.

4 - Retorno da string invertida:     return (str);

    A função retorna o ponteiro para a string str, que agora está invertida.



Vamos imaginar que a string de entrada seja "hello":

    O comprimento len será 5.

    O loop vai funcionar enquanto i < len / 2, ou seja, enquanto i < 2.5 (neste caso, ele roda até i = 2).

        Iteração 1 (i = 0):
            swap = 'h';
            str[0] = str[4] → str[0] = 'o';
            str[4] = 'h' (usando swap);
            Resultado parcial: "oellh"
            
        Iteração 2 (i = 1):
            swap = 'e';
            str[1] = str[3] → str[1] = 'l';
            str[3] = 'e' (usando swap);
            Resultado final: "olleh"

Assim, a string "hello" será invertida para "olleh".