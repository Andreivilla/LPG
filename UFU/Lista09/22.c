/*Crie uma função para somar dois arrays. Esta função deve receber dois arrays e retornar
a soma em um terceiro array. Caso o tamanho do primeiro e segundo array seja diferente
então a função retornará ZERO (0). Caso a função seja concluı́da com sucesso a mesma
deve retornar o valor UM (1). Utilize aritmética de ponteiros para manipulação do array.*/
#include<stdio.h>
#include<stdlib.h>
#define tam 10
int soma_vet(int*, int, int*, int, int*);
int main(int argc, char *argv[]){
    int vet1[tam] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vet2[tam] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vet3[tam];

    soma_vet(vet1, tam, vet2, tam, vet3);

    for(int i=0; i<tam; i++)
        printf("%d\n", vet3[i]);

    return 0;
}
int soma_vet(int* vet1, int n1, int* vet2, int n2, int* vet3){
    if(n1 != n2)
        return 0;

    for(int i=0; i<tam; i++)
        vet3[i] = vet1[i] + vet2[i];

    return 1;
}