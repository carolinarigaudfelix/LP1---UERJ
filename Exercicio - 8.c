#include <stdio.h>

int main(){
	int fatorial = 5;
	int resposta = 1;
	
	for ( ; fatorial >=1; --fatorial){ // não precisa inicializar
		resposta *= fatorial;
	}
	printf("%d", resposta); 
	
	return 0;
}
