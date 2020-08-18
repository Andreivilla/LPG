//Andrei Antonio Villa
//Hugo Andreas Albrecht
#include<stdio.h>
#include<stdlib.h>
int f(int);//funcao f
int g(int);//funcao g
void func1(int, int*, int*);//essa função recebedosi ponteirospara retornar g(i) e f(i)
int func2(int);
int func3(int);
void printmatriz(int*, int);//funcao recebe o ponteiro da matriz, e um valor para printar 2 ou 3 linhas

int main(int argc, char *argv[]){
    int i, fi, gi;
    int n;
    int mat[3][7];
    int *ptrmat;
    ptrmat = &mat[0][0];

    printf("\n-----Func1-----\n");
    for(i=0; i<7; i++){//for para aplicar 7 valores a i
        func1((i+1), &fi, &gi);//(i+0) pq i na função não pode ser iniciado em zero
        *(ptrmat+i) = fi;//alcula f(i) e retorna para a primeira linha da matriz
        *(ptrmat+i+7) = gi;//calcula g(i) e retorna para a segunda linha da matriz(+7)
    }

    printmatriz(ptrmat, 2);

    printf("\n-----Func2-----\n");
    printf("n: ");
    scanf("%d", &n);//recebe n e aplica na funcao 2
    printf("%d", func2(n));
    
    printf("\n-----Func3-----\n");
    for(i=0; i<7; i++)
        *(ptrmat+i+14) = func3(i+1);// aplica a funcao 3 na 3a linha da matriz
    printmatriz(ptrmat, 3);
        return 0;
}

int f(int i){// funcao f
    if(i==1)
        return 2;
    else if(i==2)
        return 1;
    else
        return 2*f(i-1) + g(i-2);    
}
int g(int i){// funcao g
    if(i==1)
        return 1;
    else if(i==2)
        return 2;
    else
        return g(i-1) + 3*f(i-2);    
}
void func1(int i, int *ptr1, int *ptr2){

    *ptr1 = f(i);
    *ptr2 = g(i);
}
int func2(int n){
    if(n>2)
        return f(n-2)+g(n+20);//na formula o valor de incremento de n é +20 porem isso é mt longo para ser calculado então apliquei 20
    else
        return 0;
}
int func3(int i){
    int fi, gi;

    func1(i, &fi, &gi);

    return fi + gi;
}
void printmatriz(int *ptr, int linhas){
    int i;
    
    if(linhas==2){
        for(i=0; i<7; i++){//escrever a primeira linha
            printf("%d  ", *(ptr+i));
        }
        printf("\n");//pular linha
        for(i=0; i<7; i++){//escrever a segunda linha
            printf("%d  ", *(ptr+i+7));
        }
    }else if(linhas==3){
        for(i=0; i<7; i++){//escrever a primeira linha
            printf("%d  ", *(ptr+i));
        }
        printf("\n");//pular linha
        for(i=0; i<7; i++){//escrever a segunda linha
            printf("%d  ", *(ptr+i+7));
        }
        printf("\n");
        for(i=0; i<7; i++){//escrever a terceira linha
            printf("%d  ", *(ptr+i+14));
        }
    }
}