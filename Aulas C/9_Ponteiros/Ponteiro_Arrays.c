#include <stdio.h>

int main(){

                     //   0   1   2   3   4
    int valores[5];  // |   |   |   |   |  |

    for(int i = 0; i < 5; i++){
        printf("Informe o %d/5 valor: ", (i+1));
        scanf("%d", &valores[i]);
    }

    printf("Os valores informados foram:\n");
    for(int i = 0; i < 5; i++){
        printf("Valores[%d] = %d\n",i, valores[i]);
    }

    printf("%d %p\n", &valores[0], &valores[0]);     // OU printf("%p\n", &valores[0]);   Para endereço em Hexadecimal
    printf("%d\n", &valores[1]);    // OU  printf("%p\n", &valores[1]);   Para endereço em Hexadecimal
    printf("%d %p\n", valores, valores);  

    return 0;
}

/*  Rodando:

Informe o 1/5 valor: 1
Informe o 2/5 valor: 2
Informe o 3/5 valor: 3
Informe o 4/5 valor: 4
Informe o 5/5 valor: 5
Os valores informados foram:
Valores[0] = 1
Valores[1] = 2
Valores[2] = 3
Valores[3] = 4
Valores[4] = 5
-345590272 0x7ffceb66b600       <-|
-345590268                        |-------São Idênticos pois quando se cria um array cria-se um ponteiro
-345590272 0x7ffceb66b600       <-|        que aponta para o endereço da primeira posição do array.

*/