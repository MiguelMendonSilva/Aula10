#include <stdio.h>

int igual(int x, int y){

    if (x == y){
        return 1;
    }else{
        return 0;
    }
}


int main(){

    int a = 10;
    int b = 10;

    int resultado;

    resultado = igual(a, b);
    
    printf("O resultado é: %d\n", resultado);

    return 0;
}
