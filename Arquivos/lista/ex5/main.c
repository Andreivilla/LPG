#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define tam 30
int main(int argc, char *argv[]){
    char nome_arquivo[tam];
    char c;
    FILE *f;
    FILE *aux;
    
    printf("Nome do arquivo: ");
    scanf("%s", nome_arquivo);

    f = fopen(nome_arquivo, "r");
    aux = fopen("arqaux.txt", "w");

    c = fgetc(f);
    while(c != EOF){
        fputc(c, aux);
        c = fgetc(f);
    }
    
    rewind(f);
    rewind(aux);
    
    aux = fopen("arqaux.txt", "r");
    f = fopen(nome_arquivo, "w");
    
    c = fgetc(aux);
    while(c != EOF){
        fputc(toupper(c), f);
        c = fgetc(aux);
    }
    
    int fclose(FILE *aux);
    int fclose(FILE *f);


    return 0;
}