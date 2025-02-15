#include <stdio.h>
/* ______________ PONTEIROS_______________-
__ Manipulação de memória.
--acessoa ao Hardware/lógico/memória

1- Precia que na função main seja citado o valor com o espaço de memória tenha &
    ex: incrementa(&contador);

2- Precisa que a função receba um endereço de memória que aponta para o tipo int,char,float....
    ex: encrementa(int* valor){ ... }      (uso do *)

3- Para citar o valor é necessário o uso de ...(*nome_da_variável));
    ex: printf("o valor é %d", (*valor));

4- Para citar o endereço de memória é só fazer o normal.
    ex: printf("O endereço de memoria é %d\n", valor);

5- No main, é necessário usar & quando citar a var para puxar o espaço de memória.
    ex:  printf("O endereço de memoria é %d\n", &contador); 

*/

void incrementa(int* valor); 



int main(){
    // Quando declaramos uma variável, a linguagem C aloca
    // um espaço em memória para colocar este valor.
    int contador = 10;

    printf("antes de incrementar.\n");
    printf("O contador vale %d\n", contador);
    printf("O endereço de memoria é %d\n", &contador);    

    // cópia por valor
    incrementa(&contador);          // O & faz o int contador e o int valor ocuparem o mesmo espaço de memória

    printf("depois de incrementar.\n");
    printf("O contador vale %d\n", contador);
    printf("O endereço de memoria é %d\n", &contador);


    return 0;
}


void incrementa(int* valor){ // podia ser incrementa(int* contador) pois é criada outra variável da mesma forma.
    printf("antes de incrementar.\n");
    printf("O contador vale %d\n", (*valor));   //valor
    printf("O endereço de memoria é %d\n", valor);    //endereço de memória  

    printf("depois de incrementar.\n");
    printf("O contador vale %d\n", ++(*valor));   //valor
    printf("O endereço de memoria é %d\n", valor);   // endereço de memória

}


/* ------------Resultado Final:

antes de incrementar.
O contador vale 10
O endereço de memoria é 1038404596       // mesmo endereço em todos
antes de incrementar.
O contador vale 10
O endereço de memoria é 1038404596
depois de incrementar.
O contador vale 11                          // valor alterado
O endereço de memoria é 1038404596
depois de incrementar.
O contador vale 11                          // valor mantido
O endereço de memoria é 1038404596

*/