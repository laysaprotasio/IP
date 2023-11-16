#include <stdio.h>
#include <stdlib.h>

int bisexto (int ano){

    if(ano%4 == 0){
        if (ano%100 != 0){
            return 1;
        }
    } else if(ano%4 == 0){
        if (ano%100 == 0){
            if(ano%400 == 0){
                return 1;
            }
        }
    } else{
        return 0;
    }

}

int main (){

    int v[4], prox, ret, i; // v[4] = vetor com anos bisextos

    prox = 0; // prox = próxima posição livre do vetor

    for(i=2022; i<2038; i++){// i serão anos a serem testados
        ret = bisexto(i); // ret = retorno da função bisexto
        if(ret == 1){
            v[prox] = i;
            prox++;
        }

    }

    for(i=0; i<4; i++){
        printf("%d, e ano bisexto\n", v[i]);
    }

    return 0;
}