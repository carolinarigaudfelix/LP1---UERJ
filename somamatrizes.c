#include<stdio.h>

void preencher(int *matriz, int tamanho){
    int numero;
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            printf("Insira o elemento: matriz[%d][%d]", i,j);
            scanf("%d", &numero);
            *(matriz + i * tamanho + j) = numero; //vai de i até tamanho e percorre cada coluna com o + j
        }
    }
}

int main(){
    int tamanho, numero;
    printf("Insira o tamanho da matriz: ");
    scanf("%d", &tamanho);

    int matriz_1[tamanho][tamanho], matriz_2[tamanho][tamanho], soma[tamanho][tamanho];
    
    preencher(&matriz_1[0][0], tamanho); // apontamos para o começo da matriz para preencher
    preencher(&matriz_2[0][0], tamanho);
    
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            soma[i][j] = matriz_1[i][j] + matriz_2[i][j];
            printf("Soma[%d][%d] = %d ", i,j, soma[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}