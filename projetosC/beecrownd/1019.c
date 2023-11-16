#include <stdio.h>
#include <stdlib.h>

int main (){
    int n, m, h, s;

    scanf("%d", &n);
    m = n/60;
    h = m/60;

    printf("%d:%d:%d", h, m%60, n%60);
}