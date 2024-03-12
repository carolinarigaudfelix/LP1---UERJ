#include<stdio.h>
main(){
	int n1, n2,n3, soma;
	float media;
	scanf("%d\n%d\n%d", &n1, &n2, &n3);
	soma = n1 + n2 + n3;
	media = (float)soma/3.0;
	
	printf("A media vale %f\n", media);
	if(n1>n2 && n1>n3)
		printf("%d e o maior numero",n1);
	else{
		if(n2>n1 && n2>n3)
			printf("%d e o maior numero", n2);
		else{
			if(n3>n2 && n3>n1)
			printf("%d e o maior numero",n3);
		}
	}
	return 0;
	
	
}
