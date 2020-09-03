#include<stdio.h>
#include<stdlib.h>
#include"util.h"
#define num_contas 2
int main(int argc, char *argv[]){
    FILE *f;
    conta contas[num_contas];
    char escolha;
    float valor;
    int nconta;
    


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
            break;
        case 's':// para saque
            descarregar(contas);
            nconta = achar_conta(contas);
            while (1){            
                printf("Valor do saque: ");
                scanf("%f", &valor);
                if(valor < contas[nconta].saldo_corrente){
                    contas[nconta].saldo_corrente -= valor;
                    printf("Voce sacou %.2f\nSeu saldo e %.2f", valor, contas[nconta].saldo_corrente);
                    break;
                }else{
                    printf("O valor do saque e mt alto para seu saldo de conta\n");
                    printf("O seu saldo e: %.2f\n", contas[nconta].saldo_corrente);
                }
            }
            f = fopen("movimento.txt", "a");
            fprintf(f,"Conta: %d ---- Sacou: %f\n", contas[nconta].numero_da_conta, valor);
            fclose(f);
            carregar(contas);
        break;
        case 'd':
            descarregar(contas);
            nconta = achar_conta(contas);
            printf("Valor do deposito: ");
            scanf("%f", &valor);
            contas[nconta].saldo_corrente += valor;
            printf("Voce depositou %f\nSeu saldo e: %f", valor, contas[nconta].saldo_corrente);

            f = fopen("movimento.txt", "a");
            fprintf(f,"Conta: %d ---- Depositou: %f\n", contas[nconta].numero_da_conta, valor);
            fclose(f);
            carregar(contas);
        break;
        case 'c':
            descarregar(contas);
            nconta = achar_conta(contas);
            while(1){
                printf("Valor do credito usado: ");
                scanf("%f", &valor);
                if(valor > contas[nconta].saldo_cartao){
                    printf("Seu saldo é insuficiente\n");
                    printf("Seu saldo é: %.2f\n", contas[nconta].saldo_cartao);
                }else{
                    contas[nconta].saldo_cartao -= valor;
                    printf("Vc usou: %.2f\n", valor);
                    printf("Seu saldo decredito e: %.2f\n", contas[nconta].saldo_cartao);
                    break;
                }
            }
            f = fopen("movimento.txt", "a");
            fprintf(f,"Conta: %d ---- Usou credito: %f\n", contas[nconta].numero_da_conta, valor);
            fclose(f);
            carregar(contas);
        break;
        case 'i':
            descarregar(contas);
            nconta = achar_conta(contas);

            while (1){            
                printf("Seu saldo da conta corrente e: %.2f\n", contas[nconta].saldo_corrente);
                printf("Quanto deseja investir: ");
                scanf("%f", &valor);
                if(valor > contas[nconta].numero_da_conta){
                    printf("Seu saldo da conta corrente e insuficiente\n");
                }else{
                    contas[nconta].saldo_corrente -= valor;
                    printf("Voce investiu %f\nSeu saldo e %f", valor, contas[nconta].saldo_corrente);
                    break;
                }            
            }
            f = fopen("movimento.txt", "a");
            fprintf(f,"Conta: %d ---- Investiu: %f\n", contas[nconta].numero_da_conta, valor);
            fclose(f);
            carregar(contas);
        break;
        case 'e':
            descarregar(contas);
            nconta = achar_conta(contas);

            while (1){            
                printf("Seu limite para emprestimos e: %.2f\n", contas[nconta].limite_emprestimo);
                printf("Quanto deseja emprestar: ");
                scanf("%f", &valor);
                if(valor > contas[nconta].limite_emprestimo){
                    printf("Voce não tem limite para esse emprestimo\n");
                    printf("Seu limite para emprestimos e: %.2f\n", contas[nconta].limite_emprestimo);
                }else{
                    contas[nconta].limite_emprestimo -= valor;
                    printf("Voce emprestou %f\nSeu limite para emprestimos e %f", valor, contas[nconta].limite_emprestimo);
                    break;
                }            
            }
            f = fopen("movimento.txt", "a");
            fprintf(f,"Conta: %d ---- Emprestou: %f\n", contas[nconta].numero_da_conta, valor);
            fclose(f);
            carregar(contas);
        break;
    }




    return 0;
}
