#include<stdio.h>
#include<stdlib.h>
#define linha 5
#define coluna 8
void func(int*);
int main(int argc, char *argv[]){
    int mat[linha][coluna] = {{0,-1,0,-1,-1,0,-1,0},{0,0,0,0,-1,0,0,0},{0,0,-1,-1,0,0,-1,0},{-1,0,0,0,0,-1,0,0},{0,0,-1,0,0,0,-1,-1}};
    int i, j, x;
    int count = 0;
    int count_palavras = 0;

    printf("Matriz original:\n");
    for(i=0; i<linha; i++){
        for (j=0; j<coluna; j++){
            printf("%d   ", mat[i][j]);
        }
        printf("\n");        
    }
    printf("\n-----------------\n");

    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++){
            
            if((j+1) > coluna || (i+1) > linha)
                break;

            if(mat[i][j] != 0)
                continue;

            count = 0;
            for(x=i; x>0; x--){
                if(mat[x][j] == -1)
                    break;
                if(mat[x][j] != 0)
                    count++;
            }
            if(count == 0){
                if(mat[i+1][j] == 0){
                    count_palavras++;
                    mat[i][j] = count_palavras;
                }
            }            

            count = 0;
            for(x=j; x>0; x--){
                if(mat[i][x] == -1)
                    break;
                if(mat[i][x] != 0)
                    count++;
            }
            if(count == 0){
                if(mat[i][j+1] == 0){
                    count_palavras++;
                    mat[i][j] = count_palavras;
                }
            } 




            /*if(mat[i][j] == 0){
                if(mat[i][j+1] == 0 || mat[i+1][j] == 0){
                    count_palavras++;
                    mat[i][j] = count_palavras;
                }
            }*/
        }
    }

    for(i=0; i<linha; i++){
        for (j=0; j<coluna; j++){
            printf("%d   ", mat[i][j]);
        }
        printf("\n");        
    }

        return 0;
}