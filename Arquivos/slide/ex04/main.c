#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
int main(){
    char c;
    FILE *f1;
    f1 = fopen("arq.txt","r");
    if(f1 == NULL){
        printf("ARQUIVO NAO PODE SER ABERTO\n");
        return(1);
    }else{
        c = fgetc(f1);
        while(!feof(f1)){
            printf("%c", c);
            c = fgetc(f1);
        }
        int fclose(FILE *f1);
    }
    return 0;
}