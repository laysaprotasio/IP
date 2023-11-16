#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, j, N[10];

    scanf("%d", &N[0]);

    for(i=1; i<10; i++){
        if(i == 1){
        N[i] = 2*N[0];
        }
        N[i] = 2*N[i-1];
    }
    for(j=0; j<10; j++){
    printf("N[%d] = %d\n", j, N[j]);
    }
    return 0;
}