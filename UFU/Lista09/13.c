/*Elabore uma função que receba duas strings como parâmetros e verifique se a segunda
string ocorre dentro da primeira. Use aritmética de ponteiros para acessar os caracteres
das strings.*/
#include<stdio.h>
#include<stdlib.h>
#define tam1 10
#define tam2 20
void ocorre(char*, char*);
int main(int argc, char *argv[]){
    char str1[tam1];
    char str2[tam2];

    scanf("%s", &str1);

    scanf("%s", &str2);
    ocorre(str2,str1);
    return 0;
}
void ocorre(char* a, char* b){
    int i, j;
    int char_igual=0;
    for(i=0; i<tam2; i++){
        if(a[i]==b[0]){
            for(j=0; j<tam1; j++){
                if(a[i+j]==b[j])
                    char_igual++;
            }
        }
    }
    if(char_igual==tam1)
        printf("esta contindo\n");
    else
    printf("não esta contido\n");
}