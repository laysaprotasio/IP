#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int e_bissexto(int ano){
	if(ano%4==0 && ano%100!=0){
		return 1;
	} else if (ano%4==0 && ano%100==0 && ano%400==0){
		return 1;
	} else {
	return 0;
	}
}
	int main (){
		
		int ano_teste, ret;
		printf("Digite um ano teste: \n");
		scanf("%d", &ano_teste);
		
		ret = e_bissexto(ano_teste);
		if(ret == 0){
			printf("ano nao e bissexto");
		} else {
			printf ("ano bissexto");
		}
		return 0;
	}

