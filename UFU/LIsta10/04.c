/*Faça um programa que receba do usuário o tamanho de uma 
string e chame uma função para alocar dinamicamente essa string.
Em seguida, o usuário deverá informar o conteúdo dessa string. 
O programa imprime a string sem suas vogais.*/
#include<stdlib.h>
#include<stdio.h>
#define tam 20
//aeiou
void retirar_vogais(char*, int);
int main(int argc, char *argv[]){
    char* string;

    string = (char*) calloc(tam,sizeof(char));

    printf("Digite a string: ");
    scanf("%s", string);

    //retirar_vogais(string,tam);

    printf("%s\n", string);

    return 0;
}
void retirar_vogais(char* str, int n){
    int i, j;

    for(i = 0; i<n; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o'|| str[i] == 'u'){
            for(j=i; j<tam; j++)
                str[j] = str[j+1];
        }
    }
}