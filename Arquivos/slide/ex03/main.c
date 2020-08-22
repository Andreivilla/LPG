#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
int main(){
    char c;
    FILE *f1, *f2; 
    f1 = fopen("arq1.txt", "r");
    f2 = fopen("arq2.txt", "w");
    if(f1 == NULL || f2 == NULL){
        printf("ARQUIVO NAO PODE SER ABERTO\n");
        return(1);
    }else{
        c = fgetc(f1);
        while(c != EOF){
            printf("%c", c);
            fputc(toupper(c), f2);//fputc(int c, FILE *f) Escreve o caractere c no fluxo de saída/ converte caracter em maisculo
            c = fgetc(f1);
        }
        int fclose(FILE *f1);
        int fclose(FILE *f2);
    }
    return 0;
}