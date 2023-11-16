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
    int ano, a;
    printf("Digite um ano:\n");
    scanf("%d", &ano);

    a = bisexto(ano);

    if(a == 1){
        printf("O ano e bisexto");
    } else {
        printf("O ano nao e bisexto");
    }
    return 0;
}