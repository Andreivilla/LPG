/*Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação
dinâmica de memória. Em seguida, leia do usuário seus valores e imprima o vetor lido.*/
#include<stdlib.h>
#include<stdio.h>
int main(int argc, char *argv[]){
    int *vet;
    int tam, i;

    printf("Defina o tamanho do vetor: ");
    scanf("%d", &tam);
    
    vet = calloc(tam, sizeof(int));

    for(i=0; i<tam; i++)
        scanf("%d", &vet[i]);
    
    for(i=0; i<tam; i++)
        printf("%d\n", vet[i]);

    free(vet);

    return 0;
}