#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int if_number(char);
void free_string(char *string);
int main(int agrc, char *argv[]){
    FILE *f1, *f2;
    char c, nchar[10], maior_cidade[40];
    int nvalor, maior_valor=0, i=0, j=0;
    f1 = fopen("cidades.txt", "r");
    f2 = fopen("maispopulosa.txt", "w");
    
    while(!feof(f1)){
        c = fgetc(f1);        
        if(if_number(c) == 1){
            j=0;
            while(if_number(c) != 0){
                nchar[i] = c;
                c = fgetc(f1);
                i++;
            }
            i = 0;
            nvalor = atoi(nchar);

            if(nvalor > maior_valor){
                rewind(f2);
                fprintf(f2, "%s", maior_cidade);
                fprintf(f2, "%d", nvalor);
                maior_valor = nvalor;
            }
            free_string(maior_cidade);

        }else{
        maior_cidade[j] = c;
        j++;
        }
    }
    fclose(f1);
    fclose(f2);
    return 0;
}
int if_number(char a){
    char *num;
    int i;
    num = "0123456789";
    for(i=0; i<10; i++){
        if(num[i] == a)
            return 1;
    }
    return 0;
}
void free_string(char *str){
    int i;
    for(i = 0 ; *(str+i) != '\0'; i++)
        *(str + i) = 0;
}