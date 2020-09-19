#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include"util.h"
int main(int arc, char *argv[]){
    FILE *f;
    int i, j=0;
    char c;
    char vet[30];
    //char *vet;
    int vetint[6];
    //vet = calloc(100, sizeof(char));

    f = fopen("movimento.txt", "r");
    
        
    while(!feof(f)){
        c = fgetc(f);
        if(c == ' '){
            i = 0;
            while(c != '\n'){
                c = fgetc(f);
                vet[i] = c;
                i++;
                if(c == '-'){
                    vetint[j] = atoi(vet);
                    j++;
                    break;
                }                                    
            }
        }
    }
    fclose(f);
    for(i=0; i<6; i++)
        printf("%d\n", vetint[i]);

    return 0;
}

