/*Escreva um programa que contenha duas variáveis inteiras.
Compare seus endereços e exiba o maior endereço.*/
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
    int n1, n2;

    if(&n1>&n2)
        printf("%p\n", &n1);
    else
        printf("%p\n", &n2);   

    return 0;
}