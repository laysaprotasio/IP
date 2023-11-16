#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	int n1, n2, n3, soma_quadrados, quadrado_soma;
	
	printf("Digite primeiro numero:\n");
	scanf("%d", &n1);
	
	printf("Digite segundo numero:\n");
	scanf("%d", &n2);
	
	printf("Digite terceiro numero:\n");
	scanf("%d", &n3);
	
	soma_quadrados = pow(n1,2)+pow(n2,2)+pow(n3,2);
	quadrado_soma = pow((n1+n2+n3),2);
	
	printf("Diferenca %d-%d = %d\n", quadrado_soma, soma_quadrados, quadrado_soma-soma_quadrados);
	
	return 0;
	
	}
