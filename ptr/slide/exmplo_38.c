int main(){
    int **p,i,j;
    p=calloc(5,sizeof(int*));
    
    for(i=0;i<5;i++){
        p[i]=calloc(3,sizeof(int));
    }

    printf("Digiteosvaloresdamatriz\n");
    
    for(i=0;i<5;i++)
        for(j=0;j<3;j++)
            scanf("%d",&p[i][j]);
    printf("Matrizlida\n");
    
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            printf("%d,",p[i][j]);
            }
        printf("\n");
        }
        for(i=0;i<5;i++){//desalocandomemóriausadafree
        (p[i]);
        }
    free(p);
}