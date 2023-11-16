#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, f, t;
    scanf("%d %d", &i, &f);

        if(i == f){
            t = 24;
        } else if(i>=12 && f<12){
            t = (24 - i) +f;
        } else if(i>=12 && f> 12){
            t = f - i; 
        } else if(i<12){
            t = f - i;
        }
    printf("O JOGO DUROU %d HORA(S)\n", t);
}