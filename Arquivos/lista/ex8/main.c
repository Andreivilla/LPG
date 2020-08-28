/*Faça um programa que receba do usuário um arquivo 
texto e um caracter. Mostre na tela  quantas vezes 
aquele caractere ocorre dentro do arquivo.*/
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
    FILE *f;
    int cont = 0;
    char n, c;

    scanf("%c", &n);

    f = fopen("arq.txt", "r");
    
    while(!feof(f)){
        c = fgetc(f);
        if(c == n)
            cont++;

    }

    printf("\nO caracter repete: %d\n", cont);

    fclose(f);
    
    return 0;
}