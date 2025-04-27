#include <stdio.h>
#include "util.h"

int main(){

    double raio;

    printf("Digite o raio: ");
    scanf("%lf", &raio);

    double diame = diametro(raio);
    printf("O diametro é: %lf\n", diame);

    double a= area(raio);
    printf("A area é: %lf\n", a);

    double circ = circunferencia(raio);
    printf("A circunferencia é: %lf\n", circ);


    return 0;
}

