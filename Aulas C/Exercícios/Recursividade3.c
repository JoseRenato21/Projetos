#include <stdio.h>

int somatorio(int n){
    if(n <= 1){
        return n;
    }
    return n + somatorio(n - 1);
}

int main(){
   int n;
   scanf("%d", &n);
   if(n < 1){
       printf("Número inserido negativo ou nulo.");
   }else{
   printf("A soma dos antecessores de %d é: %d", n, somatorio(n));
 }
    return 0;
}