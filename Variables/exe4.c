#include <stdio.h>

int main() {
    float kmh, ms;
    
    printf("La vitesse en (km/h): ");
    scanf("%f", &kmh);
    
    ms = kmh * 0.27778;
    printf("La vitesse en (m/s): %.2f", ms);
    
    return 0;
}