#include <stdio.h>

  int fib(int a){
    if(a == 2|| a == 1){
        return 1;
    }
    return fib(a -1) + fib(a - 2);

  }
int main(){
    printf("O valor de Fib na posição 10 é: %d\n", fib(5));

    return 0;
}