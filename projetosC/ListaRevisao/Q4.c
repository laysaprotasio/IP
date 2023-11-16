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
		
		int ano_teste, ret, anosEncontrados;
		
		ano_teste = 2022;
		anosEncontrados = 0;
		while (anosEncontrados<4){
			ret = e_bissexto(ano_teste);
			if (ret == 1){
				anosEncontrados++;
				printf("ano bissexto: %d\n", ano_teste);
			}
			ano_teste++;
		}
		return 0;
	}
