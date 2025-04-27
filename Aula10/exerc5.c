#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

void imprimeSoma(int resultado) {
    printf("O resultado é: %d\n", resultado);
}

int main() {
    int x = 5;
    int y = 5;
    int resultado = soma(x, y);
    
    imprimeSoma(resultado); 
    
    return 0;
}
