#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main(int agrc, char *argv[]){
    char c;
    FILE *f;
    if((f = fopen("arquivo.txt","r")) == NULL){
        printf("ARQUIVO NAO PODESERABERTO\n");
        return(1);
    }else{
        c = fgetc(f);//fgetc(FILE *ptr) lê o caractere presente na posição atual ponteiro interno
        while(c != EOF){// end of file
            printf("%c",c);
            c = fgetc(f);
        }
        int fclose(FILE *f);
    }
    return 0;
}