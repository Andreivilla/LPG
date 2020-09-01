/*Movimento:contém os registrosde movimentações feitas (depósitos ou saques) 
emcontas bancárias. Cada registro armazena as seguintes informações sobre 
uma movimentação: número da conta movimentada, tipo da movimentação 
(um caractere, podendo ser ‘S’ para saque ou‘D’ para depósito, ou‘C’ para 
credito via cartão de credito, ou ‘I’ para investimento,ou ’E’para empréstimo) 
e o respectivo valor damovimentação (valor real).O empréstimo sóserá concedido 
ao cliente se ele tiver ainda limite disponível.Se não tiver limite disponível, 
ocliente deverá ser cadastrado no arquivo limite_estourado*/
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
void lista_contas(conta*, int);
int main(int argc, char *argv[]){
    FILE *f;
    conta contas[num_contas];
    f = fopen("contas.bin", "rb");
    fread(contas, sizeof(conta), num_contas, f);
    fclose(f);
    
    lista_contas(contas, num_contas);




    return 0;
}
void lista_contas(conta *a, int n){
    int i;
    for(i=0; i<n; i++){
        printf("\n-----Conta %d: -----\n", i);
        printf("Numero da conta: %d\n", a[i].numero_da_conta);
        printf("Nome do cliente: %s\n", a[i].nome_do_clinte);
        printf("Saldo da conta corrente: %f\n", a[i].saldo_corrente);
        printf("Tipo do cartao: %d\n", a[i].tipo_cartao);
        printf("Limite do cartao: %f\n", a[i].limite_cartao);
        printf("Saldo do cartao: %f\n", a[i].saldo_cartao);
        printf("Saldo invetimento: %f\n", a[i].saldo_ivestimento);
    }
}