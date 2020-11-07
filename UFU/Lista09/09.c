/*Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
Imprima o endereço de cada posição dessa matriz.*/
#include<stdio.h>
#include<stdlib.h>
#define lin 3
#define col 3
int main(int argc, char *argv[]){
    float mat[lin][col]; 
    int i,j;

    for(i=0; i<lin; i++){
        for(j=0; j<col; j++)
            printf("%p ", &mat[i][j]);
        printf("\n");
    }
    return 0;
}
