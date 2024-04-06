#include <stdio.h>
#include <string.h>
void verifica_palindromo(char *vet, int tamanho){
    char comeco = vet[0];
    char fim = vet[tamanho-1];
    for(int i =0; i< tamanho-1; i++){
        for(int j =0; j < tamanho-1; j--){
            if(comeco != fim){
                printf("N e um palindromo");
            }
            else
                printf("E um palindromo");
                return;
        }
    }
}
int main(){
    void verifica_palindromo(char *vet, int tamanho);
    char palavra[10];
    scanf("%s",palavra);
    int tamanho = strlen(palavra);
    verifica_palindromo(palavra, tamanho);
}