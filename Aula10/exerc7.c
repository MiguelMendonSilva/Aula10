#include<stdio.h>

double circunferencia(){
    double raio = 2;
    double circunferencia;
    circunferencia = (3.1415 * 2) * raio;
    printf ("A circunferência é: %lf\n", circunferencia);
    return circunferencia;
}



int main(){

    double C = circunferencia();
    

    return 0;

}
