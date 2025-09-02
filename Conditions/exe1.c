#include <stdio.h>

int main() {
    int nombre;
    
    printf("Entrez un nombre: ");
    scanf("%d", &nombre);
    
    if (nombre % 2 == 0) {
        printf("Pair");
    } else {
        printf("Impair");
    }
    
    return 0;
}