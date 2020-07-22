#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
    int *p1,*p2,a;
    a=10;
    printf("endereco de a=%x\n",&a);
    p1=&a;printf("conteudodep1%x\n",p1);
    printf("endereco de p 1%x\n",&p1);
    printf("conteudoqueeapontadoporp1%x",*p1);
    p2=(int*)malloc(sizeof(int));
    *p2=*p1;
    printf("conteudodep2%x\n",p2);
    printf("enderecodep2%x\n",&p2);
    printf("conteudoqueeapontadoporp2%x",*p2);
    free(p1);
    free(p2);
    return 0;
}
