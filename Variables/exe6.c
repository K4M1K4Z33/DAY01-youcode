#include <stdio.h>

int main() {
    float a, b;
    
    printf("Nombre 1: ");
    scanf("%f", &a);
    printf("Nombre 2: ");
    scanf("%f", &b);
    
    printf("\n%.2f + %.2f = %.2f", a, b, a + b);
    printf("\n%.2f - %.2f = %.2f", a, b, a - b);
    printf("\n%.2f * %.2f = %.2f", a, b, a * b);
    printf("\n%.2f / %.2f = %.2f", a, b, a / b);
    
    return 0;
}