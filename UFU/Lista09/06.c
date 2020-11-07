/*Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma função
que retorne a soma do dobro dos dois números lidos. A função deverá armazenar o dobro
de A na própria variável A e o dobro de B na própria variável B.*/
#include<stdio.h>
#include<stdlib.h>
int soma_dobro(int*, int*);
int main(int argc, char *argv[]){
    int A, B;

    scanf("%d", &A);
    scanf("%d", &B);

    printf("Soma do dobro: %d\n", soma_dobro(&A, &B));
    printf("A: %d\n", A);
    printf("B: %d\n", B);   

    return 0;
}
int soma_dobro(int* A, int* B){

    *A = 2**A;
    *B = 2**B;

    return *A + *B;
}