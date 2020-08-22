#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argv[]){
    char nome[100];
    int i;
    char c;
    FILE *f;
    
    scanf("Digite um nome: ");
    scanf("%[^\n]s", nome);

    f = fopen("arq.txt", "w+");
    //printf("%sa:\n", nome);
    for(i=0; i<strlen(nome); i++){
        printf("%c", nome[i]);
        fputc(nome[i], f);
    }
    
    printf("\n-----conteudo do arquivo-----\n");
    rewind(f);
    c = fgetc(f); 
    while(!feof(f)){
        printf("%c", c);
        c = fgetc(f);
    }
    int fclose(FILE *f);

    return 0;
}