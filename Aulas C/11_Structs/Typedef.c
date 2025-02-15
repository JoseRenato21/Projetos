#include <stdio.h>

int main(){
    typedef float nota;  //Declaro que toda "nota" é do tipo float.

    nota prova1 = 7.0;
    nota prova2 = 6.0;

    nota soma = prova1 + prova2;
    printf("Total das notas: %.2f\n", soma);

    return 0;
}