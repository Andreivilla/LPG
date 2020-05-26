#include<stdio.h>
#include<stdlib.h>
#define tam 5
typedef struct
{
    char matricula[100];
    char curso[100];
}cadastro;

int main(int argc, char *agrv[]){
    cadastro aluno[tam];
    int i;

    for(i=0; i<tam; i++){

        printf("Matricula: ");
        scanf("%s", &aluno[i].matricula);
        printf("Curso: ");
        scanf("%s", &aluno[i].curso);
    
    }
    printf("-------------------\n");
    printf("Dados de cadastro: \n");
    printf("-------------------\n");
    for(i=0; i<tam; i++){
        printf("Aluno %d\n", i);
        printf("Matricula: %s\n", aluno[i].matricula);
        printf("Curso: %s\n", aluno[i].curso);
    }


    return 0;
}