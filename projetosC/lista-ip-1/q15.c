#include <stdio.h>

int main(){
	
	int X, Y, i, a;

	scanf("%d %d", &X,&Y);

    if(X>Y){
        a = X;
        X = Y;
        Y = a;
    }

	for(i=X+1; i<Y; i++) {
		if(i%5 == 2 || i%5 == 3){
		    printf ("%d\n", i);
		}
	}	

    return 0;
}
