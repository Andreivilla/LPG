/*Implemente uma função que calcule as raı́zes de uma equação do segundo grau do tipo
Ax² + Bx + C = 0. Lembrando que:
X = (−B ± √∆)/2A
Onde
∆ = B² − 4AC
A variável A tem que ser diferente de zero.
• Se ∆ < 0 não existe real.
• Se ∆ = 0 existe uma raiz real.
• Se ∆ ≥ 0 existem duas raı́zes reais.
Essa função deve obedecer ao seguinte protótipo:
int raizes(float A,float B,float C,float * X1,float * X2);
Essa função deve ter como valor de retorno o número de raı́zes reais e distintas da
equação. Se existirem raı́zes reais, seus valores devem ser armazenados nas variáveis
apontadas por X1 e X2.*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int raizes(float, float, float, float*,float*);
int main(int argc, char *argv[]){
    float a, b, c;
    float x1, x2;
    int nraizes;

    printf("Ax² + Bx + C = 0 \n");
    printf("A: ");
    scanf("%f",&a);
    printf("B: ");
    scanf("%f",&b);
    printf("C: ");
    scanf("%f",&c);

    printf("----------------------------\n");
    printf("%.2fx² + %.2fx + %.2f = 0 \n", a, b, c);
    printf("----------------------------\n");
    
    nraizes = raizes(a, b, c, &x1, &x2);

    printf("Raisez: %d\n", nraizes);

    if(nraizes == 1)
        printf("Raiz: (%.2f)", x1);
    else if(nraizes == 2)
        printf("Raizes: (%.2f, %.2f)\n", x1, x2);
    else
        return 0;

    return 0;
}
int raizes(float a,float b,float c,float * x1,float * x2){
    float delta;
    delta = pow(b,2) - 4*a*c;
    
    *x1 = (-b + sqrt(delta))/2*a;
    *x2 = (-b - sqrt(delta))/2*a;

    if(delta == 0)
        return 1;
    else if(delta < 0)
        return 0;
    else if(delta > 0)
        return 2;
}