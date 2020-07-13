#include<stdio.h>
#include<stdlib.h>
int f(int);
int g(int);
void func1(int, int*, int*);
int func2(int);


int main(int argc, char *argv[]){
    int i, Fi, Gi;
    int n;
    while (1){
    printf("Digite i(menor que 1 para parar): ");
    scanf("%d", &i);
    
    if(i<1) 
        break;

    func1(i, &Fi, &Gi);

    printf("Fi: %d \nGi: %d", Fi,Gi);
    printf("\n-------\n");
    }
    while (1){
    printf("Digite n(menor que 2 para parar): ");
    scanf("%d", &n);
    
    if(n<3) 
        break;

    

    printf("Func2: %d", func2(n));
    printf("\n-------\n");
    }
        return 0;
}

int f(int i){
    if(i==1)
        return 2;
    else if(i==2)
        return 1;
    else
        return 2*f(i-1) + g(i-2);    
}
int g(int i){
    if(i==1)
        return 1;
    else if(i==2)
        return 2;
    else
        return g(i-1) + 3*f(i-2);    
}
void func1(int i, int *ptr1, int *ptr2){
/*  f1 = 2
    f2 = 1
    fi = 2*f(i-1) + g(i-2) i>3
    ----------------------
    g1 = 1
    g2 = 2
    gi = g(i-1) + 3*f(i-2) i>3
*/

    *ptr1 = f(i);
    *ptr2 = g(i);
}
int func2(int n){
    if(n>2)
        return f(n-2)+g(n+200);
    else
        return 0;
}
