#include <stdio.h>
#include <string.h>

/*                  STRUCT
 -Estrutura.

Crio uma struct e coloco quantos registros eu quiser.
Declaro ela dentro da int main como:  struct nome_da_struct nova_var;
para pedir a informação para a var, se usa fgets(nova_var.var_de_dento, tamanho dela, stdin(para ser inserido pelo teclado))
        ex: fgets(aluno[i].nome, 100, stdin);
*/

struct st_aluno{      // struct nome{...};

    char matricula[10];
    char nome[100];
    char curso[100];
    int ano_nascimento;

}aluno[5]; //  <-- ou aqui



int main(){

   // struct st_aluno aluno[5];    <-- ou aqui 

    for(int i = 0; i < 5; i++){
    printf("Informe a matrícula do aluno: ");
    fgets(aluno[i].matricula, 10, stdin);

    printf("Informe o seu nome: ");
    fgets(aluno[i].nome, 100, stdin);

    printf("Informe seu curso: ");
    fgets(aluno[i].curso, 100, stdin);

    printf("Informe seu ano de nascimento: ");
    scanf("%d", &aluno[i].ano_nascimento);
    getchar();      // Sempre que se tem uma string depois de um scanf da erro, então se coloca isso
    }

    for(int i = 0; i < 5; i++){
    printf("=================== DADOS DO ALUNO %d ==================\n", (i+1));
    printf("Matrícula: %s\n", aluno[i].matricula);
    printf("Nome: %s\n", aluno[i].nome);
    printf("Curso: %s\n",aluno[i].curso);
    printf("Ano de nascimento %d\n", aluno[i].ano_nascimento);

    }


    return 0;
}