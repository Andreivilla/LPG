/*Crie uma função que receba como parâmetro um array e o imprima. Não utilize ı́ndices
para percorrer o array, apenas aritmética de ponteiros.*/
#include<stdlib.h>
#include<stdio.h>
#define tam 10 
void imprimir_vetor(int*);
int main(int argc, char *argv[]){
    int vet[tam];
    
    imprimir_vetor(&vet);

    return 0;
}
void imprimir_vetor(int* p){
    for(int i=0; i<tam; i++){
        printf("%d\n", *(p+i));
    }    
}