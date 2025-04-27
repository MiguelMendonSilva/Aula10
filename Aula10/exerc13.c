#include <stdio.h>

int maior(int x, int y){

    if (x > y){
        return y;
    } else{
        return x;
    }

}


int main(){

    int a = 10;
    int b = 15;

    int resultado = maior(a, b);
    printf ("O menor número é: %d", resultado);


    return 0;
}
