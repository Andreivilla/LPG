/*Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
endereço de cada posição desse array.*/
#include<stdio.h>
#include<stdlib.h>
#define tam 10
int main(int argc, char *argv[]){
    float vet[tam]; 
    int i;

    for(i=0; i<tam; i++)
        printf("%p\n", &vet[i]);

    return 0;
}