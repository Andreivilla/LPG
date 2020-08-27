/*Escreva um programa que leia duas strings str1 e str2
via interação com o usuário e as concatene usandoa função
de concatenação de strings. Imprima a string concatenada e  
grave  a  string  em  um  arquivo.  Lembre-se  que  a  string  
pode  conter  caracteresbrancos.char* 
concat(char* str1, char* str2, int* tam_str3);*/
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
    int i;
    FILE *f;

    scanf("%s", str1);
    scanf("%s", str2);

    concat(str1, str2, str3);

    f = fopen("arq.txt", "w");
    for(i=0; i<strlen(str3); i++)
        fputc(str3[i], f);
    int fclose(FILE *f);

    return 0;
}
void concat(char *str1, char *str2, char *str3){
    strcat(str3, strcat(str1, str2));
}