#include <stdio.h>

int inf[5];
int vet(int n){
    if(n <= 0 ){
        return inf[n];
    }
    return inf[n] + vet(n - 1);
}


int main(){
    
    
    for(int i = 0; i < 5; i++){
        printf("de o inf[%d] valor de 5: ", i);
        scanf("%d", &inf[i]);
    }
    printf("A soma de todos os elementos do vetor inf é: %d", vet(5));
   return 0;
}