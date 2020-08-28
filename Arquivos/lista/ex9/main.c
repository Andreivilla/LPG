/*Faça um programa que receba do usuário um arquivo texto. 
Crie outro arquivo texto contendo o texto do arquivo de entrada, 
mas com as vogais substituídas por ‘*’.*/
#include<stdio.h>
#include<stdlib.h>
int if_vogal(char);
int main(int argc, char *argv[]){
    FILE *f1, *f2;
    char nome_arquivo[100] = "arq.txt";
    char c;

    /*printf("digite o nome do arquivo: ");
    scanf("%s", nome_arquivo);*/
    
    f1 = fopen(nome_arquivo, "r");
    f2 = fopen("arquivo_sem_vogais.txt", "w");

    c = fgetc(f1);
    while(c != EOF){
        if(if_vogal(c) == 1)
            fputc('*', f2);
        else
            fputc(c, f2);
        c = fgetc(f1);
    }

    fclose(f1);
    fclose(f2);

    return 0;
}
int if_vogal(char c){
    char *vogais;
    int i;
    vogais = "aeiouAEIOU";

    for (i=0; vogais[i]!='\0'; i++){
      if(vogais[i] == c)
        return 1;
    }
    return 0;
}