#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, j, V[10];

    for(i=0; i<10; i++){
        scanf("%d", &V[i]);
        if(V[i] <= 0){
            V[i] = 1;
        }
    }
    for(j=0; j<10; j++){
    printf("X[%d] = %d\n", j, V[j]);
    }
    return 0;
}