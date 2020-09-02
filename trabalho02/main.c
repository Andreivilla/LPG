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
int main(int argc, char *argv[]){
    FILE *f;
    conta contas[num_contas];
    char escolha;
    float valor_saque;
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
                scanf("%f", &valor_saque);
                if(valor_saque < contas[nconta].saldo_corrente){
                    contas[nconta].saldo_corrente -= valor_saque;
                    printf("Voce sacou %.2f, seu saldo e %.2f", valor_saque, contas[nconta].saldo_corrente);
                    break;
                }else{
                    printf("O valor do saque e mt alto para seu saldo de conta\n");
                    printf("O seu saldo e: %.2f\n", contas[nconta].saldo_corrente);
                }
            }
            f = fopen("movimento.txt", "a");
            fprintf(f,"Conta: %d ---- Sacou: %f\n", contas[nconta].numero_da_conta, valor_saque);
            fclose(f);
            carregar(contas);
        break;
    }




    return 0;
}
