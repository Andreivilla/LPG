#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]){
    int i;
    char texto[30] = "disciplina de LPG";
    FILE *f;
    if((f = fopen("arquivo.txt","w")) == NULL){//fopen abre arquivo "w" = modo leitura
        printf("ARQUIVO NAO PODE SER ABERTO\n");
        return(1);
    }else{
        for(i=0; i<strlen(texto); i++){//strlen tamanho da string
            fputc(texto[i], f);//fputc(char c, *ptr) passa o caracter c para o ptr 
        }
        int fclose(FILE *f);//fecha op arquivo aberto por fopen
    }
    return 0;
}