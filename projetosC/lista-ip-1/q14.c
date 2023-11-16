#include <stdio.h>
#include <stdlib.h>

int main () {

	float n1 = -1, n2 = -1, media;

	while (n1<0 || n1>10){
		scanf("%f", &n1);
        if(n1<0 || n1>10){
		    printf("nota invalida\n");
        }
	}
	while (n2<0 || n2>10){
		scanf("%f", &n2);
        if(n2<0 || n2>10){
		    printf("nota invalida\n");
        }
	}
	if(n1>=0 && n1<=10){
		if(n2>=0 && n2<=10){
			media = (n1+n2)/2;
			printf("media = %.2f\n", media);
		}
	}

	return 0;
} 
