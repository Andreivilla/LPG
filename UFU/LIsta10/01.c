/*Crie um programa que:
(a) Aloque dinamicamente um array de 5 números inteiros,
(b) Peça para o usuário digitar os 5 números no espaço alocado,
(c) Mostre na tela os 5 números,
(d) Libere a memória alocada.*/
#include<stdlib.h>
#include<stdio.h>
#define tam 5
int main(int argc, char *argv[]){
    int *vet;
    int i;

    vet = (int*) calloc(tam, sizeof(int));

    for(i=0; i<tam; i++)
        scanf("%d", &vet[i]);

    for(i=0; i<tam; i++)
        printf("%d\n", vet[i]);

    free(vet);
    
    return 0;
}