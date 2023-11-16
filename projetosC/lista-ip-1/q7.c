#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float n1, n2, media;
	
	scanf("%f %f", &n1, &n2);
	
	if(n1>=0 && n1<=10){
		if(n2>=0 && n2<=10){
			media = (n1+n2)/2;
			printf("media = %.2f\n", media);
		} else {
			printf("nota invalida\n");
		}
	} else {
		printf("nota invalida\n");
	}

    return 0;
}