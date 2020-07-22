#include<stdio.h>
#include<stdlib.h>
void allocamatriz(int***, int, int);//funcao q aloca matriz linha por coluna(ixj)
int **transposta(int**, int, int);
int main(int argc, char *argv[]){
    int **matriz;
    int **matriztrp;
    int i, j;
    int linha, coluna;

    printf("Linhas: ");
    scanf("%d", &linha);//quantidades de linhas 
    printf("Coluna: ");
    scanf("%d", &coluna);//quantidade de colunas

    allocamatriz(&matriz, linha, coluna);//aloca matriz    
    

    for(i=0; i<linha; i++){//entrada da matriz
        for (j=0; j<coluna; j++){
            printf("Matriz[%d][%d]:  ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }


    printf("-----Matriz antes de transpor-----\n");
    for(i=0; i<linha; i++){
        for (j=0; j<coluna; j++)        
            printf("%d ", matriz[i][j]);
        printf("\n");
    }

    matriztrp = transposta(matriz, linha, coluna);

    for(i=0; i<coluna; i++){
        for (j=0; j<linha; j++)        
            printf("%d ", matriztrp[i][j]);
        printf("\n");
    }

    return 0;
}
void allocamatriz(int ***mat, int i, int j){//(matriz, linha, coluna)
    int x;

    *mat = (int**) malloc(i*sizeof(int*));

    for (x=0; x<j; x++)
        (*mat)[x] = (int*) malloc(j*sizeof(int));
}
int **transposta(int **mat, int linha, int coluna){
    int i,j;
    int **mattrp;
    
    allocamatriz(&mattrp, coluna, linha);//alloca uma matriz tpara receber a transposta

    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++)
            mattrp[j][i] = mat[i][j];
    }

    return mattrp;
}