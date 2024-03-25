#include<stdio.h>

void inserirNumero(float *numero){
    scanf("%f", numero);
}

int main(){
    void inserirNumero(float *numero);
    float n;
    inserirNumero(&n);
    printf("o numero = %.2f", n);
}