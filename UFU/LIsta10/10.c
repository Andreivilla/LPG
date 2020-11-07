/*Faca um programa que pergunte ao usuario quantos valores ele deseja armazenar em
um vetor de double, depois use a funcao MALLOC para reservar (alocar) o espaco de
memoria de acordo com o especificado pelo usuario. Esse vetor deve ter um tamanho
maior ou igual a 10 elementos. Use este vetor dinamico como um vetor comum, atribuindo
aos 10 primeiros elementos do vetor valores aleatorios (usando a funcao rand)
entre 0 e 100. Exiba na tela os valores armazenados nos 10 primeiros elementos do
vetor.*/
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int main(int argc, char *argv[]){
    int nvalores, i;
    double* vet;

    while (1){
        printf("Quantos valores voce deseja alocar(>10): ");
        scanf("%d", &nvalores);
        if(nvalores >= 10)
            break;
        else
            printf("Numero invalido");        
    }   

    vet = (double*) malloc(nvalores*sizeof(double));
    srand(time(NULL));
    
    for (i=0; i<nvalores; i++)
            vet[i] = rand() % 100;

    printf("10 primeiros valores: \n");
    for(i=0; i<10; i++)
        printf("%lf ", vet[i]);

    return 0;
}