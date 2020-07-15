#include<stdio.h>
#include<stdlib.h>
#define x 3 
void func01(int*, int*);
void printmatriz(int*);
int main(int argc, char *argv[]){
    int mat1[x][x] = {{1,2,3},{4,5,6},{7,8,9}};
    int mat2[x][x] = {{1,2,3},{4,5,6},{7,8,9}};
    int *ptr1;
    int *ptr2;
    ptr1 = &mat1[0][0];
    ptr2 = &mat2[0][0];

    func01(ptr1, ptr2);

    return 0;
}
void func01(int *ptra, int *ptrb){
    int i;
    int mat[x][x];
    int *ptrmat;
    ptrmat = &mat[0][0];

    for(i=0; i<9; i++)
        *(ptrmat+i) = (*(ptra+i)-*(ptrb+i));
    
    printmatriz(ptrmat);

}
void printmatriz(int *ptr){
    int i;
        for(i=0; i<(x*x); i++){
            printf("%d  ", *(ptr+i));
            if((i+1) % x == 0)
                printf("\n");
        }        
}