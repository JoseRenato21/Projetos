#include <stdio.h>
/*
 Alocar um ponteiro dentro da func main.
*/

int main() {

    int n; // variável que guarda seu valor na memória.
    // declarando o ponteiro.
    int* p; // ponteiro é um valor que aponta para um endereço de memória.

    printf("informe um número: ");
    scanf("%d", &n);

    // inicializando o ponteiro.
    p = &n;

    printf("o número informado foi %d\n", n);

    printf("o endereço de memória desse número é %p\n", &n); 

    printf("endereço do ponteiro: %p\n", p);   // por ser %p ele dará o endereço em Hexadecimal porém igual o de cima
    return 0;

}

/*Rodando

informe um número: 8
o número informado foi 8
o endereço de memória desse número é 0x7fffe983d92c
endereço do ponteiro: 0x7fffe983d92c

*/