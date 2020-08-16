#include<stdio.h>
#include<stdlib.h>
#define linha 5
#define coluna 8
int verifica_linha(int*);//verifica se existem outros inicios de palavra na linha
int verifica_coluna(int*);// verifica se existem outros inicios de palavra na coluna a cima
void func(int*);
int main(int argc, char *argv[]){
    int matriz[linha][coluna] = {{0,-1,0,-1,-1,0,-1,0}
                                ,{0,0,0,0,-1,0,0,0}
                                ,{0,0,-1,-1,0,0,-1,0}
                                ,{-1,0,0,0,0,-1,0,0}
                                ,{0,0,-1,0,0,0,-1,-1}};
    
    int i,j;

    printf("\n------Matriz antes da funcao------\n");
    for(i=0; i<linha; i++){//imprime matriz antes da funcao
        for (j=0; j<coluna; j++){
            printf("%d   ", matriz[i][j]);
        }
        printf("\n");        
    }
    
    func(&matriz[0][0]);//aplica a funcao na matriz

    printf("\n------Matriz depois da fucao------\n");
    for(i=0; i<linha; i++){//imprime matriz dps de aplicar a funcao
        for (j=0; j<coluna; j++){
            printf("%d   ", matriz[i][j]);
        }
        printf("\n");        
    }
        return 0;
}
void func(int *ptr){
    int i;//varriavel de contador
    int cont = 0;//contador de palavras
    int vl = 1, vc = 1;//variaveis para verificar se pode aver um inicio de palavra

    for(i=0; i<linha*coluna; i++){//percorre todso os valores da matriz
        if(*(ptr+i) == 0){//verifica se o valor e 0 e pode formar palavra

            if(*(ptr+i+coluna) == 0 && i+coluna < coluna*linha){//verifica se o item de baixo && igual zero e se nao esta na ultima linha
                if(i >= coluna){//apenas verifica se possuio itens listados acima do prt+i
                    vc = verifica_coluna((ptr+i));//verrifica td a coluna anterior
                }else{
                    vc = 0;
                }
            }
            
            if(*(ptr+i+1) == 0 && (i+1)%(coluna-1) != 0){//verifica se o proximo item da linha é igual a zero && e se ele nao esta no ultimo item
                if(i%coluna != 0 || i == 0){//verifica se mão esta na primeira coluna
                    vl = verifica_linha((ptr+i));//ferifica anteriores da linha
                }else{
                    vl = 0;
                }
            }

            if(vl == 0 || vc == 0){//se qualquer condicao for zero pode ser palavra
                cont++;//soma no contador de palavras
                *(ptr+i) = cont;//modifica o valor do item com a conta de palavras
            }
        }  
        vl = 1;
        vc = 1;
    }
}
int verifica_linha(int *mat){//recebe endereco de um elemento da matriz
    int i = 0;

    while(1){
        
        if(*(mat+i) != 0 && *(mat+i) != -1)//verifica se a linha já esta ocupada por uma palavra
            return 1;
        else if(*(mat+i) == -1)//se não tiver ele encontra -1
            return 0;
        
        i--;
    }
}
int verifica_coluna(int *mat){//recebe endereco de um elemento da matriz
    int i = 0;

    while(1){
        
    if(*(mat+i) != 0 && *(mat+i) != -1)//verifica se existe outra palavra na coluna
        return 1;
    else if(*(mat+i) == -1)//se não tiver ele encontra 1
        return 0;
        
    i -= coluna;
    }
}