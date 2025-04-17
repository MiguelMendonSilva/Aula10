#include<stdio.h>

double area(){
    double raio = 2;
    double area;

    area = 3.1415 * (raio * raio);
    printf("A area é: %lf\n", area);
    return area;
}



int main(){

    double A = area();

    return 0;
}
