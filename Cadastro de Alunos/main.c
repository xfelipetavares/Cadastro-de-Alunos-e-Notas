// por Felipe Tavares
// Fins de pratica e aprendizado, o programa cadastra
// os alunos e depois mostra organizadamente os nomes
// e suas respectivas notas.

#include <stdio.h>

float nota[0];
char aluno[50][20];
int inicio, talunos;

int main(void){

    printf("======================================\n");
    printf("======= Cadastro Alunos e Notas ======\n");
    printf("======================================\n\n");
    
    printf("Quantos alunos quer cadastrar? ");
    scanf("%i", &talunos);

    for (inicio = 0; inicio < talunos ; ++inicio ) {

        printf("=================\n");
        printf("== Cadastro %i ==\n", inicio + 1);
        printf("=================\n");
        printf("Qual o nome do aluno? ");
        scanf("%s", aluno[inicio]);
        printf("Qual a nota dele? ");
        scanf("%f", &nota[inicio]);
        printf("\n");
    }

    printf("===============================\n");
    printf("======= Notas dos Alunos ======\n");
    printf("===============================\n");
    for (inicio = 0; inicio < talunos; ++inicio) {

        printf("Aluno: %s Nota: %.2f\n", aluno[inicio], nota[inicio]);
    }
    printf("\n");
    return 0;
}
