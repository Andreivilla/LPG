/*Escreva um programa que leia primeiro os 6 numeros gerados pela loteria e depois os 6
numeros do seu bilhete. O programa entao compara quantos numeros o jogador acertou.
Em seguida, ele aloca espaco para um vetor de tamanho igual a quantidade de numeros
corretos e guarda os numeros corretos nesse vetor. Finalmente, o programa exibe os
numeros sorteados e os seus numeros corretos.*/
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#define tam 6
int main(int argc, char *argv[]){
    int i, j, h=0;
    int resultado_loto[tam];
    int jogo_loto[tam];
    int* numeros_certo; 
    int ncerto = 0;
    
    srand(time(NULL));

    for(i=0; i<tam; i++)//sorteia a loteria
        resultado_loto[i] = rand() % 100;

    printf("Digite os valores q vc jogou: ");
    for(i=0; i<tam; i++)//recebe a entrada do jogo do usuario
        scanf("%d", &jogo_loto[i]);
    
    for(i=0; i<tam; i++){//verifica se existem valores iguais
        for(j=0; j<tam; j++){
            if(jogo_loto[i] == resultado_loto[j])
                ncerto++;//conta as variaveis iguais
        }
    }

    printf("Resultado:\n");//escreve  o resultado correto
    for(i=0; i<tam; i++)
        printf("%d ", resultado_loto[i]);
    
    if(ncerto > 0){//verifica a existencia de numeros corretos   
    numeros_certo = (int*) calloc(ncerto, sizeof(int));//aloca o vetor para armazenar os numeros corretos
    
     for(i=0; i<tam; i++){//aloca os numeros corretos no vetor
        for(j=0; j<tam; j++){
            if(jogo_loto[i] == resultado_loto[j]){
                numeros_certo[h] = resultado_loto[j];
                h++;
            }
        }
    }
    printf("\nNumeros Corretos: \n");//escreve os numeros corretos
    for(i=0; i<ncerto; i++)
        printf("%d ", numeros_certo[i]);
    }else{//informa q não ha numeros corretos
        printf("\nNumeros Corretos: \n");
        printf("Nao existem numeros corretos");
    }



    return 0;
}