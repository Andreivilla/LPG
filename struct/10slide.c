#include<stdio.h>
#include<stdlib.h>
#define tam 3
typedef struct{

    char NomeCompanhia[30];
    float Valoratual; 
    float Valoranterior;

}acoes;

void le(acoes*);
void imprime(acoes*);
void valor(acoes*, float);
void retorno(acoes*);

int main(int argc, char *argv[]){
    acoes vet[tam];
    int i;
    float valor_comparacao;

    for(i=0; i<tam; i++)
        le(&vet[i]);

    printf("\nValor de comparacao: ");
    scanf("%f", valor_comparacao);
    valor(vet, valor_comparacao);
    retorno(vet);

    return 0;
}
void le(acoes *vet){
    printf("Nome da companhia: ");
    scanf("%s", (vet)->NomeCompanhia);fflush(stdin);
    printf("Valor atual das acoes: ");
    scanf("%f", &vet->Valoratual);fflush(stdin);
    printf("Valor anterior das acoes: ");
    scanf("%f", &vet->Valoranterior);fflush(stdin);
}
void imprime(acoes *vet){
    printf("\n-----%s-----\n", vet->NomeCompanhia);
    printf("Valor atual: %f\n", vet->Valoratual);
    printf("Valor anterior: %f\n", vet->Valoranterior);
}
void valor(acoes vet[tam], float n){
    int i;
    for(i=0; i<tam; i++){
        if(vet[i].Valoratual > n){
            imprime(&vet[i]);
        }
    }
}
void retorno(acoes vet[tam]){
    int i, indice_retorno;
    float maioretorno = 0, retorno;
    for(i=0; i<tam; i++){
        retorno = vet[i].Valoratual - vet[i].Valoranterior;
        if(retorno > maioretorno){
            maioretorno = retorno;
            indice_retorno = i;
        }
    }
    printf("O maior retorno: %.2f\n", maioretorno);
    imprime(&vet[indice_retorno]);
}