#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define tam 5
int main(int argc, char *argv[]){
    int B[tam];
    int A[tam];
    int i;
    FILE *f;
    

    f = fopen("arq.txt", "w+");
    
    for(i=0; i<tam; i++){
        scanf("%d", &A[i]);
        fprintf(f ,"%d\n", A[i]);
    }
    
    printf("\n-----conteudo do arquivo-----\n");
    rewind(f);
    for(i=0; i<tam; i++){
        fscanf(f, "%d", &B[i]);
        printf("%d ", B[i]);
    }      

    int fclose(FILE *f);

    return 0;
}