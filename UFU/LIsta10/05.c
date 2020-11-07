/*Faça um programa que leia um número N e:
• Crie dinamicamente e leia um vetor de inteiro de N posições;
• Leia um número inteiro X e conte e mostre os múltiplos 
desse número que existem no vetor.*/
#include<stdlib.h>
#include<stdio.h>
int main(int argc, char *argv[]){
    int n, i;
    int* vet;
    int x, nmultiplos = 0;

    printf("N: ");
    scanf("%d", &n);

    printf("X: ");
    scanf("%d", &x);

    vet = (int*) calloc(n, sizeof(int));

    for(i=0; i<n; i++){
        printf("Vet[%d]: ", i);
        scanf("%d", &vet[i]);
    
    }
    printf("-----MULTIPLOS-----\n");
    for(i=0; i<n; i++){
        if(vet[i]%x == 0){
            printf("%d ", vet[i]);
            nmultiplos++;
        }
    }
    printf("\n Numero de multiplos: %d", nmultiplos);

    return 0;
}