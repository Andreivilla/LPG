/*Faca um programa para armazenar em memoria um vetor de dados contendo 1500 valores
do tipo int, usando a funcao de alocacao dinamica de memoria CALLOC:
(a) Faca um loop e verifique se o vetor contem realmente os 1500 valores inicializados
com zero (conte os 1500 zeros do vetor).
(b) Atribua para cada elemento do vetor o valor do seu ındice junto a este vetor.
(c) Exibir na tela os 10 primeiros e os 10 ultimos elementos do vetor.*/
#include<stdlib.h>
#include<stdio.h>
#define tam 1500
int main(int argc, char *argv[]){
    int i;
    int* vet;

    vet = (int*) calloc(tam, sizeof(int));//alocar dinamicamente 1500 valores

    printf("Testar valores iguais a zero: \n");
    for(i=0; i<tam; i++)
        printf("Vet[%d]: %d\n", (i+1), vet[i]);//contar escrever os 1500 zeros

    for (i=0; i<tam; i++)//atribuir indices as posicoes do vetor
        vet[i] = i;
    
    printf("\n10 Primeiros valores: \n");
    for(i=0; i<10; i++)//10 primeiros valores
        printf("%d\n", vet[i]);

    printf("\n10 Ultimos: \n"); 
    for(i = tam-10; i<tam; i++)//10 primeiros valores
        printf("%d\n", vet[i]);

    return 0;
}