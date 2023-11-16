#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int seg, min, horas, segundos, minutos;
	
	scanf("%d", &seg);
	min = seg/60;
	horas = min/60;
	segundos = seg%60;
	minutos = min%60;
	
	printf("%d:%d:%d\n", horas, minutos, segundos);
    
    return 0;
    }

