/*Crie uma função que receba dois parâmetros: um array e um valor do mesmo tipo do
array. A função deverá preencher os elementos de array com esse valor. Não utilize
ı́ndices para percorrer o array, apenas aritmética de ponteiros.*/
#include<stdlib.h>
#include<stdio.h>
#define tam 10 
void preencher_vetor(int*, int);
int main(int argc, char *argv[]){
    int vet[tam];
    int n;
    int i;
        
    scanf("%d", &n);

    printf("Antes da função: \n");
    for(i=0; i<tam; i++)
        printf("%d\n", vet[i]);

    preencher_vetor(&vet, n);

    printf("Dps da função: \n");
    for(i=0; i<tam; i++)
        printf("%d\n", vet[i]);

    return 0;
}
void preencher_vetor(int* p, int n){
    for(int i=0; i<tam; i++){
        *(p+i) = n;
    }    
}