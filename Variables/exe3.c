#include <stdio.h>

int main() {
    float km, yards;
    
    printf("Entrez la distance en Kilomètres: ");
    scanf("%f", &km);
    
    yards = km * 1093.61;
    printf("La distance en des Yards: %.2f", yards);
    
    return 0;
}