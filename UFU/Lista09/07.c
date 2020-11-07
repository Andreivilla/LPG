/*Crie um programa que contenha uma função que permita passar por parâmetro dois
números inteiros A e B. A função deverá calcular a soma entre estes dois números e
armazenar o resultado na variável A. Esta função não deverá possuir retorno, mas deverá
modificar o valor do primeiro parametro. Imprima os valores de A e B na função principal.*/
#include<stdio.h>
#include<stdlib.h>
void somaA(int*, int*);
int main(int argc, char *argv[]){
    int A, B;

    scanf("%d", &A);
    scanf("%d", &B);

    somaA(&A, &B);

    printf("A: %d\n", A);   

    return 0;
}
void somaA(int* A, int* B){
    *A += *B;
}