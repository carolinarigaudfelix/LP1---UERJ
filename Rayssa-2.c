//recebe lista de numreos inteiros, vetor dinamico
#include<stdio.h>
#include<stdlib.h>

void preencher_vetores(int *vetor, int tam){
    for(int i = 0;i<tam; i++){
        vetor[i]= scanf("%d", vetor[i]);
    }
}
void percorre_vetor(int * vetor, int tam){
    for(int i = 0; i<tam; i++){
        printf("%d", vetor[i]);
    }
}

int main(){
    void preencher_vetores(int *vetor,int tam);
    void percorre_vetor(int * vetor, int tam);
    int *vet, tam;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    vet = malloc(tam*sizeof(*vet));
    preencher_vetores(&vet, tam);
    percorre_vetor(vet,tam);
}
   


    
