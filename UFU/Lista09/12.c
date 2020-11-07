/*Faça um programa que leia três valores inteiros e chame uma função que receba estes 3
valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável,
o segundo menor valor na variável do meio, e o maior valor na última variável. A função
deve retornar o valor 1 se os três valores forem iguais e 0 se existirem valores diferentes.
Exibir os valores ordenados na tela.*/
#include<stdio.h>
#include<stdlib.h>
int ordenar3(int*, int*, int*);
int main(int argc, char *argv[]){
    int n1, n2, n3; 

    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    ordenar3(&n1,&n2,&n3);

    printf("-----------\n");
    printf("%d\n", n1);
    printf("%d\n", n2);
    printf("%d\n", n3);

    return 0;
}
int  ordenar3(int* a, int* b, int* c){
    int vet[3];
    int h;

    vet[0] = *a;
    vet[1] = *b;
    vet[2] = *c;

    for(int i=0; i<3; i++){
        for(int j=i+1; j<3; j++){
            if(vet[i]>vet[j]){
                h = vet[i];
                vet[i] = vet[j];
                vet[j] = h;  
            }
        }
    }

    *a = vet[0];
    *b = vet[1];
    *c = vet[2];

    return 0;
}    