/*Faça um programa que leia 2 valores inteiros e chame uma função que receba estas
2 variáveis e troque o seu conteúdo, ou seja, esta função é chamada passando duas
variáveis A e B por exemplo e, após a execução da função, A conterá o valor de B e B
terá o valor de A.*/
#include<stdlib.h>
#include<stdio.h>
void trocar_var(int*, int*);
int main(int argc, char *argv[]){
    int A, B;

    scanf("%d", &A);
    scanf("%d", &B);


    trocar_var(&A, &B);

    printf("A: %d\n", A);
    printf("B: %d\n", B);   

    return 0;
}
void trocar_var(int* A, int* B){
    int h;

    h = *A;
    *A = *B;
    *B = h;
}