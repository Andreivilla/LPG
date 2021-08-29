#include <stdio.h>
#include <stdlib.h>
int *uniao(int *v1, int n1, int *v2, int n2, int *p3 );
void printa_vetor(int *vet, int tam);

int main(int argc, char *argv[]) {
    int *v1, *v2, *v3;
    int n1, n2, n3;//capacidade dos vetores
    int i; 
    printf("digite a capacidade dos vetores\n");
    scanf("%i", &n1);
    scanf("%i", &n2);
    v1 = (int*) calloc(n1,sizeof(int));
    v2 = (int*) calloc(n2,sizeof(int));
    for(i=0;i<n1;i++)
        scanf("%i", &v1[i]);

    for(i=0;i<n2;i++)
        scanf("%i", &v2[i]);

    printa_vetor(v1, n1);
    printf("\n");
    printa_vetor(v2, n2);

    v3 = uniao(v1, n1, v2, n2, &n3);

    printf("\nTamanho do vetor: %i\n", n3);
    printa_vetor(v3, n3);

    return 0;
}
int *uniao(int *v1, int n1, int *v2, int n2, int *p3 ){
    int i;
    *p3 = n1+n2;
    int *k = (int*) calloc(*p3, sizeof(4));
    
    for(i=0;i<n1;i++){
        k[i] = v1[i];
    }
    for(i=0;i<n2;i++){
        k[i+n1] = v2[i];
    }
    return k;
}
void printa_vetor(int *vet, int tam){
    int i;
    for(i=0; i<tam; i++)
        printf("%i\t", vet[i]);
}