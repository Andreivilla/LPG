/*Escreva um programa que contenha duas variáveis inteiras. 
Leia essas variáveis do teclado. 
Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.*/
#include<stdlib.h>
#include<stdio.h>
int main(int argc, char *argv[]){
    int n1, n2;

    scanf("%d", &n1);
    scanf("%d", &n2);

    if(&n1>&n2)
        printf("%p\n", &n1);
    else
        printf("%p\n", &n2);   

    return 0;
}