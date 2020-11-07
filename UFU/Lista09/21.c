/*Escreva um programa que declare um array de inteiros e um ponteiro para inteiros. As-
socie o ponteiro ao array. Agora, some mais um (+1) a cada posição do array usando o
ponteiro (use *).*/
#include<stdio.h>
#include<stdlib.h>
#define tam 10
int main(int argc, char *argv[]){
    int vet[tam] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* ptrvet;
    int i;

    ptrvet = vet;

    for(i=0; i<tam; i++)
        printf("%d\n",vet[i]);
    
    for(i=0; i<tam; i++)
        *(ptrvet+i) = *(ptrvet+i) + 1;
    
    printf("-------------\n");
    for(i=0; i<tam; i++)
        printf("%d\n",vet[i]);

    return 0;
}