#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define tam 100
void concat(char*, char*, char*);
int main(int argc, char *agr[]){
    char str1[tam];
    char str2[tam];
    char str3[tam];
    char nome_arquivo[tam];
    int i;
    FILE *f;

    printf("Nome do arquivo: ");
    scanf("%s", nome_arquivo);

    printf("Digite duas strings: \n");
    scanf("%s", str1);
    scanf("%s", str2);

    concat(str1, str2, str3);

    f = fopen(nome_arquivo, "w");
    for(i=0; i<strlen(str3); i++)
        fputc(str3[i], f);
    int fclose(FILE *f);

    return 0;
}
void concat(char *str1, char *str2, char *str3){
    strcat(str3, strcat(str1, str2));
}