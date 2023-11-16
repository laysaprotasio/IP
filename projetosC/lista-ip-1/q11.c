#include <stdio.h>
#include <b>

int main(){
	
	int h1, h2, d0, d1, d2;//
	
	scanf("%d %d", &h1, &h2);
	
	if(h1>12 && h2<12) {
		d1 = (24-h1) + h2;
		printf("O JOGO DUROU %d HORA(S)\n", d1);
	} else if (h1<12 && h2>2){
		d2 = h2-h1;
		printf("O JOGO DUROU %d HORA(S)\n", d2);
	} else if (h1 == h2){
		d0 = 24;
		printf("O JOGO DUROU %d HORA(S)\n", d0);
	}
	
    
    return 0;
    }
