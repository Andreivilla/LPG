/*Considere a seguinte declaração: int A, *B, **C, ***D; Escreva um programa que leia a
variável a e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando apenas
os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C o triplo e D
o quádruplo.*/
#include<stdlib.h>
#include<stdio.h>
int main(int argc, char *argv[]){
    int A, *B, **C, ***D;

    scanf("%d",&A);

    B = &A;
    C = &B;
    D = &C;

    printf("%d\n", (*B)*2);
    printf("%d\n", (**C)*3);
    printf("%d\n", (***D)*4);
    
    return 0;
}