/*Faça um programa que leia dois valores inteiros e chame uma função que receba estes
2 valores de entrada e retorne o maior valor na primeira variável e o menor valor na
segunda variável. Escreva o conteúdo das 2 variáveis na tela.*/
#include<stdlib.h>
#include<stdio.h>
void trocar_maior_var(int*, int*);
int main(int argc, char *argv[]){
    int A, B;

    scanf("%d", &A);
    scanf("%d", &B);

    trocar_maior_var(&A, &B);

    printf("A: %d\n", A);
    printf("B: %d\n", B);   

    return 0;
}
void trocar_maior_var(int* A, int* B){
    int h;
    if(*A<*B){
        h = *A;
        *A = *B;
        *B = h;
    }
}