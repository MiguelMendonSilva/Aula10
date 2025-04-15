// Online C compiler to run C program online
#include <stdio.h>


int num_digitado(){
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    return numero;
    
}

int main() {
    int num = num_digitado();
    printf("Você digitou: %d", num);
    return 0;
}