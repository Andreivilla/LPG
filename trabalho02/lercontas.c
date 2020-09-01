#include<stdio.h>
#include<stdlib.h>
#define num_contas 2
typedef struct{
    int numero_da_conta;
    char nome_do_clinte[10];
    float saldo_corrente;
    int tipo_cartao;//(0 –não possui; 1:cartão TIPO1; 2: cartão TIPO2)
    float limite_cartao;
    float saldo_cartao;
    float saldo_ivestimento;
}conta;

int main(int argc, char *argv[]){
    FILE *f;
    int i;
    conta contas[num_contas];
    
    f = fopen("contas.bin", "rb");
    fread(contas, sizeof(conta), num_contas, f);
    for(i=0; i<num_contas; i++){
        printf("\n-----Conta %d: -----\n", i);
        printf("Numero da conta: %d\n", contas[i].numero_da_conta);
        printf("Nome do cliente: %s\n", contas[i].nome_do_clinte);
        printf("Saldo da conta corrente: %f\n", contas[i].saldo_corrente);
        printf("Tipo do cartao: %d\n", contas[i].tipo_cartao);
        printf("Limite do cartao: %f\n", contas[i].limite_cartao);
        printf("Saldo do cartao: %f\n", contas[i].saldo_cartao);
        printf("Saldo invetimento: %f\n", contas[i].saldo_ivestimento);
    }   
    
    fclose(f);

    return 0;
}