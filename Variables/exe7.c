#include <stdio.h>

int main() {
    float a, b, c, moyenne;
    
    printf("1er Nombre: ");
    scanf("%f", &a);
    printf("2eme Nombre: ");
    scanf("%f", &b);
    printf("3eme Nombre: ");
    scanf("%f", &c);
    
    moyenne = (a*2 + b*3 + c*5) / 10;
    printf("Moyenne: %.2f", moyenne);
    
    return 0;
}