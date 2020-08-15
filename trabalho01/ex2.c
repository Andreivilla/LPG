#include<stdio.h>
#include<stdlib.h>
#define linha 5
#define coluna 8
int verifica_linha(int*);//verifica se existem outros inicios de palavra na linha
int verifica_coluna(int*, int);// verifica se existem outros inicios de palavra na coluna a cima
void func(int*);
int main(int argc, char *argv[]){
    int matriz[linha][coluna] = {{0,-1,0,-1,-1,0,-1,0}
                                ,{0,0,0,0,-1,0,0,0}
                                ,{0,0,-1,-1,0,0,-1,0}
                                ,{-1,0,0,0,0,-1,0,9}
                                ,{0,0,-1,0,0,0,-1,-1}};
    int i,j;

    for(i=0; i<linha; i++){
        for (j=0; j<coluna; j++){
            printf("%d   ", matriz[i][j]);
        }
        printf("\n");        
    }
    printf("\n\n\n");
    printf("%d\n", matriz[3][7]);
    printf("%d", verifica_coluna(&matriz[3][7], coluna));


    /*for(i=0; i<linha; i++){
        for (j=0; j<coluna; j++){
            
            //printf("%d   ", matriz[i][j]);
        }
        printf("\n");        
    }*/
        return 0;
}
void func(int *mat){
    int i,j;

    for(i=0; i<linha*coluna; i++){
        if(i%coluna == 0)
            printf("\n");
    }
}
int verifica_linha(int *mat){
    int i = 0;
    
    printf("%d\n", *(mat));

    while(1){
        
        if(*(mat+i) != 0 && *(mat+i) != -1)
            return 1;
        else if(*(mat+i) == -1)
            return 0;
        
        i--;
    }
}
int verifica_coluna(int *mat, int j){//
    int i = 0;

    while(1){
        
    if(*(mat+i) != 0 && *(mat+i) != -1)
        return 1;
    else if(*(mat+i) == -1)
        return 0;
        
    i -= j;
    }
}