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
    int tamanho;
    printf("Insira um tamanho para sua matriz: ");
    scanf("%d", &tamanho);
    int matriz[tamanho][tamanho];
    preencher(&matriz[0][0], tamanho);
    printf("vamos percorrer!");
    for(int i = 0; i<tamanho; i++){
        for(int j = 0; j<tamanho; j++){
            if( i == j){
                printf("%d ", matriz[i][j]);
            }
        }
    }
}