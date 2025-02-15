/*
    8 bits = 10000000  > 1 Byte   --> número max 256
    16 bits = 1000000000000000 2 Bytes
    32 bits = 10000000000000000000000000000000 4 Bytes
    64 bits = 1000000000000000000000000000000000000000000000000000000000000000 8 Bytes
    Na linguagem C:
    INT guarda até 4 bytes.


 representação binária do número 2 = 0000 0010
 __Na linguagem C podemos fazer operações de "Baixo nível" com CHAR, INT e LONG INT.

    3tipos :
               | ~ | NOT                                |
               | >>| Deslocamento de bits para direita  |
               | <<| Deslocamento dde bits para esquerda|

Ex: 
int numero = 2;
 (A representação binária 0000 0010_
 numero = numero << 2;
 0000 1000 (que é igual a 8)

Ex2:
int numero = 2;
 (A representação binária 0000 0010 (aonde é 0 vai virar 1 e vice-versa)
 numero = ~numero;
    1111 1101 (igual a 253)

*/

#include <stdio.h>
int main(){
    int num = 2;
    printf("O número é %d\n", num);
// Deslocamento de bits para esquerda.
    num = num << 2;
    printf("O número agora é %d\n", num);
//Negação (aonde era 0 agora é 1).
    num = 2;
    num = ~num;
    printf("O número agora é %d\n", num);
    return 0;

}