#include <stdio.h>
//___________________-recursividade_______________________
// ato de uma função chamar a si mesma.
/*
ATENÇAO: recursividade não para a não ser que voce tenha escrito uma condição de parada.
        risco de travar o pc.



*/
/* EX::
int contador = 1;

int main(){
    printf("imprimindo algo... %d\n", contador);
    contador = contador + 1;
                                    // essa função não pararia de ser chamada até travar o pc
    main();

    return 0;
}
*/
//_____________________________FIBONACI_______________________

#include <stdio.h>

int fib(int n){
    if(n == 0 ){
        return 0;
    } if(n == 1){
     return 1;
    }
    
        return fib(n -1) + fib(n -2);
}

int main(){
    int inf;
    printf("informe o tamanho da sequencia:\n");
    scanf("%d", &inf);

    for(int i = 0; i < inf; i++){
    printf("%d",fib(i + 1));
    }
    return 0;
}