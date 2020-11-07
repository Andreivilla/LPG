/*Faca um programa que leia uma quantidade qualquer de numeros armazenando-os na
memoria e pare a leitura quando o usuario entrar um numero negativo. Em seguida,
imprima o vetor lido. Use a funcao REALLOC.*/
#include<stdlib.h>
#include<stdio.h>
int main(int argc, char *argv[]){
    int i = 1, j = 0;
    int* vet;

    vet = (int*) malloc(sizeof(int));//aloca o valor base do vetor

    printf("Digite valores(negativo para parar)\n");
    while (1){
        vet = realloc(vet, i*sizeof(int));//realloca antes da leiturados valores
        printf("N%d: ",i);
        scanf("%d", &vet[j]);
        
        if(vet[j]<0)
            break;

        j++;//conta o tamanho do vetor
        i++;//conta as repeticoes doloop
    }
    
    printf("-----Valores-----\n");//imprime os resultados
    for(i=0; i<j; i++)
        printf("%d\n", vet[i]);

    return 0;
}