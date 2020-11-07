/*Faça um programa que possua uma função para
• ler 2 notas e retorná-las por parâmetro (chamar uma função dedicada a ler 2 notas
válidas e que devolver os 2 números lidos);
• calcular a média simples e a média ponderada e retorná-las por parâmetro, onde a
segunda nota tem peso 2 media ponderada = (n1 + n2 ∗ 2)/3;*/
#include<stdio.h>
#include<stdlib.h>
void media_simples(float, float, float*);
void media_ponderada(float, float, float*);
void ler_notas(float*, float*);
int main(int argc, char *argv[]){
    float nota1, nota2;
    float mediaS, mediaP;

    ler_notas(&nota1, &nota2);//chamar funcao para ler notas
    media_simples(nota1, nota2, &mediaS);//calcularr media simples
    media_ponderada(nota1, nota2, &mediaP);//clacluar media ponderada

    //printar resultados
    printf("Media simples: %.2f\n", mediaS);
    printf("Media ponderada: %.2f\n", mediaP);

    return 0;
}
void ler_notas(float* n1, float* n2){
    while(1){//loop verificar validade da nota
    printf("Ler primeira nota(0 a 10): ");
    scanf("%f",n1);
    if(*n1>10 || *n1<0)//se nota for maior que  10 ou menor que zero
        printf("--NOTA INVALIDA-- \n");//printar aviso de erro
    else
        break;//parar loop    
    }

    while(1){//loop verificar validade da nota
    printf("Ler segunda nota(0 a 10): ");
    scanf("%f",n2);
    if(*n2>10 || *n2<0)//se nota for maior que  10 ou menor que zero
        printf("--NOTA INVALIDA-- \n");//printar aviso de erro
    else
        break;//parar loop    
    }    
}
void media_simples(float n1, float n2, float* media){
    *media = (n1+n2)/2;
}
void media_ponderada(float n1, float n2, float* media){
    *media = (n1+n2*2)/3;
}