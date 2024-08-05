
#include <stdio.h>
#include <string.h>


 struct st_registro{
     
    char nome[100];
    char rua[100];
    char  n0[100];
    char cep [100];
    char sexo [100];
    int qht; // quantidade de horas trabalhadas
    char dependentes [100];
};

struct st_lista{
    struct st_registro registros[100];
}lista; 



int main(){


    for(int i = 0; i < 2; i++){
    printf("Informe o nome: ");
    fgets(lista.registros[i].nome, 100, stdin);

    printf("Informe o nome da sua rua: ");
    fgets(lista.registros[i].rua, 100, stdin);

    printf("Informe o número da sua casa: ");
    fgets(lista.registros[i].n0, 100, stdin);
    
    printf("Informe o seu CEP: ");
    fgets(lista.registros[i].cep, 100, stdin);
    
    printf("Informe o seu sexo: ");
    fgets(lista.registros[i].sexo, 100, stdin);
    
    printf("Informe sobre o uso de dependentes: ");
    fgets(lista.registros[i].dependentes, 100, stdin);
    
    printf("Informe a quantidade de horas trabalhadas nas últimas 5 semanas: ");
    scanf("%d",&lista.registros[i].qht);
    getchar();      // Sempre que se tem uma string depois de um scanf da erro, então se coloca isso

    
    }
    for(int i = 0; i < 2; i++){
    printf("=================== DADOS DO REGISTRO %d ==================\n", (i+1));
    printf("Nome: %s\n",strtok(lista.registros[i].nome, "\n"));
    printf("Rua: %s\n",strtok(lista.registros[i].rua, "\n"));
    printf("n0: %s\n",strtok(lista.registros[i].n0,"\n"));
    printf("CEP: %s\n",strtok(lista.registros[i].cep,"\n"));
    printf("Sexo: %s\n",strtok(lista.registros[i].sexo,"\n"));
    printf("Dependentes: %s\n",strtok(lista.registros[i].dependentes,"\n"));
    printf("Quantidade de horas trabalhadas nas últimas 5 semanas: %d\n", lista.registros[i].qht);
    }


    return 0;
}
