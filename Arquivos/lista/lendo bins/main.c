#include<stdio.h>
#include<stdlib.h>
#define tam 2

typedef struct{
    char nome[40];
    int idade;
}pessoa;

int main(int argc, char *argv[]){
    FILE *f;
    pessoa pessoas[tam];
    int i;

    /*f = fopen("teste.bin", "wb");

    for(i=0; i<tam; i++){
        printf("nome da pessoa %d: ", i+1);
        scanf("%s", pessoas[i].nome);
        fflush(stdin);
        printf("Idade da pessoa %d: z", i+1);
        scanf("%d", &pessoas[i].idade);
        fwrite(&pessoas[i], sizeof(pessoa), i, f);
    }    
    fclose(f);*/
    
    f = fopen("teste.bin", "rb");

    for(i=0; i<tam;i++){
        fread(&pessoas[i], sizeof(pessoa), tam, f);
        printf("nome: %s\n", pessoas->nome);
        printf("Idade: %d\n", pessoas->idade);
    }

    fclose(f);

    return 0;
}