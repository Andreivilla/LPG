#include<stdio.h>
#include<stdlib.h>
#define tam 3
void allocamatriz(int***, int, int);

int main(int argc, char *argv[]){
    int **matriz;
    int i, j;

    allocamatriz(&matriz, tam, tam);    

    for(i=0; i<tam; i++){
        for (j=0; j<tam; j++)
            matriz[i][j] = 1;
    }

    for(i=0; i<tam; i++){
        for (j=0; j<tam; j++)        
            printf("%d ", matriz[i][j]);
        printf("\n");
    }

    return 0;
}
void allocamatriz(int ***mat, int i, int j){
    int x;

    *mat = (int**) malloc(i*sizeof(int*));

    for (x=0; x<j; x++)
        (*mat)[x] = (int*) malloc(j*sizeof(int));
}