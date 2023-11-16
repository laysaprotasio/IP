#include <stdio.h>
#include <stdlib.h>

int main (){

    int i, a, m, d;

    scanf("%d", &i);

    a = i/365;
    m = (i%365)/30;
    d = (i%365)%30;

    printf("%d ano(s)\n", a);
    printf("%d mes(es)\n", m);
    printf("%d dia(s)\n", d);
}