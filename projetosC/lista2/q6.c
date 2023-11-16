#include <stdio.h>
#include <stdlib.h>

int main()
{
float s;
float soma = 0;

for(s=1; s<=100; s++){
    soma = soma + 1.0/s;
}
printf("%.2f\n", soma);

return 0;
}