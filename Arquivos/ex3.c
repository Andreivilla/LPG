#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>

int main(int argc, char *argv[]){
    int i;
    char c;
    FILE *f1, *f2;

    f1 = fopen("C:\\...\\arquivo.txt","r");
    f2=fopen("C:\\...\\arq2.txt","w");
    
    if(f1==NULL||f2==NULL){
        printf("ARQUIVO NAO PODE SER ABERTO\n");
    
        system("pause");
        return(1);
    }else{
        c = fgetc(f1);
        while(c!=EOF){
            printf("%c",c);
            fputc(toupper(c),f2);
            c = fgetc(f1);
        }
        int fclose(FILE*f1);
        int fclose(FILE*f2);
    }
    
    return 0;
}
