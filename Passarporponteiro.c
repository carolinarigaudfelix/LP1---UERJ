// escreva uma função que troque os valores de 2 variáveis usando ponteiros

#include<stdio.h>

int trocar(int *pont){
    printf("insira o novo valor: ");
    scanf("%d", pont);
    printf("\n");
    return *pont;
   
}

int main (){
    int valor_inicial = 1;
    int valor_inicial_2 = 3;

    printf("valor inicial = %d\n", valor_inicial);
    printf("Novo valor = %d\n",trocar(&valor_inicial));
    printf("valor inicial = %d\n", valor_inicial_2);
    printf("Novo valor = %d",trocar(&valor_inicial));

}