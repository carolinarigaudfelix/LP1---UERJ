//Escreva uma função que multiplique todos os elementos de um array
//array por uma constante, utilizando ponteiros

#include<stdio.h>

void multiplica_constante(int *vetor,int tamanho){
    int constante = 4;
    for(int i = 0; i<tamanho; i++){
            vetor[i] *= constante;
    }
}

int main(){
    int vetor[3], valor, tamanho=9;
   
    for(int i = 0; i<3; i++){
        printf("Insira o valor: ");
        scanf("%d", &valor);
        vetor[i] = valor;
    }
    multiplica_constante(vetor,tamanho);

   
     for(int i = 0; i<3; i++){
        printf("%d ", vetor[i]);
    }
   

   
}