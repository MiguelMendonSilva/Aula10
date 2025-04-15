#include<stdio.h>

int diametro(){
    double diametro;
    double raio;
    printf("Digite o raio: ");
    scanf("%lf", &raio);
    diametro = raio * 2;
    return diametro;
}


int main(){
    double D = diametro();
    printf("O diametro é: %lf" , D);

    return 0;
}