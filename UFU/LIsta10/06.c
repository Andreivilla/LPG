/*Faca um programa que simule a memoria de um computador: o usuario ira especificar o
tamanho da memoria, ou seja, quantos bytes serao alocados do tipo inteiro. Para tanto,
a memoria solicitada deve ser um valor multiplo do tamanho do tipo inteiro. Em seguida,
o usuario tera 2 opcoes: inserir um valor em uma determinada posicao ou consultar o
valor contido em uma determinada posicao. A memoria deve iniciar com todos os dados
zerados.*/
#include<stdlib.h>
#include<stdio.h>
int main(int argc, char *argv[]){
    int n;
    int* vet;
    int op, pos;

    printf("Digite o tamanho da memoria: ");
    scanf("%d", &n);

    vet = (int*) calloc(n, sizeof(int));

    while(1){
        printf("\n1- Inserir um valor \n2- Consultar um valor \n3- Encerrar o programa \nOque fzr: ");
        scanf("%d", &op);
        printf("\n");

        switch (op)
        {
        case 1:
            printf("Posicao a modificar: ");
            scanf("%d", &pos);
            printf("Valor a adicionar: ");
            scanf("%d", &vet[pos]);
            break;
        case 2:
            printf("Qposicao mostrar: ");
            scanf("%d", &pos);
            printf("Posicao %d: %d\n", pos, vet[pos]);
            break;
        case 3:
            printf("Fim do programa");
            return 0;
        default:
            printf("Opcao invalida\n");
            break;
        }
    }

    return 0;
}