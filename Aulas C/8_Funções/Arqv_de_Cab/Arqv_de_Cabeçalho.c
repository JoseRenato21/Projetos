#include <stdio.h> // ARQUIVO DE CABEÇALHO 
/*
Arquivos de cabeçalho são bibliotecas que você pode criar também.
sua biblioteca é formada por aspas : #include "jose.h"
depois criar um arquivo com o nome da sua biblioteca e colocar os protótipos nele
criar um arquivo com o nome da biblioteca trocando .h por .c e desenvolver as funções

*/
//criando a sua biblioteca:
#include "biblio.h"



int main(){
    int n1, n2, rets, retm;

        mensagem();
        
        printf("informe o primeiro número :");
        scanf("%d", &n1);

        printf("informe o segundo número :");
        scanf("%d", &n2);

        rets = soma(n1,n2);

        retm = multi(n1,n2);

        printf("a soma é %d\n", rets);

        printf("a multiplicação é %d\n", retm);



    return 0;
}