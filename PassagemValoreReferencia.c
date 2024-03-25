#include<stdio.h>

int preencher(float *vetor){
    for(int i=0; i<2; i++){
        scanf("%f", &vetor[i]);
    }
}

int main(){
    float vetor[2], media=0.0, soma=0.0;
    int a=0;
    preencher(vetor);
    for(int i = 0; i<2; i++){
        printf("\nValor do vetor %f", vetor[i]);
        soma += vetor[i];
        a +=1;
    }
    media = soma/a;
    printf("\nMedia:%.2f\nSoma:%.2f", media, soma);
    return 0;
}