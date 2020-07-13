#include<stdlib.h>
#include<stdio.h>
#define Stam 100 //definir tamanho padrão para strings

typedef struct{
    char email[Stam];
    //Endereco
    char rua[Stam];
    char numero[Stam];
    char complemento[Stam];
    char bairro[Stam];
    char cep[Stam];
    char cidade[Stam];
    char estado[Stam];
    char pais[Stam];
    //numero
    char ddd[2];
    char numero[9];
    //animervario
    int dia;
    int mes;
    int ano;
    char observacoes[Stam];
}dados;

int main(int argc, char *argv[]){
    dados agenda[100];    









    return 0;
}
