#include <stdio.h>

int main() {
    float celsius, kelvin;
    
    printf("Entrez la temperature en Celsius: ");
    scanf("%f", &celsius);
    
    kelvin = celsius + 273.15;
    
    printf("%.1f C = %.1f K", celsius, kelvin);
    
    return 0;
}