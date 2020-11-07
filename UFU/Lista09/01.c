/* Escreva um programa que declare um inteiro, um real e um char, 
e ponteiros para inteiro, real, e char. Associe as variaveis aos ponteiros (use &).
Modifique os valores decada variavel usando os ponteiros.
Imprima os valores das variaveis antes e apos amodificacao.*/
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
    int inteiro = 0;
    int *ptrint;
    float real = 1.0;
    float *ptrfloat;
    char caracter = 'a';
    char *ptrchar;

    ptrint = &inteiro;
    ptrfloat = &real;
    ptrchar = &caracter;

    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caracter: %c\n", caracter);

    *ptrint = 90;
    *ptrfloat = 9,998;
    *ptrchar = 'b';

    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caracter: %c\n", caracter);
    
    return 0;
}