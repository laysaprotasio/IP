#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int v, n100, n50, n20, n10, n5, n2, n1;
	
	
	scanf("%d", &v);
	if (v> 0 && v < 1000000){
		n100 = v/100;
		n50 = (v%100)/50;
		n20 = ((v%100)%50)/20;
		n10 = (((v%100)%50)%20)/10;
		n5 = ((((v%100)%50)%20)%10)/5;
		n2 = (((((v%100)%50)%20)%10)%5)/2;
		n1 = ((((((v%100)%50)%20)%10)%5)%2)/1;
	} 
	
	printf("%d\n", v);
    printf("%d nota(s) de R$ 100,00\n", n100);
    printf("%d nota(s) de R$ 50,00\n", n50);
    printf("%d nota(s) de R$ 20,00\n", n20);
    printf("%d nota(s) de R$ 10,00\n", n10);
    printf("%d nota(s) de R$ 5,00\n", n5);
    printf("%d nota(s) de R$ 2,00\n", n2);
    printf("%d nota(s) de R$ 1,00\n", n1);
    
    return 0;
    }
