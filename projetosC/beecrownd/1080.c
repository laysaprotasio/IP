#include <stdio.h>
#include <stdlib.h>

int main (){

int v[5], maior, i, pos;

for(i=1; i<=5; i++){
    scanf("%d", &v[i]);
}
maior = 0;
pos = 0;
for(i=1; i<=5; i++){
    if(v[i] > maior){
        maior = v[i];
        pos = i;
    }
}
printf("%d\n", maior);
printf("%d\n", pos);

    return 0;
}