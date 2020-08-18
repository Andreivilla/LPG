#include<stdio.h>
#include<string.h>
int main(){
    FILE*arqAnt;
    FILE*arqNovo;
    char nome[32];/*nomedoaniversariante(máximo=30caracteres)*/
    char data[7];/*datadoaniversário(5caracteres)*/
    char resp;/*auxiliardowhile*//*abriroarquivooriginalparaleitura*/
    if(!(arqAnt=fopen("C:\\...\\teste1.txt","r"))){
        printf("Não foi possível abrir o arquivo teste1.txt\n");
        exit(1);
        }/*crio o arquivo auxiliar*/
    if(!(arqNovo=fopen("C:\\...\\aux1.txt","w"))){
        printf("Não foi possível criar o arquivo auxiliar\n");\
        exit(1);}/*corrooarquivooriginal*/
    while(!feof(arqAnt)){/*leioonomedoarquivo*/
        if(!fgets(nome,32,arqAnt)&&!feof(arqAnt)){
            return(0);}/*leroaniversáriodoarquivo*/
        if(!fgets(data,7,arqAnt)&&!feof(arqAnt)){
            return(0);
    }/*continuanaproximapagina*/