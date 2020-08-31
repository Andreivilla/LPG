/*Abra um arquivo texto, calcule e escreva o numero 
de caracteres, o número de linhas e o numero de palavras  
neste arquivo. Escreva também quantas vezes cada letra 
ocorre no arquivo (ignorando letras com acento). Obs.: 
palavras são separadas por um ou mais caracteres espaço, 
tabulação ou nova linha.*/
#include<stdio.h>
#include<stdlib.h>
int if_letra(char c);
int main(int argc, char *argv[]){
    int linha=1, letra=0, palavra=0;
    FILE *f;
    char c;

    f = fopen("arq.txt", "r");
    while(!feof(f)){
        c = fgetc(f);
        if(c == ' ')
            palavra++;
        if(c == '\n')
            linha++;
        if(if_letra(c) == 1)
            letra++;
    }
    
    printf("Numero de palavras: %d\n", palavra);
    printf("Numero de linhas: %d\n", linha);
    printf("Numero de letras: %d\n", letra);

    fclose(f);
    return 0;
}
int if_letra(char c){
    char *letras;
    int i;
    letras = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(i=0; i<52; i++){
        if(letras[i] == c)
        return 1;
    }
    return 0;
}