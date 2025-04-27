#include<stdio.h>

int numero(int x){

    printf("Digite um número: ");
    scanf("%d", &x);

    return x;
}

int main (){
    int x;
    printf("Número digitado: %d\n", numero(x));

    return 0;
}
