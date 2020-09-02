/*Movimento:contém os registrosde movimentações feitas 
(depósitos ou saques) 
emcontas bancárias. Cada registro armazena as seguintes informações sobre 
uma movimentação: 
número da conta movimentada, 
tipo da movimentação 
(um caractere, podendo ser ‘S’ para saque ou
‘D’ para depósito, 
ou‘C’ para credito via cartão de credito, 
ou ‘I’ para investimento,
ou ’E’para empréstimo) 
e o respectivo valor damovimentação (valor real).O empréstimo sóserá concedido 
ao cliente se ele tiver ainda limite disponível.Se não tiver limite disponível, 
ocliente deverá ser cadastrado no arquivo limite_estourado*/
#include<stdio.h>
#include<stdlib.h>
#include"util.h"
#define num_contas 2
void descarregar(conta*);
void carregar(conta *a);
int main(int argc, char *argv[]){
    //FILE *f;
    conta contas[num_contas];
    char escolha; 

    printf("Oque voce deseja fzr:\n");
    printf("1- Modificar todas as contas\n2- listar todas as contas\n");
    printf("s- Realizar saque\nd- Fazer um deposito\nc- credito via cartao\n");
    printf("i- Realizar um investimento\ne- pedir emprestimo\n");
    scanf("%c", &escolha);fflush(stdin);
        
    switch (escolha){
        case '1':
            descarregar(contas);
            modif_contas(contas);
            carregar(contas);
            break;
        case '2':
            descarregar(contas);
            ler_contas(contas);
        case 's':// para saque 
        break;
    }




    return 0;
}
void descarregar(conta *a){
    FILE *file = fopen("contas.bin", "rb");
    fread(a, sizeof(conta), num_contas, file);
    fclose(file);
}
void carregar(conta *a){
    int i;
    FILE *file = fopen("contas.bin", "wb");
    for(i=0; i<num_contas; i++)
        fwrite(&a[i], sizeof(conta), 1, file);
    fclose(file);
}