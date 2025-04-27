#include <stdio.h>

int maenor(int x, int y){

    if (x > y){
        return y;
    } else{
        return x;
    }

}


int main(){

    int a = 10;
    int b = 15;

    int resultado = menor(a, b);
    printf ("O menor número é: %d", resultado);


    return 0;
}
