#include<stdio.h>
#include<stdlib.h>
#define tam 3
void recebe(int mat[][tam]){
    int i, j;
    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}


int main(int argc, char* argv[]){
    int matriz[tam][tam];

    recebe(matriz);


    return 0;
}
