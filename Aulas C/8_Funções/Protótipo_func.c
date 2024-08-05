#include <stdio.h>
// PROTOTIPOS DE FUNÇAO ----------------------------------
int soma(int num1, int num2);
//Usado para poder colocar uma função qualquer abaixo da função main.

void mensagem(); // outro protótipo

int main(){
    int n1, n2, ret;

    mensagem();
    
    printf("Informe o primeiro número: ");
    scanf("%d", &n1);
    
    printf("\nInforme o segundo número: ");
    scanf("%d", &n2);
    
    ret = soma(n1, n2);
    
    printf("A soma de %d com %d é %d.", n1, n2, ret);
    
    return 0;
}

void mensagem(){
    printf("Bem-vindo!\n");
}

int soma(int num1, int num2){
    return num1 + num2;
}