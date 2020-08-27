/*aça um programa que leia o nome e sobrenome de 30 alunos e armazene em um arquivo, 
de tal forma que o arquivo tenha um aluno por linha.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argv[]){
    char nome[30];
    char sobrenome[30];
    int i;
    FILE *f;

    f = fopen("arq.txt", "w+");
    //printf("%sa:\n", nome);
    for(i=0; i<3; i++){
        printf("Nome: ");
        scanf("%s", nome);
        fputs(nome, f);
        fputs(" ", f);
        printf("Sobrenome: ");
        scanf("%s", sobrenome);
        fputs(sobrenome, f);
        fputs("\n", f);
    }
    
    int fclose(FILE *f);

    return 0;
}