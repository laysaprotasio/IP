#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, x, m, p;
	
		for(i=1; i<=3; i++) {
			scanf("%d", &x);
		
			if(i == 1){
				m = x;	
				}
				if (x > m){
					m = x;
					p = i;
				}
		}	
	printf("%d\n%d\n", m, p);			
	
    return 0;
}
