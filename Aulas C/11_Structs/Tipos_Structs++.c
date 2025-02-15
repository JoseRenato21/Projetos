#include <stdio.h>
#include <string.h>

/*                  STRUCT
 -Estrutura.

Crio uma struct e coloco quantos registros eu quiser.
Declaro ela dentro da int main como:  struct nome_da_struct nova_var;
para pedir a informação para a var, se usa fgets(nova_var.var_de_dento, tamanho dela, stdin(para ser inserido pelo teclado))
        ex: fgets(aluno[i].nome, 100, stdin);
*/

 struct st_contato{      // struct nome{...};

    char matricula[100];
    char nome[100];
    int ano_nascimento;
    char telefone [100];
    char email [100];
};

struct st_agenda{
    struct st_contato contatos[100];
}agenda; 



int main(){


    for(int i = 0; i < 3; i++){
    printf("Informe o nome: ");
    fgets(agenda.contatos[i].nome, 100, stdin);

    printf("Informe seu telefone: ");
    fgets(agenda.contatos[i].telefone, 100, stdin);

     printf("Informe seu email: ");
    fgets(agenda.contatos[i].email, 100, stdin);
    
    printf("Informe seu ano de nascimento: ");
    scanf("%d",&agenda.contatos[i].ano_nascimento);
    getchar();      // Sempre que se tem uma string depois de um scanf da erro, então se coloca isso

    
    }
    for(int i = 0; i < 3; i++){
    printf("=================== DADOS DO CONTATO %d ==================\n", (i+1));
    printf("Nome: %s\n",strtok(agenda.contatos[i].nome, "\n"));
    printf("Email: %s\n",strtok(agenda.contatos[i].email, "\n"));
    printf("Ano de nascimento: %d\n", agenda.contatos[i].ano_nascimento);
    printf("Telefone: %s",strtok(agenda.contatos[i].telefone,"\n"));
    }


    return 0;
}