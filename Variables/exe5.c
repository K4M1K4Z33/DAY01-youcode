#include <stdio.h>

int main() {
    float temp;
    
    printf("La temperature de l'eau (C): ");
    scanf("%f", &temp);
    
    if (temp < 0) {
        printf("Solide (glace)");
    }
    else if (temp < 100) {
        printf("Liquide (eau)");
    }
    else {
        printf("Gaz (vapeur)");
    }
    
    return 0;
}