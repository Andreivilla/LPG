/*Escreva uma função que aceita como parâmetro um array de inteiros com N valores, e
determina o maior elemento do array e o número de vezes que este elemento ocorreu
no array. Por exemplo, para um array com os seguintes elementos: 5, 2, 15, 3, 7, 15,
8, 6, 15, a função deve retorna para o programa que a chamou o valor 15 e o número 3
(indicando que o número 15 ocorreu 3 vezes). A função deve ser do tipo void.*/
#include<stdio.h>
#include<stdlib.h>
#define tam 9
int maior_valor(int*);
int main(int argc, char *argv[]){
    int vet[tam] = {5, 2, 15, 3, 7, 15, 8, 6, 15}; 
    int repValor;//armazenar repeticao do maior valor
    
    repValor = maior_valor(vet);

    printf("O maior valor é %d e ele ocorre %d vezes\n", vet[0], repValor);

    return 0;
}
int maior_valor(int* vet){
    int i, j, h;//variaveis para ordenar vetor
    int nvalor = 0;//contador repeticoes do maior valor

    for(i=0; i<tam; i++){//fors para ordenar vetor
        for(j=i; j<tam; j++){
            if(vet[i]<vet[j]){
                h = vet[i];
                vet[i] = vet[j];
                vet[j] = h;
            }
        }
    }
    while(vet[nvalor] == vet[0]){//contar repeticoes  do maior valor
        nvalor++;
    }
    return nvalor;//retornar repeticoes do valor
}
