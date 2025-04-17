#include<stdio.h>

double diametro(){
    double diametro;
    double raio = 2;
    diametro = raio * 2;
    printf("O diametro é: %lf\n", diametro);
    return diametro;
}


int main(){
    double D = diametro();
    return 0;
}
