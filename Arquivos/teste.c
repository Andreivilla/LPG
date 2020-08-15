#include<stdio.h>
#include<stdlib.h>

char remover(char);

int main(void) {
    int i;
    char text[1010] = {"Como funcionam os Ponteiros: os ints guardam inteiros. Os floats guardam números de ponto flutuante. Os chars guardam caracteres. Ponteiros guardam endereços de memória. Quando você anota o endereço de um colega você está criando um ponteiro. O ponteiro é seu pedaço de papel. Ele tem anotado um endereço. Qual é o sentido disto? Simples. Quando você anota o endereço de um colega, depois você vai usar este endereço para achá-lo. O C funciona assim. Você anota o endereço de algo numa variável ponteiro para depois usar. Da mesma maneira, uma agenda, onde são guardados endereços de vários amigos, poderia ser vista como sendo uma matriz de ponteiros no C. Um ponteiro também tem tipo. Veja: quando você anota um endereço de um amigo você o trata diferente de quando você anota o endereço de uma firma. Apesar de o endereço dos dois locais ter o mesmo formato (rua, número, bairro, cidade, etc.) eles indicam locais cujos conteúdos são diferentes. Então os dois endereços são ponteiros de tipos diferentes."};

    for(i=0; i<1010; i++)
        text[i] = remover(text[i]);

    printf("------- texto sem pontos -------\n");
    printf("%s", text);

    return 0;
}
char remover(char a){
    if(a=='?' || a=='(' || a==')' || a==',' || a=='.' || a==':' || a=='?' || a=='!' || a==',' || a==';')
        return ' ';
    else 
        return a;
}