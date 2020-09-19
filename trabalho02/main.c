#include"util.h"
#define num_contas 2
int main(int argc, char *argv[]){
    conta contas[num_contas];
    char escolha;
    float valor;
    int nconta, i, j, conta_maior_devedor = 0;
    float vet_investimento[num_contas];
    
    char c;
    char vet[20];
    int *vetlinhas;
    vetlinhas = calloc(100, sizeof(int));
    int maior_movimentacao=0, conta_maior_movimentacao=0, repcontas;
    int k = 0;    
    FILE *f;

    while(escolha != '0'){
        escolha = menu();
        descarregar(contas);
        switch (escolha){
            case '1':
                modif_contas(contas);
            break;
            case '2':
                ler_contas(contas);
            break;
            case 's':// para saque
                nconta = achar_conta(contas);
                while (1){            
                    printf("Valor do saque: ");
                    scanf("%f", &valor);
                    if(valor < contas[nconta].saldo_corrente){
                        contas[nconta].saldo_corrente -= valor;
                        printf("Voce sacou %.2f\nSeu saldo e %.2f\n", valor, contas[nconta].saldo_corrente);
                        break;
                    }else{
                        printf("O valor do saque e mt alto para seu saldo de conta\n");
                        printf("O seu saldo e: %.2f\n", contas[nconta].saldo_corrente);
                    }
                }
            break;
            case 'd':
                nconta = achar_conta(contas);
                printf("Valor do deposito: ");
                scanf("%f", &valor);
                contas[nconta].saldo_corrente += valor;
                printf("Voce depositou %f\nSeu saldo e: %f\n", valor, contas[nconta].saldo_corrente);
            break;
            case 'c':
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
            break;
            case 'i':
                nconta = achar_conta(contas);

                while (1){            
                    printf("Seu saldo da conta corrente e: %.2f\n", contas[nconta].saldo_corrente);
                        printf("Quanto deseja investir: ");
                    scanf("%f", &valor);
                    if(valor > contas[nconta].numero_da_conta){
                        printf("Seu saldo da conta corrente e insuficiente\n");
                    }else{
                        contas[nconta].saldo_corrente -= valor;
                        printf("Voce investiu %f\nSeu saldo e %f\n", valor, contas[nconta].saldo_corrente);
                        break;
                    }            
                }
            break;
            case 'e':
                nconta = achar_conta(contas);

                while (1){            
                    printf("Seu limite para emprestimos e: %.2f\n", contas[nconta].limite_emprestimo);
                    printf("Quanto deseja emprestar: ");
                    scanf("%f", &valor);
                    if(valor > contas[nconta].limite_emprestimo){
                        limite_estourado(contas[nconta], valor);
                    }
                    contas[nconta].limite_emprestimo -= valor;
                    contas[nconta].saldo_corrente += valor;
                    printf("Voce emprestou %.2f\nSeu limite para emprestimos e %.2f\n", valor, contas[nconta].limite_emprestimo);
                    printf("Saldo da conta corrente: %.2f\n", contas[nconta].saldo_corrente);
                    
                    break;
                }
            break;
            case '0':
                printf("\n--------Fechando sistema--------\n");
            break;
        }
        if(escolha != 1 && escolha != 2)        
            registro(contas[nconta], escolha, valor);
        carregar(contas);
    }
    //apresentar o(s)cliente(s) que possuemo maior volume de investimento no banco;
    descarregar(contas);
    for(i=0; i<num_contas; i++){
        vet_investimento[i] = contas[i].saldo_ivestimento;
        ordena_vet(vet_investimento);
    }
    ordena_vet(vet_investimento);
    printf("\n-----Relacao dos maiores investimentos-----\n");
    for(i=0; i<num_contas; i++){
        for(j=0; j<num_contas; j++){
            if(vet_investimento[i] == contas[j].saldo_ivestimento)
                printf("Conta %d ---- Investimento: %.2f\n", contas[i].numero_da_conta, contas[i].saldo_ivestimento);
        }    
    }
    //apresentar a relação de clientes que estão com o limite de empréstimo estourado;
    printf("\n-----limite estourado-----\n");
    for (i=0; i<num_contas; i++){
        if(contas[i].limite_emprestimo < 0)
            printf("conta:%d ---- limite:%.2f\n", contas[i].numero_da_conta, contas[i].limite_emprestimo);
    }    
    //apresentaro(s) cliente(s)  que estão com a conta negativa;
    for (i=0; i<num_contas; i++){
        if(contas[i].saldo_corrente < 0)
            printf("conta:%d ---- Saldo da conta corrente:%.2f\n", contas[i].numero_da_conta, contas[i].saldo_corrente);
    }
    //apresentar  o  cliente  com  maior  movimentação  realizada  no  período  (  débitos  + créditos).
    
    f = fopen("movimento.txt", "r");        
    while(!feof(f)){
        c = fgetc(f);
        if(c == ' '){
            j = 0;
            while(c != '\n'){
                c = fgetc(f);
                vet[j] = c;
                j++;
                if(c == '-'){
                    vetlinhas[k] = atoi(vet);
                    k++;
                    break;
                }                             
            }
        }
    }   
    fclose(f);
    for(i=0; i<num_contas; i++){
        repcontas=0;
        for(j=0; j<100; j++){
            if(contas[i].numero_da_conta == vetlinhas[j])
                repcontas++;
        }
        if(repcontas > maior_movimentacao){
            maior_movimentacao = repcontas;
            conta_maior_movimentacao = contas[i].numero_da_conta;
        }
    }
    printf("\nConta com maior numero de movimentacoes: %d\n", conta_maior_movimentacao);
    printf("Numero de movimentacoes: %d\n", maior_movimentacao);
        
    //apresentar o cliente com o maior saldo devedor no cartão de crédito.
    for(i = 0; i <num_contas; i++){
        if(contas[i].saldo_cartao < contas[conta_maior_devedor].saldo_cartao)
            conta_maior_devedor = i;
    }
    printf("\nMaior saldo negativo do cartao: \n");
    printf("Conta: %d ---- Saldo: %2.f\n", contas[i].numero_da_conta, contas[i].saldo_cartao);
    
    

    
    
    return 0;
}