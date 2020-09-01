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
    
    f = fopen("contas.bin", "wb");

    for(i=0; i<num_contas; i++){
        printf("\n-----Conta %d: -----\n", i);
        printf("Numero da conta: ");
        scanf("%d", &contas[i].numero_da_conta);
        printf("Nome do cliente: ");
        scanf("%s", contas[i].nome_do_clinte);fflush(stdin);
        printf("Saldo da conta corrente: ");
        scanf("%f", &contas[i].saldo_corrente);
        printf("Tipo do cartao(0:nao possui, 1:cartao TIPO1, 2:cartao TIPO2): ");
        scanf("%d", &contas[i].tipo_cartao);
        printf("Limite do cartao: ");
        scanf("%f", &contas[i].limite_cartao);
        printf("Saldo do cartao: ");
        scanf("%f", &contas[i].saldo_cartao);
        printf("Saldo invetimento: ");
        scanf("%f", &contas[i].saldo_ivestimento);
        fwrite(&contas[i], sizeof(conta), 1, f);
    }

    fclose(f);


    return 0;
}