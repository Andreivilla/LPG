/*Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
do teclado e imprima o endereço das posições contendo valores pares.*/
#include<stdio.h>
#include<stdlib.h>
#define tam 5
int main(int argc, char *argv[]){
    int vet[tam]; 
    int i;

    for(i=0; i<tam; i++)
        scanf("%d", &vet[i]);

    for(i=0;i<tam;i++){
        if(vet[i]%2 == 0)
            printf("%p\n", &vet[i]);
    }

    return 0;
}