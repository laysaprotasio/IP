#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int i, n;
	float soma;
	
	printf("Digite o numero inteiro n: \n");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		soma = soma + 1.0/i;
	}
	
	printf("Soma final: %f", soma);
	

	return 0;
}
