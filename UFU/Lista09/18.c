/*Implemente uma função que calcule a área da superfı́cie e o volume de uma esfera de
raio R. Essa função deve obedecer ao protótipo:
void calc_esfera(float R, float *area, float *volume)
A área da superfı́cie e o volume são dados, respectivamente, por:
A = 4 ∗ p ∗ R^2
V = 4/3 ∗ p ∗ R^3*/
#include<stdlib.h>
#include<stdio.h>
#define pi 3.1141592653589793238
void calc_esfera(float, float* , float*);
int main(int argc, char *argv[]){
    float r;
    float area;
    float volume;

    scanf("%f", &r);

    calc_esfera(r, &area, &volume);

    printf("Area: %f\n", area);
    printf("Volume: %f\n", volume);

    return 0;
}
void calc_esfera(float r, float *area, float *volume){
    *area = 4*pi*(r*r);
    *volume = (4/3)*pi*(r*r*r);
}