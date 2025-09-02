#include <stdio.h>
#include <stdlib.h>

int main() {
int age;
char nom[50],prenom[50],sexe;
char email[100];
    printf("Entrez votre nom: \n");
    scanf("%s", nom);
    printf("Entrez votre prenom: \n");
    scanf("%s", &prenom);
    printf("Entrez votre age: \n");
    scanf("%d", &age);
    printf("Entrez votre sexe (M/F): \n");
    scanf(" %c", &sexe);
    printf("Entrez votre email: \n");
    scanf("%s", &email);

    printf("\n=== INFORMATIONS PERSONNELLES ===\n");
    printf("Nom: %s\n", nom);
    printf("Prenom: %s\n", prenom);
    printf("Age: %d ans\n", age);
    printf("Sexe: %c\n", sexe);
    printf("Email: %s\n", email);
    printf("==================================\n");

    return 0;
}