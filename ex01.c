#include<stdlib.h>
#include<stdio.h>
#include<math.h>
typedef struct{
    int x;
    int y;
}ponto;

int main(int argc, char *argv[]){
    ponto p1, p2;
    float distancia;

    printf("p1: \n");
    printf("x: ");
    scanf("%d", &p1.x);
    printf("y: ");
    scanf("%d", &p1.y);

    printf("p2: \n");
    printf("x: ");
    scanf("%d", &p2.x);
    printf("y: ");
    scanf("%d", &p2.y);

    distancia = (float) sqrt(pow((p1.x - p2.x),2) + pow((p1.y - p2.y),2));

    printf("Distancia: %f\n", distancia);

    return 0;
}