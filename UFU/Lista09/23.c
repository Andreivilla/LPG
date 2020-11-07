/*Escreva uma função que retorna o maior valor de um array de tamanho N. Escreva um
programa que leia N valores inteiros, imprima o array com k elementos por linha, e o
maior elemento. O valor de k também deve ser fornecido pelo usuário.*/
#include<stdio.h>
#include<stdlib.h>
#define tam 10
int maior_valor(int*, int);
int main(int argc, char *argv[]){
    int vet[tam] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k, maior;
    int i, j = 0;

    maior = maior_valor(vet, tam);

    printf("Maior elemento: %d\n", maior);
    printf("Quantos elementos mostrar por linha? ");
    scanf("%d", &k);

    for(i=0; i<tam; i++){
        printf("%d ", vet[i]);
        j++;
        if(j == k || i == tam-1){
            printf("\n");
            j = 0;
        }
    }
    return 0;
}
int maior_valor(int* vet, int N){
    int maior = vet[0];

    for(int i=0; i<N; i++){
        if(vet[i] > maior)
            maior = vet[i];
    }

    return maior;
}