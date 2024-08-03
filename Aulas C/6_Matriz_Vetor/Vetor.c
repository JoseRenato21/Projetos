#include <stdio.h>
/*              VETORES

- Array unidimensional.(matriz 1x...)
- 


*/
int main(){
// Vetores e strings
    char nome[50];
    printf("Qual seu nome? ");
    gets(nome);
    printf("Olá meu nome é %s\n", nome);




// Vetores e caracteres
    char letras[26]; //0....25
    
    int contador;
    for(int i = 97; i <= 122; i++){
        letras[contador] = i;
        contador = contador + 1;
    }
// Imprimindo as letras e seus valores em decimal
    for(int i = 0; i < 26; i++){ 
        printf("%d == %c\n", letras[i], letras[i]);
    }
    return 0;
}
//-------------------------------------------------------
int main(){
    //Vetores inteiros
    int numeros[5]; // 0 ... 4
    numeros[0] = 1;
    numeros[1] = 3;
    numeros[2] = 5;
    numeros[3] = 7;
    numeros[4] = 9;

    //Vetores reais
    float valores[5]; // 0 ... 4
    for(int i = 0; i <= 4; i++){
            valores[i] = (float)numeros[i]/(float)2; // (float pois eles eram inteiros)
        }
    for (int i = 4; i >= 0; i--){   //LISTA OS VALORES DE ORDEM DECRESCENTE
            printf("%f\n", (float)valores[i]);
        }
    
            
    return 0;
}
