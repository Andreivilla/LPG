/*Escreva uma função que receba um array de inteiros V e os endereços de duas variáveis
inteiras, min e max, e armazene nessas variáveis o valor mı́nimo e máximo do array.
Escreva também uma função main que use essa função.*/
#include<stdio.h>
#include<stdlib.h>
#define tam 10
void min_max(int*, int*, int*);
int main(int argc, char *argv[]){
    int vet[tam] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int max;
    int min;

    min_max(vet, &min, &max);

    printf("Max: %d\n", max);
    printf("Min: %d\n", min);

    return 0;
}
void min_max(int* vet, int* menor, int* maior){
    *maior = vet[0];
    *menor = vet[0];
    int i;

    for(i=0; i<tam; i++){
        if(vet[i] > *maior)
            *maior = vet[i];
    }
    for(i=0; i<tam; i++){
        if(vet[i] < *menor)
            *menor = vet[i];
    }

    return maior;
}
