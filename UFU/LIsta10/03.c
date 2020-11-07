/*Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação
dinâmica de memória. Em seguida, leia do usuário seus valores e mostre quantos dos
números são pares e quantos são ı́mpares.*/
#include<stdlib.h>
#include<stdio.h>
int main(int argc, char *argv[]){
    int *vet;
    int tam, i;
    int par=0, impar=0;

    printf("Defina o tamanho do vetor: ");
    scanf("%d", &tam);
    
    vet = calloc(tam, sizeof(int));

    for(i=0; i<tam; i++)
        scanf("%d", &vet[i]);
    
    for(i=0; i<tam; i++){
        if(vet[i]%2 == 0)
            par++;
        else
            impar++;
    }

    printf("Par: %d\n", par);
    printf("Impar: %d\n", impar);

    free(vet);

    return 0;
}