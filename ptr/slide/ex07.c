#include<stdio.h>
#include<stdlib.h>
#define x 3 
int func01(int*, int*);
int main(int argc, char *argv[]){
    int mat1[x][x] = {{1,2,3},{4,5,6},{7,8,9}};
    int mat2[x][x] = {{1,2,3},{4,5,6},{7,8,9}};
    int *ptr1;
    int *ptr2;
    int soma;
    ptr1 = &mat1[0][0];
    ptr2 = &mat2[0][0];

    soma = func01(ptr1, ptr2);
    if(soma > 0)
        printf("Soma: %d", soma);
    else
        printf("Diagonais diferentes");
    return 0;
}
int func01(int *ptra, int *ptrb){
    int i;
    int soma = 0;

    for(i=0; i<9; i+=3){
        if(*(ptra+i) == *(ptrb+i))
            soma = (*(ptra+i)+*(ptrb+i));
        else
            return 0;
    }
    return soma;
}