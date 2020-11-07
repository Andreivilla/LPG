/*Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada
valor lido.*/
#include<stdio.h>
#include<stdlib.h>
#define tam 5
int main(int argc, char *argv[]){
    int vet[tam]; 
    int i;

    for(i=0; i<tam; i++)
        scanf("%d", &vet[i]);

    for(i=0;i<tam;i++)
            printf("%d\n", 2*vet[i]);

    return 0;
}