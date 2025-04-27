#include <stdio.h>
#include "igualdade.h"

int main(){

    int x;
    int y;
    

    printf("Digite um número: ");
    scanf("%d", &x);

    printf("Digite outro número: ");
    scanf("%d", &y);

    
    if (igual(x, y)){
        printf("São iguais: Sim\n");
    }else {
        printf("São iguais: Não\n");
        printf("Maior: %d\n", maior(y, x));
        printf("Menor: %d\n", menor(x,y));
    }


    return 0;
}

