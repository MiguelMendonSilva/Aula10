#include<stdio.h>
#include "igualdade.h"





int main(){

    int x = 10;
    int y = 11;
    int z = 12;

    int retorno = maior(x, y);
    int maiores = maior(retorno, z);
    printf("%d\n", maiores);


    return 0;
}
