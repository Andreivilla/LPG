/*Faça um programa que armazene em um registro de dados (estrutura composta) 
os dados de um funcionário de uma empresa, compostos de: 
Nome, Idade, Sexo (M/F), CPF, Data de Nascimento, 
Codigo do Setor onde trabalha (0-99), Cargo que ocupa (string de ate 30 caracteres) e 
Salario. Os dados devem ser digitados pelo usuário, armazenados na estrutura e exibidos na tela.*/
#include<stdlib.h>
#include<stdio.h>
typedef struct{
    char nome[100];
    int idade; 
    char sexo; //(M/F)
    char cpf[12];
    char data_de_nascimento[10]; 
    int codigoSetor;
    char cargo[30];
}dados;

int main(int argc,char *argv[]){
    dados funcionario;
    printf("-----Dados do funcionario-----");
    
    printf("Nome: ");
    scanf("%s", &funcionario.nome);
    
    printf("Idade: ");
    scanf("%d", &funcionario.idade);

    printf("Sexo: ");
    scanf("%c", &funcionario.sexo);

    printf("Cpf: ");
    scanf("%s", &funcionario.cpf);

    printf("Data de nascimento: ");
    scanf("%s", &funcionario.data_de_nascimento);

    printf("Codigo do setor: ");
    scanf("%d", &funcionario.codigoSetor);

    printf("Cargo: ");
    scanf("%s", &funcionario.cargo);



    return 0;
}