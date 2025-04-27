#include <stdio.h>

int maior(int x, int y){

    if (x > y){
        return x;
    } else{
        return y;
    }

}


int main(){

    int a = 10;
    int b = 15;

    int resultado = maior(a, b);
    printf ("O maior número é: %d", resultado);


    return 0;
}
