#include<stdio.h>


// *(ptr + i):

// Esta é uma forma de acessar o elemento i em relação ao endereço inicial apontado por ptr.
// *(ptr + i) é equivalente a ptr[i]. Ele diz ao compilador para avançar i posições a partir do endereço inicial 
//apontado por ptr e, em seguida, dereferenciar esse endereço para acessar o valor armazenado lá.
// Essa forma é uma expressão aritmética de ponteiro. Ela usa a aritmética de ponteiro para calcular a posição de 
//memória do elemento.
// Pode ser especialmente útil em situações onde você está trabalhando diretamente com aritmética de ponteiros
// ou em operações que envolvem ponteiros.


// ptr[i]: Esta é a forma de acesso mais comum e é uma sintaxe específica para arrays em C.

void imprimir_array_aritmetica(int *ptr, int tamanho) {
    printf("Usando aritmética de ponteiro:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
}

void imprimir_array_sintaxe(int *ptr, int tamanho) {
    printf("Usando sintaxe de array:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(array) / sizeof(array[0]);

    // Usando aritmética de ponteiro
    imprimir_array_aritmetica(array, tamanho);

    // Usando sintaxe de array
    imprimir_array_sintaxe(array, tamanho);

    return 0;
}