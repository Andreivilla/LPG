/*Implemente uma função que receba como parâmetro um array de números reais de
tamanho N e retorne quantos números negativos há nesse array. Essa função deve
obedecer ao protótipo:
int negativos(float *vet, int N);*/
#include<stdio.h>
#include<stdlib.h>
#define tam 9
int negativos(float*, int);
int main(int argc, char *argv[]){
    float vet[tam] = {5, -2, 15, 3, -7, 15,-8, 6, 15}; 
    int numeros_negativos;

    numeros_negativos = negativos(vet,tam);

    printf("Negativos: %d\n", numeros_negativos);

    return 0;
}
int negativos(float* vet, int N){
    int nnegativo = 0;
    for(int i=0; i<N; i++){
        if(vet[i]<0)
            nnegativo++;
    }

    return nnegativo;
}