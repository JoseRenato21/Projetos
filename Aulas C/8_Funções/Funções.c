#include <stdio.h>  //Biblioteca padrão para entrada e saída.
// --------------------------AULA SOBRE FUNÇÕES--------------------------
/*

__int main(){}  -> Toda as outras funções que o programa venha a ter só são executadas e mostradas
                    se tiver uma ordem de ação dentro da função int main().

__ Estrutura de uma função qualquer:

 1-Tipo de retorno:                             void, int, char, double, ...
 2-Nome:                                        tirando a 'main" qaulquer nome.
 3-Parâmetros de entrada (opcional):            ()
 4-Implementação:                               o que está dentro das { }
 5-Retorno (opcional):                          void = nenhum retorno,  int = um retorno inteiro.

 ## ATENÇÃO: Colocar as funções quaisquer ANTES da main!!
*/
void mensagem(){
    printf("Olá mundo!\n");
}

int soma(int num1, int num2){ // posso  ter quantos parâmetros eu quiser.
    int res = num1 + num2;
    return res; 
}

void proximo_char(char caractere){
    printf("%c\n", caractere+1);  // usa a tabela ascii para ir para o proximo caractere.
}


// FUNC PRINCIPAL

int main(){ // função principal de um program em C.
    mensagem();   // faz com que a função mensagem seja executada
   
    int retorno = soma(4,6);   // preciso passar os valores que quero. e criar uma var dentro de main
    printf("%d", retorno); 

    char cara = 97;
    proximo_char(cara);
    return 0;
}
/*



*/
