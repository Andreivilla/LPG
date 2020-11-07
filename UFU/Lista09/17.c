/*Escreva uma função que dado um número real passado como parâmetro, retorne a parte
inteira e a parte fracionária deste número. Escreva um programa que chama esta função.
Protótipo:
void frac(float num, int* inteiro, float* frac);*/
#include<stdlib.h>
#include<stdio.h>
void frac(float, int*, float*);
int main(int argc, char *argv[]){
    int inteiro;
    float fracao;
    float n;

    scanf("%f", &n);

    frac(n, &inteiro, &fracao);

    printf("Inteiro: %d\n", inteiro);
    printf("Real: %f\n", fracao);

    return 0;
}
void frac(float num, int* inteiro, float* frac){
    *inteiro = (int)num;
    *frac = num - *inteiro;
}