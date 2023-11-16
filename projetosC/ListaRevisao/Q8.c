#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int validacao(char* senha){
    int az = 0;   //96-122
    int AZ = 0;  //65-90
    int numero = 0; //48-57
    int i;

    if (strlen(senha) > 5 ){

        for(i=0; i < strlen(senha); i++){
            if (senha[i] >= 96 && senha[i] <= 122){
                az = 1;
            }
            if (senha[i] >= 65 && senha[i] <=90){
                AZ = 1;
            }
            if (senha[i] >=48 && senha[i] <= 57){
                numero = 1;
            }
        }

        if (az == 0 || AZ == 0 || numero == 0){
            return 0;
        } else {
            return 1;
        }

    } else {
        return 0;
    }

}



int main()
{

    int ret;
    char senha_usr[40];
    printf("Digite uma nova senha: \n");
    scanf("%s", &senha_usr);
    ret = validacao(senha_usr);
    if (ret == 1){
            printf("senha valida");
    } else {
            printf("senha invalida");
    }


    return 0;
}
