#include <stdio.h>
/*
Criando arquivos:
    necessário usar:   FILE *arq;
                        arq = fopen("","")

 //fopen("nome do arquivo","forma de abertura do arquivo")
    Tipo de abertura:
    - "w" -> abrir arquivo para escrita (NAO colocar arquivos existentes, pois são reescritos)
    - "r" -> abrir arquivo para leitura (não consegue escrever no arquivo)
    
*/


int main(){
    FILE *arq;

   
    arq = fopen("arquivo.txt","w"); // Cuidado, caso ja exista um arquivo desse nome, ele será apagado e esse entrará no lugar.

    return 0;
}