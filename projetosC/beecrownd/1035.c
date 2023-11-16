#include <stdio.h>
#include <stdlib.h>

int main (){
    int A, B, C, D;
    
    scanf("%d %d %d %d", &A, &B, &C, &D);

    if(B>C){
        if(D>A){
            if(C+D>A+B){
                if(C>0 && D>0){
                    if(A%2 == 0){
                        printf("valores aceitos\n");

                    }
                }
            }
        }
    } else{
        printf("valores nao aceitos\n");
    }
}